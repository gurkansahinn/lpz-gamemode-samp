public e_COMMAND_ERRORS:OnPlayerCommandReceived(playerid, cmdtext[], e_COMMAND_ERRORS:success){

    switch (success) 
    { 
        case COMMAND_UNDEFINED: 
        { 
            ErrorMessage(playerid, "Böyle bir komut bulunamadý.");
        } 
    }

    return COMMAND_OK;
}

CMD:gotopos(playerid, params[])
{
	new Float:newX, Float:newY, Float:newZ;

	if(sscanf(params, "fff", newX, newY, newZ))
		return UsageMessage(playerid, "/gotopos [x] [y] [z]");

	SetPlayerPos(playerid, newX, newY, newZ);
	ServerMessage(playerid, "Belirttiðiniz pozisyona teleport oldunuz.");
	return 1;
}

CMD:x(playerid, params[])
{
	new Float:plusX;

	if(sscanf(params, "f", plusX))
		return UsageMessage(playerid, "/x [x]");
	
	new Float:pX, Float:pY, Float:pZ;
	GetPlayerPos(playerid, pX, pY, pZ);

	SetPlayerPos(playerid, pX+plusX, pY, pZ);
	return 1;
}

CMD:z(playerid, params[])
{
	new Float:plusZ;

	if(sscanf(params, "f", plusZ))
		return UsageMessage(playerid, "/z [z]");
	
	new Float:pX, Float:pY, Float:pZ;
	GetPlayerPos(playerid, pX, pY, pZ);

	SetPlayerPos(playerid, pX, pY, pZ+plusZ);
	return 1;
}

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