#include <core/Player/globals>
#include <core/Player/clouds>
#include <core/Player/colours>
#include <core/Player/functions>
#include <core/Player/commands>
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
}

hook OnPlayerRequestClass(playerid, classid)
{
/*     new query[];

    mysql_format(mysqlC, query, sizeof(query), "");

    mysql_format(mysqlC, query, sizeof(query), "SELECT accounts.account_id, accounts.account_name, accounts.account_staff_roles, accounts.account_staff_flags, accounts.account_state_flags FULL JOIN")
 */
}

hook OnPlayerText(playerid, text[])
{
	ProxDetector(15.0, playerid, sprintf("%s: %s", GetName(playerid, 0), text), 0xD6D6D6FF, COLOUR_MERCURY, COLOUR_SILVER, COLOUR_NOBEL, COLOUR_DUSTYGRAY);
}