#include <YSI_CODING\y_hooks>

#include <core/Player/login/header>
#include <core/Player/login/textdraw>
#include <core/Player/login/functions>
#include <core/Player/login/callbacks>

hook OnPlayerRequestClass(playerid, classid)
{
    ClearChat(playerid);
    CheckPlayerAccount(playerid);
}