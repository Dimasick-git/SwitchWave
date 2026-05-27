// Copyright (c) 2024 averne <averne381@gmail.com>
// Copyright (c) 2025 Dimasick-git — система локализации / localization system
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

// Выбор языка интерфейса / UI language selection:
//   0 = English
//   1 = Русский (Russian) — по умолчанию / default
#ifndef SWITCHWAVE_LANG
#define SWITCHWAVE_LANG 1
#endif

#if SWITCHWAVE_LANG == 1
#include "i18n/ru.hpp"
#else
#include "i18n/en.hpp"
#endif

// Псевдоним для удобного использования / convenience alias
namespace T = sw::i18n;
