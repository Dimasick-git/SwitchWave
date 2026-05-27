// Copyright (c) 2024 averne <averne381@gmail.com>
// Copyright (c) 2025 Dimasick-git — улучшения: логирование, branch hints, утилиты
//
// This file is part of SwitchWave.
//
// SwitchWave is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// SwitchWave is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with SwitchWave.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <array>
#include <string_view>
#include <utility>

namespace sw::utils {

using namespace std::string_view_literals;

// ── Препроцессорные утилиты ──────────────────────────────────────────────────

#define _SW_CAT(x, y) x ## y
#define  SW_CAT(x, y) _SW_CAT(x, y)
#define _SW_STR(x) #x
#define  SW_STR(x) _SW_STR(x)

#define SW_ANONYMOUS SW_CAT(var, __COUNTER__)

#define SW_SCOPEGUARD(f) auto SW_ANONYMOUS = ::sw::utils::ScopeGuard(f)

#define SW_UNUSED(...) ::sw::utils::variadic_unused(__VA_ARGS__)

#define SW_ARRAYSIZE(a) (sizeof(a) / sizeof(*(a)))

// ── Подсказки предсказателю ветвлений ────────────────────────────────────────

#define SW_LIKELY(x)   __builtin_expect(!!(x), 1)
#define SW_UNLIKELY(x) __builtin_expect(!!(x), 0)

// ── Логирование ──────────────────────────────────────────────────────────────

// Уровни журнала
enum class LogLevel : int {
    Debug   = 0,
    Info    = 1,
    Warn    = 2,
    Error   = 3,
};

// Текущий минимальный уровень логирования (можно переопределить через -DSW_LOG_LEVEL=N)
#ifndef SW_LOG_LEVEL
#  ifdef DEBUG
#    define SW_LOG_LEVEL 0
#  else
#    define SW_LOG_LEVEL 1
#  endif
#endif

// Форматирование с указанием файла и строки
#define SW_LOG(level, fmt, ...) \
    do { \
        if (static_cast<int>(level) >= SW_LOG_LEVEL) { \
            const char *_lvl = (level == ::sw::utils::LogLevel::Error) ? "ERR" : \
                               (level == ::sw::utils::LogLevel::Warn)  ? "WRN" : \
                               (level == ::sw::utils::LogLevel::Info)  ? "INF" : "DBG"; \
            std::printf("[%s] %s:%d: " fmt "\n", _lvl, __FILE_NAME__, __LINE__ \
                __VA_OPT__(,) __VA_ARGS__); \
        } \
    } while (0)

#define SW_LOG_DEBUG(fmt, ...) SW_LOG(::sw::utils::LogLevel::Debug, fmt __VA_OPT__(,) __VA_ARGS__)
#define SW_LOG_INFO(fmt, ...)  SW_LOG(::sw::utils::LogLevel::Info,  fmt __VA_OPT__(,) __VA_ARGS__)
#define SW_LOG_WARN(fmt, ...)  SW_LOG(::sw::utils::LogLevel::Warn,  fmt __VA_OPT__(,) __VA_ARGS__)
#define SW_LOG_ERR(fmt, ...)   SW_LOG(::sw::utils::LogLevel::Error, fmt __VA_OPT__(,) __VA_ARGS__)

// ── Базовые утилиты ──────────────────────────────────────────────────────────

template <typename ...Args>
__attribute__((always_inline))
static inline void variadic_unused(Args &&...args) {
    (static_cast<void>(args), ...);
}

constexpr auto align_down(auto v, auto a) {
    return v & ~(a - 1);
}

constexpr auto align_up(auto v, auto a) {
    return align_down(v + a - 1, a);
}

constexpr auto bit(auto b) {
    return static_cast<decltype(b)>(1) << b;
}

constexpr auto mask(auto b) {
    return (static_cast<decltype(b)>(1) << b) - 1;
}

// ── ScopeGuard ───────────────────────────────────────────────────────────────

template <typename F>
struct ScopeGuard {
    [[nodiscard]] ScopeGuard(F &&f): f(std::move(f)) { }

    ScopeGuard(const ScopeGuard &) = delete;
    ScopeGuard &operator =(const ScopeGuard &) = delete;

    ~ScopeGuard() {
        if (SW_LIKELY(this->want_run))
            this->f();
    }

    void cancel() {
        this->want_run = false;
    }

