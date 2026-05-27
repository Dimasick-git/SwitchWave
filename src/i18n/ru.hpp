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
constexpr const char *TabExplorer   = "Проводник";
constexpr const char *TabEditor     = "Редактор";
constexpr const char *TabSettings   = "Настройки";
constexpr const char *TabInfoHelp   = "Справка";
constexpr const char *TabExit       = "Выход";

// ── Типы ошибок ─────────────────────────────────────────────────────────────
constexpr const char *ErrIo         = "Ошибка ввода/вывода";
constexpr const char *ErrNetwork    = "Ошибка сети";
constexpr const char *ErrPlayer     = "Ошибка плеера";
constexpr const char *ErrLibAv      = "Ошибка LibAV";
constexpr const char *ErrApplet     = "Режим аплета";
constexpr const char *ErrAppletDesc = "Запуск в режиме аплета.\nЭто может привести к нестабильной работе.";
constexpr const char *BtnOk         = "Ок";

// ── Медиапроводник ──────────────────────────────────────────────────────────
constexpr const char *SecDescription    = "Описание";
constexpr const char *FmtName           = "Имя: %.*s";
constexpr const char *FmtSize           = "Размер: %.2f%s";
constexpr const char *BtnShowMeta       = "Нажмите / для метаданных";
constexpr const char *FmtFormat         = "Формат: %s (%d поток%s)";
constexpr const char *FmtDuration       = "Длительность: %ld:%02ld:%02ld";
constexpr const char *SecVideo          = "Видео";
constexpr const char *SecAudio          = "Аудио";
constexpr const char *SecSubtitles      = "Субтитры";
constexpr const char *FmtStreams        = "%d поток%s";
constexpr const char *FmtCodec         = "Кодек: %s";
constexpr const char *FmtCodecChannels = "Кодек: %s (%d каналов)";
constexpr const char *FmtProfile       = "Профиль: %s";
constexpr const char *FmtDimensions    = "Разрешение: %dx%d";
constexpr const char *FmtFramerate     = "Частота кадров: %.3f Гц";
constexpr const char *FmtPixFmt        = "Формат пикселей: %s";
constexpr const char *FmtSamplerate    = "Частота дискретизации: %d Гц";
constexpr const char *FmtSampleFmt     = "Формат сэмплов: %s";

// ── Редактор конфигурации ───────────────────────────────────────────────────
constexpr const char *WarnUnsaved       = "Есть несохранённые изменения";
constexpr const char *BtnSave           = "Сохранить";
constexpr const char *BtnReset          = "Сбросить";
constexpr const char *ErrLoadConfig     = "Не удалось загрузить конфигурацию";
constexpr const char *BtnCreateFile     = "Создать файл";
constexpr const char *BtnReadFromFile   = "Загрузить из файла";
constexpr const char *BtnSaveToFile     = "Сохранить в файл";

// ── Настройки ───────────────────────────────────────────────────────────────
constexpr const char *SecNetwork              = "Сеть";
constexpr const char *SecVideoSettings        = "Видео";
constexpr const char *SecMisc                 = "Прочее";
constexpr const char *SecHistory              = "История";
constexpr const char *SecUsb                  = "USB";
constexpr const char *ColType                 = "Тип";
constexpr const char *ColName                 = "Имя";
constexpr const char *ColHost                 = "Хост";
constexpr const char *ColPort                 = "Порт";
constexpr const char *ColShare                = "Папка/путь";
constexpr const char *ColUsername             = "Пользователь";
constexpr const char *ColPassword             = "Пароль";
constexpr const char *ColStatus               = "Статус";
constexpr const char *BtnConnect              = "Подключить";
constexpr const char *BtnDisconnect           = "Отключить";
constexpr const char *BtnNew                  = "Новый";
constexpr const char *BtnUnmount              = "Отмонтировать";
constexpr const char *ChkFastPresentation     = "Быстрый режим отображения";
constexpr const char *ChkDisableScreensaver   = "Отключить заставку";
constexpr const char *ChkOverrideScreenshot   = "Переопределить кнопку скриншота";
constexpr const char *ChkQuitHome             = "Выйти в главное меню";
constexpr const char *LblMaxEntries           = "Макс. записей";
constexpr const char *BtnClearHistory         = "Очистить историю";
constexpr const char *BtnClearPositions       = "Очистить позиции воспроизведения";

// ── Справка ─────────────────────────────────────────────────────────────────
constexpr const char *LblUsage               = "Управление:";
constexpr const char *SecPlayback            = "Воспроизведение";
constexpr const char *SecSettingsMenu        = "Меню настроек";
constexpr const char *SecConsole             = "Консоль";
constexpr const char *SecLibraries           = "Библиотеки";
constexpr const char *SecBuiltOn             = "Собрано";

