// Copyright (c) 2024 averne <averne381@gmail.com>
// Copyright (c) 2025 Dimasick-git
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

// ── Tab names ──────────────────────────────────────────────────────────────
constexpr const char *TabExplorer   = "Explorer";
constexpr const char *TabEditor     = "Editor";
constexpr const char *TabSettings   = "Settings";
constexpr const char *TabInfoHelp   = "Info & Help";
constexpr const char *TabExit       = "Exit";

// ── Error types ────────────────────────────────────────────────────────────
constexpr const char *ErrIo         = "I/O error";
constexpr const char *ErrNetwork    = "Network error";
constexpr const char *ErrPlayer     = "Player error";
constexpr const char *ErrLibAv      = "LibAV error";
constexpr const char *ErrApplet     = "Applet mode";
constexpr const char *ErrAppletDesc = "Starting in applet mode.\nThis may lead to stability issues.";
constexpr const char *BtnOk         = "Ok";

// ── Media explorer ─────────────────────────────────────────────────────────
constexpr const char *SecDescription    = "Description";
constexpr const char *FmtName           = "Name: %.*s";
constexpr const char *FmtSize           = "Size: %.2f%s";
constexpr const char *BtnShowMeta       = "Press / to show metadata";
constexpr const char *FmtFormat         = "Format: %s (%d stream%s)";
constexpr const char *FmtDuration       = "Duration: %ld:%02ld:%02ld";
constexpr const char *SecVideo          = "Video";
constexpr const char *SecAudio          = "Audio";
constexpr const char *SecSubtitles      = "Subtitles";
constexpr const char *FmtStreams        = "%d stream%s";
constexpr const char *FmtCodec         = "Codec: %s";
constexpr const char *FmtCodecChannels = "Codec: %s (%d channels)";
constexpr const char *FmtProfile       = "Profile: %s";
constexpr const char *FmtDimensions    = "Dimensions: %dx%d";
constexpr const char *FmtFramerate     = "Framerate: %.3fHz";
constexpr const char *FmtPixFmt        = "Pixel format: %s";
constexpr const char *FmtSamplerate    = "Samplerate: %dHz";
constexpr const char *FmtSampleFmt     = "Sample format: %s";

// ── Config editor ──────────────────────────────────────────────────────────
constexpr const char *WarnUnsaved       = "You have unsaved changes";
constexpr const char *BtnSave           = "Save";
constexpr const char *BtnReset          = "Reset";
constexpr const char *ErrLoadConfig     = "Failed to load configuration file";
constexpr const char *BtnCreateFile     = "Create file";
constexpr const char *BtnReadFromFile   = "Read from file";
constexpr const char *BtnSaveToFile     = "Save to file";

// ── Settings ───────────────────────────────────────────────────────────────
constexpr const char *SecNetwork              = "Network";
constexpr const char *SecVideoSettings        = "Video";
constexpr const char *SecMisc                 = "Misc";
constexpr const char *SecHistory              = "History";
constexpr const char *SecUsb                  = "USB";
constexpr const char *ColType                 = "Type";
constexpr const char *ColName                 = "Name";
constexpr const char *ColHost                 = "Host";
constexpr const char *ColPort                 = "Port";
constexpr const char *ColShare                = "Share/path";
constexpr const char *ColUsername             = "Username";
constexpr const char *ColPassword             = "Password";
constexpr const char *ColStatus               = "Status";
constexpr const char *BtnConnect              = "Connect";
constexpr const char *BtnDisconnect           = "Disconnect";
constexpr const char *BtnNew                  = "New";
constexpr const char *BtnUnmount              = "Unmount";
constexpr const char *ChkFastPresentation     = "Use fast presentation";
constexpr const char *ChkDisableScreensaver   = "Disable screensaver";
constexpr const char *ChkOverrideScreenshot   = "Override screenshot button";
constexpr const char *ChkQuitHome             = "Quit to home menu";
constexpr const char *LblMaxEntries           = "Max entries";
constexpr const char *BtnClearHistory         = "Clear history";
constexpr const char *BtnClearPositions       = "Clear playback positions";

// ── Info & Help ────────────────────────────────────────────────────────────
constexpr const char *LblUsage               = "Usage:";
constexpr const char *SecPlayback            = "Playback";
constexpr const char *SecSettingsMenu        = "Settings menu";
constexpr const char *SecConsole             = "Console";
constexpr const char *SecLibraries           = "Libraries";
constexpr const char *SecBuiltOn             = "Built on";

