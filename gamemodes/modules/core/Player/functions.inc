stock ResetPVariables(playerid)
{
	AccountInfo[playerid][pID] = 0;
    AccountInfo[playerid][pLogged] = false;
	AccountInfo[playerid][pName] = EOS;
	AccountInfo[playerid][pStateFlags] = 0;
    AccountInfo[playerid][pStaffRoles] = 0;

    CharacterInfo[playerid][cID] = 0;

    SetPlayerColor(playerid, COLOUR_GRAY);

    return 1;
}

stock ServerMessage(playerid, message[])
{
    if(strlen(message) > 96)
    {
        SendClientMessage(playerid, -1, sprintf("{FED85D}[!]" EMBED_GREY " %.96s", message));
        SendClientMessage(playerid, -1, sprintf(EMBED_GREY "... %s", message[96]));
    }

    else
    {
        SendClientMessage(playerid, -1, sprintf("{FED85D}[!]" EMBED_GREY " %s", message));
    }

    return 1;
}

stock UsageMessage(playerid, message[])
{
    if(strlen(message) > 96)
    {
        SendClientMessage(playerid, -1, sprintf(EMBED_TURQUOISE "[!]" EMBED_GREY " %.96s", message));
        SendClientMessage(playerid, -1, sprintf(EMBED_GREY "... %s", message[96]));
    }

    else
    {
        SendClientMessage(playerid, -1, sprintf(EMBED_TURQUOISE "[!]" EMBED_GREY " %s", message));
    }

    return 1;
}

stock OptionMessage(playerid, message[])
{
    if(strlen(message) > 96)
    {
        SendClientMessage(playerid, -1, sprintf(EMBED_TURQUOISE "[Seçenek]" EMBED_GREY " %.96s", message));
        SendClientMessage(playerid, -1, sprintf(EMBED_GREY "... %s", message[96]));
    }

    else
    {
        SendClientMessage(playerid, -1, sprintf(EMBED_TURQUOISE "[Seçenek]" EMBED_GREY " %s", message));
    }

    return 1;
}

stock ErrorMessage(playerid, const message[])
{
    if(strlen(message) > 96)
    {
        SendClientMessage(playerid, -1, sprintf("{fe5d5d}[!]" EMBED_GREY " %.96s", message));
        SendClientMessage(playerid, -1, sprintf(EMBED_GREY "... %s", message[96]));
    }

    else
    {
        SendClientMessage(playerid, -1, sprintf("{fe5d5d}[!]" EMBED_GREY " %s", message));
    }

    return 1;
}

stock InfoMessage(playerid, const message[])
{
    if(strlen(message) > 96)
    {
        SendClientMessage(playerid, -1, sprintf(EMBED_TURQUOISE "* BILGI: " EMBED_GREY "%.96s", message));
        SendClientMessage(playerid, -1, sprintf(EMBED_GREY "... %s", message[96]));
    }

    else
    {
        SendClientMessage(playerid, -1, sprintf(EMBED_TURQUOISE "* BILGI: " EMBED_GREY "%s", message));
    }

    return 1;
}

stock AdminWarn(level, const message[])
{
    printf("Admin: %s", message);

    foreach(new i : Player)
    {
        if(StaffHasState(i, STAFF_STATE_DISABLED_WARNS))
            continue;

        for(new r = 0; r < sizeof(PlayerStaffRoles); r++)
        {
            if(BitFlag_Get(level, (1 << r)))
            {
                if(BitFlag_Get(AccountInfo[i][pStaffRoles], (1 << r)))
                {
                    if(strlen(message) > 96)
                    {
                        SendClientMessage(i, -1, sprintf("{5dfeef}Admin:" EMBED_GREY " %.96s", message));
                        SendClientMessage(i, -1, sprintf(EMBED_GREY "... %s", message[96]));
                    }

                    else
                    {
                        SendClientMessage(i, -1, sprintf("{5dfeef}Admin:" EMBED_GREY " %s", message));
                    }

                    break;
                }
            }
        }
    }

    return 1;
}

stock KickEx(playerid, const reason[] = "")
{
    if(strlen(reason) > 3)
    {
        ErrorMessage(playerid, reason);
    }

    SetTimerEx("KickTimer", 1000, false, "d", playerid);

    return 1;
}