constexpr const char *HelpQuit               = "Нажмите  для выхода";
constexpr const char *HelpPause              = "Нажмите  или  для паузы/воспроизведения";
constexpr const char *HelpSeek5              = "Нажмите / для перемотки на ±5 сек, или / для ±60 сек";
constexpr const char *HelpChapter            = "Нажмите / удерживая / для переключения глав";
constexpr const char *HelpTouchSeek          = "Используйте  или проведите пальцем по экрану  для перемотки";
constexpr const char *HelpTouchVolume        = "Используйте  горизонтально или проведите по правой части экрана  для изменения громкости";
constexpr const char *HelpTouchBrightness    = "Используйте  вертикально или проведите по левой части экрана  для изменения яркости";
constexpr const char *HelpScreenshot         = "Нажмите / для скриншота в оригинальном разрешении видео";
constexpr const char *HelpSeekBar            = "Нажмите / чтобы показать панель воспроизведения,  чтобы скрыть";
constexpr const char *HelpMenu               = "Нажмите  для открытия меню";
constexpr const char *HelpMenuDesc           = "Здесь находятся основные настройки и статистика воспроизведения";
constexpr const char *HelpConsoleTrigger     = "Нажмите  для открытия консоли";
constexpr const char *HelpConsoleDesc        = "Здесь можно выполнять команды mpv. Подробнее: https://mpv.io/manual/master/#command-interface";
constexpr const char *HelpConsoleLog         = "Консоль также отображает журнал плеера";
constexpr const char *HelpConsoleLevel       = "Уровень журналирования регулируется в меню (Прочее/Уровень журнала)";

// ── Навигация в проводнике ──────────────────────────────────────────────────
constexpr const char *NavHint                = "Навигация: ";

// ── Плеер ───────────────────────────────────────────────────────────────────
constexpr const char *MsgSavingScreenshot    = "Сохранение скриншота";
constexpr const char *FmtBrightness          = "Яркость: %.0f%%";
constexpr const char *FmtVolume              = "Громкость: %d%%";

// ── Вкладки меню плеера ─────────────────────────────────────────────────────
constexpr const char *MenuTabVideo           = "Видео";
constexpr const char *MenuTabAudio           = "Аудио";
constexpr const char *MenuTabSubtitles       = "Субтитры";
constexpr const char *MenuTabMisc            = "Прочее";
constexpr const char *MenuTabStats           = "Статистика";
constexpr const char *MenuSecTrack           = "Дорожка";
constexpr const char *MenuSecQuality         = "Качество";
constexpr const char *MenuSecWindow          = "Окно";
constexpr const char *MenuSecOther           = "Другое";
constexpr const char *MenuBtnColorEq         = "Эквалайзер цвета";
constexpr const char *MenuSecChannelMix      = "Микширование каналов";
constexpr const char *MenuSecVolume          = "Громкость";
constexpr const char *MenuSecDelay           = "Задержка";
constexpr const char *MenuSecFps             = "Частота кадров";
constexpr const char *MenuSecStyle           = "Стиль";
constexpr const char *MenuBtnLoadExtFile     = "Загрузить внешний файл";
constexpr const char *MenuSecPlaylist        = "Плейлист";
constexpr const char *MenuBtnClear           = "Очистить";
constexpr const char *MenuSecSpeed           = "Скорость";
constexpr const char *MenuSecDemuxer         = "Кэш демультиплексора";
constexpr const char *MenuSecLogLevel        = "Уровень журнала";
constexpr const char *MenuChkFastPres        = "Быстрый режим";
constexpr const char *MenuChkDisableScrsv    = "Отключить заставку";
constexpr const char *MenuChkOverrideScr     = "Переопределить кнопку скриншота";
constexpr const char *StatsTabInfo           = "Информация";
constexpr const char *StatsTabPasses         = "Проходы";
constexpr const char *StatsSecSource         = "Источник";
constexpr const char *StatsSecVideo          = "Видео";
constexpr const char *StatsSecAudio          = "Аудио";
constexpr const char *StatsSecCache          = "Кэш";
constexpr const char *StatsSecInterface      = "Интерфейс";
constexpr const char *BtnReturn              = "Назад";
constexpr const char *ConsoleBtnClear        = "Очистить";
constexpr const char *ConsoleLblFreeze       = "Пауза";
constexpr const char *MenuTrackNone          = "Нет";
constexpr const char *MenuBtnLoadShader      = "Загрузить внешний шейдер";
constexpr const char *MenuSecHwFilters       = "Аппаратные фильтры";
constexpr const char *MenuScalingStretch     = "Растянуть";
constexpr const char *MenuScalingKeepAspect  = "Сохранить пропорции";
constexpr const char *MenuScalingNative      = "Оригинальный";

} // namespace sw::i18n
