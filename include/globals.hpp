#pragma once

#include <hyprland/src/plugins/PluginAPI.hpp>
#include <hyprland/src/config/values/types/IntValue.hpp>
#include <hyprland/src/config/values/types/StringValue.hpp>

inline HANDLE PHANDLE = nullptr;

struct SConfig {
    SP<Config::Values::CStringValue> names;
    SP<Config::Values::CStringValue> namesAlt;
    SP<Config::Values::CIntValue>    cycleWorkspaces;
    SP<Config::Values::CIntValue>    cycleWorkspacesAlt;
    SP<Config::Values::CIntValue>    cyclePopulatedOnly;
    SP<Config::Values::CIntValue>    cyclePopulatedOnlyAlt;
    SP<Config::Values::CStringValue> rememberLayout;
    SP<Config::Values::CStringValue> rememberLayoutAlt;
    SP<Config::Values::CIntValue>    notifyInit;
    SP<Config::Values::CIntValue>    notifyInitAlt;
    SP<Config::Values::CIntValue>    verboseLogging;
    SP<Config::Values::CIntValue>    verboseLoggingAlt;
    SP<Config::Values::CIntValue>    wallpaperRender;
    SP<Config::Values::CIntValue>    wallpaperRenderAlt;
    SP<Config::Values::CStringValue> monitorOrder;
    SP<Config::Values::CStringValue> monitorOrderAlt;
};

inline SConfig config = {
    .names                 = makeShared<Config::Values::CStringValue>("plugin:virtual-desktops:names", "map a vdesk id with a name", "unset"),
    .namesAlt              = makeShared<Config::Values::CStringValue>("plugin:virtual_desktops:names", "map a vdesk id with a name", "unset"),
    .cycleWorkspaces       = makeShared<Config::Values::CIntValue>("plugin:virtual-desktops:cycleworkspaces", "if set to 1, cycles between vdesks", 1),
    .cycleWorkspacesAlt    = makeShared<Config::Values::CIntValue>("plugin:virtual_desktops:cycleworkspaces", "if set to 1, cycles between vdesks", 1),
    .cyclePopulatedOnly    = makeShared<Config::Values::CIntValue>("plugin:virtual-desktops:cycle_populated_only", "if set to 1, cyclevdesks/backcyclevdesks skip empty vdesks", 0),
    .cyclePopulatedOnlyAlt = makeShared<Config::Values::CIntValue>("plugin:virtual_desktops:cycle_populated_only", "if set to 1, cyclevdesks/backcyclevdesks skip empty vdesks", 0),
    .rememberLayout        = makeShared<Config::Values::CStringValue>("plugin:virtual-desktops:rememberlayout", "chooses how layouts should be remembered", "size"),
    .rememberLayoutAlt     = makeShared<Config::Values::CStringValue>("plugin:virtual_desktops:rememberlayout", "chooses how layouts should be remembered", "size"),
    .notifyInit            = makeShared<Config::Values::CIntValue>("plugin:virtual-desktops:notifyinit", "chooses whether to display the startup notification", 1),
    .notifyInitAlt         = makeShared<Config::Values::CIntValue>("plugin:virtual_desktops:notifyinit", "chooses whether to display the startup notification", 1),
    .verboseLogging        = makeShared<Config::Values::CIntValue>("plugin:virtual-desktops:verbose_logging", "whether to log more stuff", 0),
    .verboseLoggingAlt     = makeShared<Config::Values::CIntValue>("plugin:virtual_desktops:verbose_logging", "whether to log more stuff", 0),
    .wallpaperRender       = makeShared<Config::Values::CIntValue>("plugin:virtual-desktops:wallpaper_render", "enable plugin wallpaper renderer", 0),
    .wallpaperRenderAlt    = makeShared<Config::Values::CIntValue>("plugin:virtual_desktops:wallpaper_render", "enable plugin wallpaper renderer", 0),
    .monitorOrder          = makeShared<Config::Values::CStringValue>("plugin:virtual-desktops:monitor_order", "comma-separated list of monitors in order", "unset"),
    .monitorOrderAlt       = makeShared<Config::Values::CStringValue>("plugin:virtual_desktops:monitor_order", "comma-separated list of monitors in order", "unset"),
};