stock SetVehicleBitParamsEx(vehicleid, parameters)
{
    new engine, lights, alarm, doors, bonnet, boot, objective;

    if(BitFlag_Get(parameters, vp_Engine))
        engine = VEHICLE_PARAMS_ON;
    else
        engine = VEHICLE_PARAMS_OFF;

    if(BitFlag_Get(parameters, vp_Lights))
        lights = VEHICLE_PARAMS_ON;
    else
        lights = VEHICLE_PARAMS_OFF;

    if(BitFlag_Get(parameters, vp_Alarm))
        alarm = VEHICLE_PARAMS_ON;
    else
        alarm = VEHICLE_PARAMS_OFF;

    if(BitFlag_Get(parameters, vp_Doors))
        doors = VEHICLE_PARAMS_ON;
    else
        doors = VEHICLE_PARAMS_OFF;

    if(BitFlag_Get(parameters, vp_Bonnet))
        bonnet = VEHICLE_PARAMS_ON;
    else
        bonnet = VEHICLE_PARAMS_OFF;

    if(BitFlag_Get(parameters, vp_Boot))
        boot = VEHICLE_PARAMS_ON;
    else
        boot = VEHICLE_PARAMS_OFF;

    if(BitFlag_Get(parameters, vp_Objective))
        objective = VEHICLE_PARAMS_ON;
    else
        objective = VEHICLE_PARAMS_OFF;

    return SetVehicleParamsEx(vehicleid, engine, lights, alarm, doors, bonnet, boot, objective);
}

stock PlayerHasState(playerid, stateflag)
{
    return (CharacterInfo[playerid][cStateFlags] & stateflag) == stateflag;
}

stock SetPlayerState(playerid, stateflag)
{
    return BitFlag_On(CharacterInfo[playerid][cStateFlags], stateflag);
}

stock RemovePlayerState(playerid, stateflag)
{
    return BitFlag_Off(CharacterInfo[playerid][cStateFlags], stateflag);
}

stock PlayerAccountHasState(playerid, stateflag)
{
    return (AccountInfo[playerid][pStateFlags] & stateflag) == stateflag;
}

stock SetPlayerAccountState(playerid, stateflag)
{
    return BitFlag_On(AccountInfo[playerid][pStateFlags], stateflag);
}

stock RemovePlayerAccountState(playerid, stateflag)
{
    return BitFlag_Off(AccountInfo[playerid][pStateFlags], stateflag);
}

stock StaffHasState(playerid, stateflag)
{
    return (StaffInfo[playerid][sStaffFlags] & stateflag) == stateflag;
}

stock SetStaffState(playerid, stateflag)
{
    return BitFlag_On(StaffInfo[playerid][sStaffFlags], stateflag);
}

stock RemoveStaffState(playerid, stateflag)
{
    return BitFlag_Off(StaffInfo[playerid][sStaffFlags], stateflag);
}

stock StaffHasRole(playerid, stateflag)
{
    return (AccountInfo[playerid][pStaffRoles] & stateflag) == stateflag;
}

stock SetStaffRole(playerid, stateflag)
{
    return BitFlag_On(AccountInfo[playerid][pStaffRoles], stateflag);
}

stock RemoveStaffRole(playerid, stateflag)
{
    return BitFlag_Off(AccountInfo[playerid][pStaffRoles], stateflag);
}

stock PreloadAnimations(playerid)
{
    for(new i; i < sizeof(g_aPreloadLibs); i++) 
        ApplyAnimation(playerid, g_aPreloadLibs[i], "null", 4.0, 0, 0, 0, 0, 0, 1);

    return 1;
}

stock GetName(playerid, underscore = 1)
{
    new name[MAX_PLAYER_NAME + 1];
    GetPlayerName(playerid, name, sizeof(name));

    if(!underscore)
    {
        for (new i = 0, len = strlen(name); i < len; i ++) {
            if(name[i] == '_') name[i] = ' ';
        }
    }
    return name;
}

stock ProxDetector(Float:radius, playerid, const message[], col1, col2, col3, col4, col5, isplayerwillgetmessage = 1)
{
    new Float:fX, Float:fY, Float:fZ, Float:distance, VW, Int;
    GetPlayerPos(playerid, fX, fY, fZ);
    VW = GetPlayerVirtualWorld(playerid);
    Int = GetPlayerInterior(playerid);

    foreach(new i : Player)
    {
        if(isplayerwillgetmessage == 0 && i == playerid)
            continue;

        if(GetPlayerInterior(i) != Int || GetPlayerVirtualWorld(i) != VW) continue;

        distance = GetPlayerDistanceFromPoint(i, fX, fY, fZ);

        if(distance < radius/16) SendClientMessage(i, col1, message);
        else if(distance < radius/8) SendClientMessage(i, col2, message);
        else if(distance < radius/4) SendClientMessage(i, col3, message);
        else if(distance < radius/2) SendClientMessage(i, col4, message);
        else if(distance < radius) SendClientMessage(i, col5, message);
    }

    return 1;
}

stock ListPlayerStaffRoles(playerid)
{
    new roleList[128];

    for(new r = 0; r < sizeof(PlayerStaffRoles); r++)
    {
        if(BitFlag_Get(AccountInfo[playerid][pStaffRoles], (1 << r)))
            format(roleList, sizeof(roleList), "%s, %s", roleList, PlayerStaffRoles[r]);
    }

    if(strfind(roleList, ", ") != -1)
        strdel(roleList, strfind(roleList, ", "), strfind(roleList, ", ") + 2);

    if(isnull(roleList))
        roleList = "Oyuncu";

    return roleList;
}