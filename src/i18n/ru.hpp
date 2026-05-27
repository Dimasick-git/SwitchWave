// Copyright (c) 2024 averne <averne381@gmail.com>
// Copyright (c) 2025 Dimasick-git — перевод на русский язык / Russian translation
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

namespace sw::i18n {

// ── Названия вкладок ────────────────────────────────────────────────────────
constexpr const char *TabExplorer   = u8"Проводник";
constexpr const char *TabEditor     = u8"Редактор";
constexpr const char *TabSettings   = u8"Настройки";
constexpr const char *TabInfoHelp   = u8"Справка";
constexpr const char *TabExit       = u8"Выход";

// ── Типы ошибок ─────────────────────────────────────────────────────────────
constexpr const char *ErrIo         = u8"Ошибка ввода/вывода";
constexpr const char *ErrNetwork    = u8"Ошибка сети";
constexpr const char *ErrPlayer     = u8"Ошибка плеера";
constexpr const char *ErrLibAv      = u8"Ошибка LibAV";
constexpr const char *ErrApplet     = u8"Режим аплета";
constexpr const char *ErrAppletDesc = u8"Запуск в режиме аплета.\nЭто может привести к нестабильной работе.";
constexpr const char *BtnOk         = u8"Ок";

// ── Медиапроводник ──────────────────────────────────────────────────────────
constexpr const char *SecDescription    = u8"Описание";
constexpr const char *FmtName           = u8"Имя: %.*s";
constexpr const char *FmtSize           = u8"Размер: %.2f%s";
constexpr const char *BtnShowMeta       = u8"Нажмите / для метаданных";
constexpr const char *FmtFormat         = u8"Формат: %s (%d поток%s)";
constexpr const char *FmtDuration       = u8"Длительность: %ld:%02ld:%02ld";
constexpr const char *SecVideo          = u8"Видео";
constexpr const char *SecAudio          = u8"Аудио";
constexpr const char *SecSubtitles      = u8"Субтитры";
constexpr const char *FmtStreams        = u8"%d поток%s";
constexpr const char *FmtCodec         = u8"Кодек: %s";
constexpr const char *FmtCodecChannels = u8"Кодек: %s (%d каналов)";
constexpr const char *FmtProfile       = u8"Профиль: %s";
constexpr const char *FmtDimensions    = u8"Разрешение: %dx%d";
constexpr const char *FmtFramerate     = u8"Частота кадров: %.3f Гц";
constexpr const char *FmtPixFmt        = u8"Формат пикселей: %s";
constexpr const char *FmtSamplerate    = u8"Частота дискретизации: %d Гц";
constexpr const char *FmtSampleFmt     = u8"Формат сэмплов: %s";

// ── Редактор конфигурации ───────────────────────────────────────────────────
constexpr const char *WarnUnsaved       = u8"Есть несохранённые изменения";
constexpr const char *BtnSave           = u8"Сохранить";
constexpr const char *BtnReset          = u8"Сбросить";
constexpr const char *ErrLoadConfig     = u8"Не удалось загрузить конфигурацию";
constexpr const char *BtnCreateFile     = u8"Создать файл";
constexpr const char *BtnReadFromFile   = u8"Загрузить из файла";
constexpr const char *BtnSaveToFile     = u8"Сохранить в файл";

// ── Настройки ───────────────────────────────────────────────────────────────
constexpr const char *SecNetwork              = u8"Сеть";
constexpr const char *SecVideoSettings        = u8"Видео";
constexpr const char *SecMisc                 = u8"Прочее";
constexpr const char *SecHistory              = u8"История";
constexpr const char *SecUsb                  = u8"USB";
constexpr const char *ColType                 = u8"Тип";
constexpr const char *ColName                 = u8"Имя";
constexpr const char *ColHost                 = u8"Хост";
constexpr const char *ColPort                 = u8"Порт";
constexpr const char *ColShare                = u8"Папка/путь";
constexpr const char *ColUsername             = u8"Пользователь";
constexpr const char *ColPassword             = u8"Пароль";
constexpr const char *ColStatus               = u8"Статус";
constexpr const char *BtnConnect              = u8"Подключить";
constexpr const char *BtnDisconnect           = u8"Отключить";
constexpr const char *BtnNew                  = u8"Новый";
constexpr const char *BtnUnmount              = u8"Отмонтировать";
constexpr const char *ChkFastPresentation     = u8"Быстрый режим отображения";
constexpr const char *ChkDisableScreensaver   = u8"Отключить заставку";
constexpr const char *ChkOverrideScreenshot   = u8"Переопределить кнопку скриншота";
constexpr const char *ChkQuitHome             = u8"Выйти в главное меню";
constexpr const char *LblMaxEntries           = u8"Макс. записей";
constexpr const char *BtnClearHistory         = u8"Очистить историю";
constexpr const char *BtnClearPositions       = u8"Очистить позиции воспроизведения";

// ── Справка ─────────────────────────────────────────────────────────────────
constexpr const char *LblUsage               = u8"Управление:";
constexpr const char *SecPlayback            = u8"Воспроизведение";
constexpr const char *SecSettingsMenu        = u8"Меню настроек";
constexpr const char *SecConsole             = u8"Консоль";
constexpr const char *SecLibraries           = u8"Библиотеки";
constexpr const char *SecBuiltOn             = u8"Собрано";

constexpr const char *HelpQuit               = u8"Нажмите  для выхода";
constexpr const char *HelpPause              = u8"Нажмите  или  для паузы/воспроизведения";
constexpr const char *HelpSeek5              = u8"Нажмите / для перемотки на ±5 сек, или / для ±60 сек";
constexpr const char *HelpChapter            = u8"Нажмите / удерживая / для переключения глав";
constexpr const char *HelpTouchSeek          = u8"Используйте  или проведите пальцем по экрану  для перемотки";
constexpr const char *HelpTouchVolume        = u8"Используйте  горизонтально или проведите по правой части экрана  для изменения громкости";
constexpr const char *HelpTouchBrightness    = u8"Используйте  вертикально или проведите по левой части экрана  для изменения яркости";
constexpr const char *HelpScreenshot         = u8"Нажмите / для скриншота в оригинальном разрешении видео";
constexpr const char *HelpSeekBar            = u8"Нажмите / чтобы показать панель воспроизведения,  чтобы скрыть";
constexpr const char *HelpMenu               = u8"Нажмите  для открытия меню";
constexpr const char *HelpMenuDesc           = u8"Здесь находятся основные настройки и статистика воспроизведения";
constexpr const char *HelpConsoleTrigger     = u8"Нажмите  для открытия консоли";
constexpr const char *HelpConsoleDesc        = u8"Здесь можно выполнять команды mpv. Подробнее: https://mpv.io/manual/master/#command-interface";
constexpr const char *HelpConsoleLog         = u8"Консоль также отображает журнал плеера";
constexpr const char *HelpConsoleLevel       = u8"Уровень журналирования регулируется в меню (Прочее/Уровень журнала)";

// ── Навигация в проводнике ──────────────────────────────────────────────────
constexpr const char *NavHint                = u8"Навигация: ";

// ── Плеер ───────────────────────────────────────────────────────────────────
constexpr const char *MsgSavingScreenshot    = u8"Сохранение скриншота";
constexpr const char *FmtBrightness          = u8"Яркость: %.0f%%";
constexpr const char *FmtVolume              = u8"Громкость: %d%%";

// ── Вкладки меню плеера ─────────────────────────────────────────────────────
constexpr const char *MenuTabVideo           = u8"Видео";
constexpr const char *MenuTabAudio           = u8"Аудио";
constexpr const char *MenuTabSubtitles       = u8"Субтитры";
constexpr const char *MenuTabMisc            = u8"Прочее";
constexpr const char *MenuTabStats           = u8"Статистика";
constexpr const char *MenuSecTrack           = u8"Дорожка";
constexpr const char *MenuSecQuality         = u8"Качество";
constexpr const char *MenuSecWindow          = u8"Окно";
constexpr const char *MenuSecOther           = u8"Другое";
constexpr const char *MenuBtnColorEq         = u8"Эквалайзер цвета";
constexpr const char *MenuSecChannelMix      = u8"Микширование каналов";
constexpr const char *MenuSecVolume          = u8"Громкость";
constexpr const char *MenuSecDelay           = u8"Задержка";
constexpr const char *MenuSecFps             = u8"Частота кадров";
constexpr const char *MenuSecStyle           = u8"Стиль";
constexpr const char *MenuBtnLoadExtFile     = u8"Загрузить внешний файл";
constexpr const char *MenuSecPlaylist        = u8"Плейлист";
constexpr const char *MenuBtnClear           = u8"Очистить";
constexpr const char *MenuSecSpeed           = u8"Скорость";
constexpr const char *MenuSecDemuxer         = u8"Кэш демультиплексора";
constexpr const char *MenuSecLogLevel        = u8"Уровень журнала";
constexpr const char *MenuChkFastPres        = u8"Быстрый режим";
constexpr const char *MenuChkDisableScrsv    = u8"Отключить заставку";
constexpr const char *MenuChkOverrideScr     = u8"Переопределить кнопку скриншота";
constexpr const char *StatsTabInfo           = u8"Информация";
constexpr const char *StatsTabPasses         = u8"Проходы";
constexpr const char *StatsSecSource         = u8"Источник";
constexpr const char *StatsSecVideo          = u8"Видео";
constexpr const char *StatsSecAudio          = u8"Аудио";
constexpr const char *StatsSecCache          = u8"Кэш";
constexpr const char *StatsSecInterface      = u8"Интерфейс";
constexpr const char *BtnReturn              = u8"Назад";
constexpr const char *ConsoleBtnClear        = u8"Очистить";
constexpr const char *ConsoleLblFreeze       = u8"Пауза";
constexpr const char *MenuTrackNone          = u8"Нет";
constexpr const char *MenuBtnLoadShader      = u8"Загрузить внешний шейдер";
constexpr const char *MenuSecHwFilters       = u8"Аппаратные фильтры";
constexpr const char *MenuScalingStretch     = u8"Растянуть";
constexpr const char *MenuScalingKeepAspect  = u8"Сохранить пропорции";
constexpr const char *MenuScalingNative      = u8"Оригинальный";

} // namespace sw::i18n