    private:
        bool want_run = true;
        F f;
};

// ── Размер в удобочитаемом формате ───────────────────────────────────────────

static inline std::pair<double, std::string_view> to_human_size(std::size_t bytes) {
    static constexpr std::array suffixes = {
        "B"sv, "kiB"sv, "MiB"sv, "GiB"sv, "TiB"sv, "PiB"sv,
    };

    if (SW_UNLIKELY(bytes == 0))
        return { 0.0, suffixes[0] };

    auto mag = std::min(std::size_t(63 - __builtin_clzll(bytes)) / 10, suffixes.size() - 1);
    return { static_cast<double>(bytes) / (1ull << mag*10), suffixes[mag] };
}

// ── Чтение файла целиком ─────────────────────────────────────────────────────

template <typename T>
static inline int read_whole_file(T &container, const char *path, const char *mode) {
    FILE *fp = std::fopen(path, mode);
    if (SW_UNLIKELY(!fp)) {
        SW_LOG_WARN("Failed to open %s: %s", path, std::strerror(errno));
        return -1;
    }
    SW_SCOPEGUARD([fp] { std::fclose(fp); });

    std::fseek(fp, 0, SEEK_END);
    auto fsize = static_cast<std::size_t>(std::ftell(fp));
    std::rewind(fp);

    container.resize(fsize);

    if (auto read = std::fread(container.data(), 1, fsize, fp); read != fsize) {
        SW_LOG_WARN("Failed to read %s: got %zu, expected %zu", path, read, fsize);
        return -1;
    }

    return 0;
}

// ── StaticString ─────────────────────────────────────────────────────────────

template <std::size_t Size>
class StaticString {
    static_assert(Size > 0, "StaticString размер должен быть > 0");

    public:
        constexpr inline StaticString() = default;

        constexpr inline StaticString(const char *data) {
            if (data) std::strncpy(this->storage, data, this->capacity());
        }

        constexpr inline StaticString(std::string_view sv) {
            std::strncpy(this->storage, sv.data(), this->capacity());
        }

        template <std::size_t Size2>
        constexpr inline StaticString(const StaticString<Size2> &other) {
            static_assert(Size >= Size2, "StaticString назначение: целевой размер слишком мал");
            std::strncpy(this->storage, other.c_str(), this->capacity());
        }

        constexpr inline StaticString &operator=(const char *data) {
            if (data) std::strncpy(this->storage, data, this->capacity());
            return *this;
        }

        constexpr inline StaticString &operator=(std::string_view sv) {
            std::strncpy(this->storage, sv.data(), this->capacity());
            return *this;
        }

        template <std::size_t Size2>
        constexpr inline StaticString &operator=(const StaticString<Size2> &other) {
            static_assert(Size >= Size2, "StaticString назначение: целевой размер слишком мал");
            std::strncpy(this->storage, other.c_str(), this->capacity());
            return *this;
        }

        constexpr inline StaticString<Size> operator+(const char *data) const {
            StaticString<Size> out = *this;
            if (data) std::strncat(out.data(), data, out.capacity() - out.length());
            return out;
        }

        constexpr inline StaticString<Size> operator+(std::string_view sv) const {
            StaticString<Size> out = *this;
            std::strncat(out.data(), sv.data(), out.capacity() - out.length());
            return out;
        }

        template <std::size_t Size2>
        constexpr inline StaticString<Size> operator+(const StaticString<Size2> &other) const {
            StaticString<Size> out = *this;
            std::strncat(out.data(), other.c_str(), out.capacity() - out.length());
            return out;
        }

        template <std::size_t Size2>
        constexpr inline bool operator==(const StaticString<Size2> &other) const {
            return std::string_view(*this) == std::string_view(other);
        }

        template <std::size_t Size2>
        constexpr inline auto operator<=>(const StaticString<Size2> &other) const {
            return std::string_view(*this) <=> std::string_view(other);
        }

        constexpr inline operator std::string_view() const {
            return std::string_view(this->storage);
        }

        constexpr inline const char *c_str() const {
            return this->storage;
        }

        constexpr inline char *data() {
            return this->storage;
        }

        constexpr inline const char *data() const {
            return this->storage;
        }

        constexpr inline bool empty() const {
            return this->storage[0] == '\0';
        }

        constexpr inline void clear() {
            this->storage[0] = '\0';
        }

        constexpr inline std::size_t size() const {
            return std::strlen(this->storage);
        }

        constexpr inline std::size_t length() const {
            return std::strlen(this->storage);
        }

        constexpr static inline std::size_t capacity() {
            return Size - 1;
        }

    private:
        char storage[Size] = {};
};

using StaticString8   = StaticString< 8>;
using StaticString16  = StaticString<16>;
using StaticString32  = StaticString<32>;
using StaticString64  = StaticString<64>;
using StaticString128 = StaticString<128>;

} // namespace sw::utils
