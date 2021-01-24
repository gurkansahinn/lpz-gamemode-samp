#include <YSI_CODING\y_hooks>

#include <core/Player/globals>
#include <core/Player/clouds>
#include <core/Player/textdraw>
#include <core/Player/colours>
#include <core/Player/timers>
#include <core/Player/functions>
#include <core/Player/commands>
#include <core/Player/header>
#include <core/Player/callbacks>

hook OnPlayerConnect(playerid)
{
	if(IsPlayerNPC(playerid))
	{
		if(strcmp(GetIP(playerid), "127.0.0.1") && strcmp(GetIP(playerid), "localhost"))
		{
			AdminWarn(LEAD_WARN, sprintf("%s IP adresi muhtemelen NPC saldýrýsý düzenliyor. (ID: %d)", GetIP(playerid), playerid));
			KickEx(playerid, "Uygun olmayan giriþ yaptýðýnýz için sunucudan uzaklaþtýrýlýyorsunuz.");
		}
	}

    ResetPVariables(playerid);
    CreateCharacterPanelTextdraw(playerid);
}

hook OnPlayerDisconnect(playerid, reason)
{
    ResetPVariables(playerid);
}

hook OnPlayerRequestClass(playerid, classid)
{
    ClearChat(playerid);
    CheckPlayerAccount(playerid);
}

hook OnPlayerText(playerid, text[])
{
	ProxDetector(15.0, playerid, sprintf("%s: %s", GetName(playerid, 0), text), COLOUR_GRAY, COLOUR_MERCURY, COLOUR_SILVER, COLOUR_NOBEL, COLOUR_DUSTYGRAY);
}

hook OnPlayerKeyStateChange(playerid, newkeys, oldkeys)
{
    if(newkeys == KEY_NO)
    {
        if(CharacterInfo[playerid][cMovementState] == CHARACTER_MOVE_STATE_WALK)
        {
            ApplyAnimation(playerid, "PED", "PLAYER_SNEAK", 4.1, 1, 1, 1, 1, 1);
            CharacterInfo[playerid][cMovementState] = CHARACTER_MOVE_STATE_SLOW;
        }
        else
        {
            ClearAnimations(playerid, 1);
            CharacterInfo[playerid][cMovementState] = CHARACTER_MOVE_STATE_WALK;
        }
    }    
    return 1;
}