constexpr const char *HelpQuit               = "Press  to quit";
constexpr const char *HelpPause              = "Press  or  to pause/play";
constexpr const char *HelpSeek5              = "Press / to seek ±5s, or / for ±60s";
constexpr const char *HelpChapter            = "Press / while holding / to skip chapters";
constexpr const char *HelpTouchSeek          = "Use , or slide the touchscreen  to seek forward and backward";
constexpr const char *HelpTouchVolume        = "Use  horizontally, or slide the right side of the touchscreen  to adjust the volume";
constexpr const char *HelpTouchBrightness    = "Use  vertically, or slide the left side of the touchscreen  to adjust the backlight brightness";
constexpr const char *HelpScreenshot         = "Press / to take a screenshot at the source video resolution";
constexpr const char *HelpSeekBar            = "Press / to show the playback bar, and  to hide it";
constexpr const char *HelpMenu               = "Press  to open the menu";
constexpr const char *HelpMenuDesc           = "Most relevant settings can be found here, along with useful statistics on playback and performance";
constexpr const char *HelpConsoleTrigger     = "Press  to open the console";
constexpr const char *HelpConsoleDesc        = "Any mpv command can be executed here. For more information, see: https://mpv.io/manual/master/#command-interface";
constexpr const char *HelpConsoleLog         = "The console also shows logs from the player core";
constexpr const char *HelpConsoleLevel       = "The logging level can be adjusted in the menu (Misc/Log level)";

// ── Explorer navigation ────────────────────────────────────────────────────
constexpr const char *NavHint                = "Navigate with ";

// ── Player ─────────────────────────────────────────────────────────────────
constexpr const char *MsgSavingScreenshot    = "Saving screenshot";
constexpr const char *FmtBrightness          = "Brightness: %.0f%%";
constexpr const char *FmtVolume              = "Volume: %d%%";

// ── Player menu tabs ────────────────────────────────────────────────────────
constexpr const char *MenuTabVideo           = "Video";
constexpr const char *MenuTabAudio           = "Audio";
constexpr const char *MenuTabSubtitles       = "Subtitles";
constexpr const char *MenuTabMisc            = "Misc";
constexpr const char *MenuTabStats           = "Stats";
constexpr const char *MenuSecTrack           = "Track";
constexpr const char *MenuSecQuality         = "Quality";
constexpr const char *MenuSecWindow          = "Window";
constexpr const char *MenuSecOther           = "Other";
constexpr const char *MenuBtnColorEq         = "Color equalizer";
constexpr const char *MenuSecChannelMix      = "Channel mixing";
constexpr const char *MenuSecVolume          = "Volume";
constexpr const char *MenuSecDelay           = "Delay";
constexpr const char *MenuSecFps             = "FPS";
constexpr const char *MenuSecStyle           = "Style";
constexpr const char *MenuBtnLoadExtFile     = "Load external file";
constexpr const char *MenuSecPlaylist        = "Playlist";
constexpr const char *MenuBtnClear           = "Clear";
constexpr const char *MenuSecSpeed           = "Speed";
constexpr const char *MenuSecDemuxer         = "Demuxer cache";
constexpr const char *MenuSecLogLevel        = "Log level";
constexpr const char *MenuChkFastPres        = "Fast presentation";
constexpr const char *MenuChkDisableScrsv    = "Disable screensaver";
constexpr const char *MenuChkOverrideScr     = "Override screenshot button";
constexpr const char *StatsTabInfo           = "Info";
constexpr const char *StatsTabPasses         = "Passes";
constexpr const char *StatsSecSource         = "Source";
constexpr const char *StatsSecVideo          = "Video";
constexpr const char *StatsSecAudio          = "Audio";
constexpr const char *StatsSecCache          = "Cache";
constexpr const char *StatsSecInterface      = "Interface";
constexpr const char *BtnReturn              = "Return";
constexpr const char *ConsoleBtnClear        = "Clear";
constexpr const char *ConsoleLblFreeze       = "Freeze";
constexpr const char *MenuTrackNone          = "None";
constexpr const char *MenuBtnLoadShader      = "Load external shader";
constexpr const char *MenuSecHwFilters       = "Hardware filters";
constexpr const char *MenuScalingStretch     = "Stretch to fit";
constexpr const char *MenuScalingKeepAspect  = "Keep aspect ratio";
constexpr const char *MenuScalingNative      = "Native";

} // namespace sw::i18n
