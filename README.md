# <img src="https://github.com/user-attachments/assets/b81b9503-948e-4cba-b0a1-f5f809588aad" width="48"> SwitchWave

> **Hardware-accelerated media player for Nintendo Switch, built on mpv and FFmpeg.**
> Fork by [Dimasick-git](https://github.com/Dimasick-git) — Russian localization, CI/CD auto-build, code improvements.
> Original project: [averne/SwitchWave](https://github.com/averne/SwitchWave)

[![Сборка / Build](https://github.com/Dimasick-git/SwitchWave/actions/workflows/build.yml/badge.svg)](https://github.com/Dimasick-git/SwitchWave/actions/workflows/build.yml)
[![Последний релиз / Latest Release](https://img.shields.io/github/v/release/Dimasick-git/SwitchWave?label=релиз)](https://github.com/Dimasick-git/SwitchWave/releases/latest)
[![Лицензия / License](https://img.shields.io/github/license/Dimasick-git/SwitchWave)](LICENSE)

---

## О проекте

**SwitchWave** — аппаратно-ускоренный медиаплеер для Nintendo Switch на базе [mpv](https://mpv.io/) и [FFmpeg](https://ffmpeg.org/).

Этот форк добавляет:
- Полный **перевод интерфейса на русский язык** (компилируемая система i18n)
- **Автоматическую сборку** через GitHub Actions при каждом коммите
- **Автоматические релизы** — сравнивает версию в Makefile с тегами, создаёт релиз при обновлении
- **Автосинхронизацию** с оригинальным репозиторием (еженедельно, с защитой кастомных файлов)
- Улучшения кода и документации

---

## Скриншоты

<p float="center">
    <img src="https://github.com/user-attachments/assets/09aed446-148a-4276-8b07-336890c224a3" width="413" />
    <img src="https://github.com/user-attachments/assets/6e354511-47bc-4898-881c-348d5a9e6fbc" width="413" />
    <img src="https://github.com/user-attachments/assets/b86eb7c6-4229-46c6-8709-86d1a6ee8eed" width="413" />
    <img src="https://github.com/user-attachments/assets/70f4be3e-fa1e-434a-b76c-4fb6b671f80e" width="413" />
</p>

---

## Возможности

### Видео
- Аппаратное ускорение декодирования для кодеков:
  - MPEG1/2/4
  - VC1 / WMV3
  - H.264 / AVC *(10+ бит — без аппаратного ускорения)*
  - H.265 / HEVC *(12+ бит — без аппаратного ускорения)*
  - VP8 / VP9 *(10+ бит — без аппаратного ускорения)*
  - AV1 (программное, через dav1d)
- Воспроизведение до **4K60fps** через кастомный бэкенд [deko3d](https://github.com/devkitPro/deko3d)
- Прямой рендеринг (ускорение программного декодирования)
- Пользовательские постобработочные шейдеры
- Аппаратные фильтры: резкость и шумоподавление

### Аудио
- Нативные API Nintendo, поддержка до **5.1 surround**
- Регулировка громкости, задержки, микширования каналов
- Приоритет русских аудиодорожек (настроено в `misc/mpv.conf`)

### Субтитры
- Поддержка ASS/SSA через libass
- Загрузка внешних файлов субтитров
- Регулировка размера, позиции, задержки, FPS

### Сеть и хранилище
- Потоковое воспроизведение через **HTTP/S, Samba, NFS, SFTP**
- Поддержка внешних USB-накопителей ([libusbhsfs](https://github.com/DarkMatterCore/libusbhsfs))
- Карта памяти SD

### Интерфейс
- **Полный русский интерфейс** (компилируемая i18n-система)
- Богатый и отзывчивый UI на базе [ImGui](https://github.com/ocornut/imgui)
- Панель воспроизведения с анимацией, главами, кэшем
- Меню с настройками видео/аудио/субтитров, статистикой
- Консоль mpv для выполнения команд и просмотра журналов
- Поддержка сенсорных жестов (перемотка, яркость, громкость)
- Хранение истории воспроизведённых файлов
- Сохранение позиции воспроизведения

---

## Установка

1. Скачайте [последний релиз](https://github.com/Dimasick-git/SwitchWave/releases/latest)
2. Распакуйте архив в **корень SD-карты** (объединяйте папки, не перезаписывайте)
3. Запустите через hbmenu

### Настройка

- Сетевые шары настраиваются прямо в приложении (вкладка **Настройки** → **Сеть**)
- Параметры mpv редактируются через встроенный редактор (вкладка **Редактор**)
- Большинство настроек воспроизведения доступны в меню плеера (кнопка `Y`)
- Полная документация mpv: [mpv.io/manual](https://mpv.io/manual/master/)

---

## Управление

### Воспроизведение

| Действие | Кнопка |
|----------|--------|
| Выход | `+` |
| Пауза / Воспроизведение | `A` или `X` |
| Перемотка ±5 сек | `L` / `R` |
| Перемотка ±60 сек | `ZL` / `ZR` |
| Переключение глав | `ZL`/`ZR` + `↑`/`↓` |
| Скриншот | `Стик L` + `Стик R` |
| Показать панель воспроизведения | `↑` / `↓` |
| Скрыть панель воспроизведения | `B` |
| Открыть меню | `Y` |
| Открыть консоль | `-` |

### Сенсорное управление

| Жест | Действие |
|------|----------|
| Горизонтальное скольжение | Перемотка |
| Скольжение по правой стороне | Громкость |
| Скольжение по левой стороне | Яркость |

---

## Сборка

### Docker (рекомендуется)

```sh
./build-docker.sh
```

Автоматически собирает образ и компилирует всё. Результат — в папке `build/`.

Для сборки с GIMP 3:
```sh
GIMP_VERSION=3 ./build-docker.sh
```

### Вручную

1. Установите окружение [devkitpro](https://devkitpro.org/wiki/devkitPro_pacman) для разработки Switch homebrew
2. Установите пакеты:
   ```
   switch-bzip2 switch-dav1d switch-freetype switch-glm switch-harfbuzz
   switch-libarchive switch-libass switch-libfribidi switch-libjpeg-turbo
   switch-libpng switch-libwebp switch-curl switch-libssh2 switch-mbedtls
   switch-ntfs-3g switch-lwext4 switch-pkg-config dkp-meson-scripts
   dkp-toolchain-vars
   ```
3. Установите [GIMP](https://www.gimp.org/) (версия 2 или 3)
4. Соберите и установите [libusbhsfs](https://github.com/DarkMatterCore/libusbhsfs) (GPL-версия)
5. Соберите [libsmb2](misc/libsmb2/) и [libnfs](misc/libnfs/)
6. Сконфигурируйте и соберите зависимости:
   ```sh
   make configure-ffmpeg && make build-ffmpeg -j$(nproc)
   make configure-uam && make build-uam
   make configure-mpv && make build-mpv
   ```
7. Соберите основное приложение:
   ```sh
   make dist -j$(nproc)
   ```

---

## Автосборка и релизы

### Автоматическая сборка (CI)

При каждом `push` и `pull_request` автоматически:
1. Извлекается версия из `Makefile` (`APP_VERSION`)
2. Собирается Docker-образ с кешированием
3. Компилируется SwitchWave
4. Артефакт загружается в GitHub Actions

### Автоматический релиз

При `push` в `main`/`master`:
1. Проверяется версия в `Makefile`
2. Если тег `vX.X.X` ещё не существует — выполняется сборка и создаётся релиз с артефактом

Чтобы выпустить новую версию — просто обновите `APP_VERSION` в `Makefile` и запушьте.

---

## Синхронизация с оригиналом

Еженедельно (каждый понедельник) или вручную (`workflow_dispatch`) выполняется:
1. Получение изменений из `averne/SwitchWave`
2. Применение изменений с **пропуском** кастомных файлов:
   - `README.md`, `AUTHORS.md`, `CHANGELOG.md`
   - `.github/workflows/release.yml`, `sync-upstream.yml`
   - `src/i18n.hpp`, `src/i18n/ru.hpp`, `src/i18n/en.hpp`
3. Автоматическое создание Pull Request с изменениями

---

## Система локализации

Интерфейс переведён через компилируемую систему i18n — без накладных расходов в рантайме.

Файлы:
- `src/i18n.hpp` — главный файл, выбор языка
- `src/i18n/ru.hpp` — русский (по умолчанию)
- `src/i18n/en.hpp` — английский

Для сборки с английским интерфейсом:
```makefile
# В Makefile добавьте флаг:
CXXFLAGS += -DSWITCHWAVE_LANG=0
```

---

## Разработка

Структура проекта:
```
src/
├── main.cpp           — точка входа, основной цикл
├── context.cpp/.hpp   — конфигурация, настройки, файловые системы
├── libmpv.cpp/.hpp    — привязки к libmpv
├── render.cpp/.hpp    — рендеринг через deko3d
├── waves.cpp/.hpp     — визуализация аудио
├── i18n.hpp           — система локализации
├── i18n/
│   ├── ru.hpp         — русские строки
│   └── en.hpp         — английские строки
├── ui/
│   ├── ui_main_menu   — главное меню
│   ├── ui_explorer    — файловый проводник
│   └── ui_player      — интерфейс плеера
└── fs/
    ├── fs_smb         — Samba
    ├── fs_nfs         — NFS
    ├── fs_sftp        — SFTP
    ├── fs_http        — HTTP/S
    ├── fs_ums         — USB
    └── fs_recent      — История
```

---

## Авторы и благодарности

- **[averne](https://github.com/averne)** — создатель и основной автор оригинального SwitchWave
- **[Dimasick-git](https://github.com/Dimasick-git)** — русская локализация, CI/CD, улучшения
- **[Behemoth](https://github.com/HookedBehemoth)** — метод перехвата кнопки скриншота
- **[ViRb3](https://github.com/ViRb3)** — поддержка HTTP/S (v1.1.0)

---

## Лицензия

Распространяется под лицензией **GNU GPL v3.0** — подробнее в файле [LICENSE](LICENSE).
