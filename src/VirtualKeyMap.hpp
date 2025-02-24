#pragma once

#include <map>
#include <string>
#include <winuser.rh>

#include "DKUtil/Config.hpp"

using namespace DKUtil::Alias;

enum Command
{
    TOGGLE_WALK_OR_SPRINT,
    HOLD_WALK_OR_SPRINT,
    TOGGLE_AUTORUN,
    TOGGLE_CHARACTER_OR_CAMERA,
    RELOAD_CONFIG,
    FORWARD,
    BACKWARD
};

class VirtualKeyMap
{
public:
    static int GetByName(const std::string name);
    static std::vector<std::vector<std::uint32_t>> GetVkCombosOfCommand(Command command);
    static void UpdateVkCombosOfCommandMap();

private:
    static void AddKeyComboForCommand(Command command, std::vector<std::string> setting);
    static inline std::map<Command, std::vector<std::vector<std::uint32_t>>> vkcombos_of_command;
    // clang-format off

    /*
     Names are adapted to match Larian's names!
    */
    static inline std::map<std::string, int> VIRTUAL_KEY_MAP{
        { "mouse:left", VK_LBUTTON },
        { "mouse:right", VK_RBUTTON },
        { "mouse:cancel", VK_CANCEL },
        { "mouse:middle", VK_MBUTTON },
        { "mouse:x1", VK_XBUTTON1 },
        { "mouse:x2", VK_XBUTTON2 },
        { "key:backspace", VK_BACK },
        { "key:tab", VK_TAB },
        { "key:clear", VK_CLEAR },
        { "key:return", VK_RETURN },
        { "shift", VK_SHIFT },
        { "ctrl", VK_CONTROL },
        { "alt", VK_MENU },
        { "key:pause", VK_PAUSE },
        { "key:capslock", VK_CAPITAL },
        { "key:kana", VK_KANA },
        { "key:junja", VK_JUNJA },
        { "key:final", VK_FINAL },
        { "key:kanji", VK_KANJI },
        { "key:escape", VK_ESCAPE },
        { "key:convert", VK_CONVERT },
        { "key:nonconvert", VK_NONCONVERT },
        { "key:accept", VK_ACCEPT },
        { "key:modechange", VK_MODECHANGE },
        { "key:space", VK_SPACE },
        { "key:prior", VK_PRIOR },
        { "key:next", VK_NEXT },
        { "key:end", VK_END },
        { "key:home", VK_HOME },
        { "key:left", VK_LEFT },
        { "key:up", VK_UP },
        { "key:right", VK_RIGHT },
        { "key:down", VK_DOWN },
        { "key:select", VK_SELECT },
        { "key:print", VK_PRINT },
        { "key:execute", VK_EXECUTE },
        { "key:snapshot", VK_SNAPSHOT },
        { "key:insert", VK_INSERT },
        { "key:delete", VK_DELETE },
        { "key:help", VK_HELP },
        { "key:lwin", VK_LWIN },
        { "key:rwin", VK_RWIN },
        { "key:apps", VK_APPS },
        { "key:sleep", VK_SLEEP },
        { "key:numpad0", VK_NUMPAD0 },
        { "key:numpad1", VK_NUMPAD1 },
        { "key:numpad2", VK_NUMPAD2 },
        { "key:numpad3", VK_NUMPAD3 },
        { "key:numpad4", VK_NUMPAD4 },
        { "key:numpad5", VK_NUMPAD5 },
        { "key:numpad6", VK_NUMPAD6 },
        { "key:numpad7", VK_NUMPAD7 },
        { "key:numpad8", VK_NUMPAD8 },
        { "key:numpad9", VK_NUMPAD9 },
        { "key:multiply", VK_MULTIPLY },
        { "key:add", VK_ADD },
        { "key:separator", VK_SEPARATOR },
        { "key:subtract", VK_SUBTRACT },
        { "key:decimal", VK_DECIMAL },
        { "key:divide", VK_DIVIDE },
        { "key:f1", VK_F1 },
        { "key:f2", VK_F2 },
        { "key:f3", VK_F3 },
        { "key:f4", VK_F4 },
        { "key:f5", VK_F5 },
        { "key:f6", VK_F6 },
        { "key:f7", VK_F7 },
        { "key:f8", VK_F8 },
        { "key:f9", VK_F9 },
        { "key:f10", VK_F10 },
        { "key:f11", VK_F11 },
        { "key:f12", VK_F12 },
        { "key:f13", VK_F13 },
        { "key:f14", VK_F14 },
        { "key:f15", VK_F15 },
        { "key:f16", VK_F16 },
        { "key:f17", VK_F17 },
        { "key:f18", VK_F18 },
        { "key:f19", VK_F19 },
        { "key:f20", VK_F20 },
        { "key:f21", VK_F21 },
        { "key:f22", VK_F22 },
        { "key:f23", VK_F23 },
        { "key:f24", VK_F24 },
        { "key:numlock", VK_NUMLOCK },
        { "key:scroll", VK_SCROLL },
        { "key:lshift", VK_LSHIFT },
        { "key:rshift", VK_RSHIFT },
        { "key:lctrl", VK_LCONTROL },
        { "key:rctrl", VK_RCONTROL },
        { "key:lalt", VK_LMENU },
        { "key:ralt", VK_RMENU },
        { "key:browser_back", VK_BROWSER_BACK },
        { "key:browser_forward", VK_BROWSER_FORWARD },
        { "key:browser_refresh", VK_BROWSER_REFRESH },
        { "key:browser_stop", VK_BROWSER_STOP },
        { "key:browser_search", VK_BROWSER_SEARCH },
        { "key:browser_favorites", VK_BROWSER_FAVORITES },
        { "key:browser_home", VK_BROWSER_HOME },
        { "key:volume_mute", VK_VOLUME_MUTE },
        { "key:volume_down", VK_VOLUME_DOWN },
        { "key:volume_up", VK_VOLUME_UP },
        { "key:media_next_track", VK_MEDIA_NEXT_TRACK },
        { "key:media_prev_track", VK_MEDIA_PREV_TRACK },
        { "key:media_stop", VK_MEDIA_STOP },
        { "key:media_play_pause", VK_MEDIA_PLAY_PAUSE },
        { "key:launch_mail", VK_LAUNCH_MAIL },
        { "key:launch_app1", VK_LAUNCH_APP1 },
        { "key:launch_app2", VK_LAUNCH_APP2 },
        { "key:;", VK_OEM_1 },
        { "key:=", VK_OEM_PLUS },
        { "key:,", VK_OEM_COMMA },
        { "key:-", VK_OEM_MINUS },
        { "key:.", VK_OEM_PERIOD },
        { "key:/", VK_OEM_2 },
        { "key:`", VK_OEM_3 },
        { "key:[", VK_OEM_4 },
        { "key:\\", VK_OEM_5 },
        { "key:]", VK_OEM_6 },
        { "key:'", VK_OEM_7 },
        { "key:oem_8", VK_OEM_8 },
        { "key:oem_102", VK_OEM_102 },
        { "key:processkey", VK_PROCESSKEY },
        { "key:packet", VK_PACKET },
        { "key:attn", VK_ATTN },
        { "key:crsel", VK_CRSEL },
        { "key:exsel", VK_EXSEL },
        { "key:ereof", VK_EREOF },
        { "key:play", VK_PLAY },
        { "key:zoom", VK_ZOOM },
        { "key:noname", VK_NONAME },
        { "key:pa1", VK_PA1 },
        { "key:oem_clear", VK_OEM_CLEAR }
    };
    // clang-format on
};
