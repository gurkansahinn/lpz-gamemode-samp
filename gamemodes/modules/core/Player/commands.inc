/* CMD:ekip(playerid)
{
	new bool:found = false;

	foreach(new i: Player)
	{
		if(!PlayerInfo[i][pStaffRoles])
			continue;

		if(!StaffRoleCheck(i, ADMIN))
			continue;

		if(!StaffHasState(i, STAFF_STATE_HIDDEN))
		{
			if(!found)
			{
				SendClientMessage(playerid, -1, EMBED_ORANGE "Aktif Ekip Üyeleri");

				found = true;
			}

			if(StaffHasState(i, STAFF_STATE_ONDUTY))
				SendClientMessage(playerid, COLOUR_APPLE, sprintf("(%s) %s (%s, ID: %d) - Ýþbaþý", ListPlayerStaffRoles(i), GetName(i, 0), PlayerInfo[i][pName], i));

			else SendClientMessage(playerid, COLOUR_GRAY, sprintf("(%s) %s (%s, ID: %d)", ListPlayerStaffRoles(i), GetName(i, 0), PlayerInfo[i][pName], i));
		}

		else if(StaffHasState(i, STAFF_STATE_HIDDEN) && StaffRoleCheck(playerid, ADMIN))
		{
			SendClientMessage(playerid, COLOUR_DANDELION, sprintf("[Gizli] (%s) %s (%s, ID: %d)", ListPlayerStaffRoles(i), GetName(i, 0), PlayerInfo[i][pName], i));
		}
	}


	if(!found)
	{
		ErrorMessage(playerid, "Þu anda aktif ekip üyesi yok.");
	}

	return 1;
} */