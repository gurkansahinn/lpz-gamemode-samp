/*

    Account Model

*/

stock GetAccountData(const fields[] = "accounts.*", const joins[] = "", const wheres[] = "", page = 1, limit = -1, accountId = -1, forumId = -1, const accountName[] = "")
{
    new query[512];

    format(query, sizeof(query), "SELECT %s FROM accounts", fields);

    if(!isnull(joins))
    {
        format(query, sizeof(query), "%s %s", query, joins);
    }

    format(query, sizeof(query), "%s WHERE 1", query);

    if(accountId != -1)
    {
        mysql_format(mysqlG, query, sizeof(query), "%s AND accounts.account_id = '%d'", query, accountId);
    }

    if(forumId != -1)
    {
        mysql_format(mysqlG, query, sizeof(query), "%s AND accounts.account_forum_id = '%d'", query, forumId);
    }

    if(!isnull(accountName))
    {
        mysql_format(mysqlG, query, sizeof(query), "%s AND `accounts.account_name` = '%s'", query, accountName);
    }

    if(!isnull(wheres))
    {
        format(query, sizeof(query), "%s AND %s", query, wheres);
    }

    mysql_format(mysqlG, query, sizeof(query), "%s ORDER BY accounts.account_id DESC", query);

    if(limit == -1)
        mysql_format(mysqlG, query, sizeof(query), "%s LIMIT %d, 10000", query, ((page - 1) * ITEM_PER_PAGE));
    else
        mysql_format(mysqlG, query, sizeof(query), "%s LIMIT %d, 1", query, ((page - 1) * ITEM_PER_PAGE) + limit);

    return query;
}

/*

    Character Model

*/

stock GetCharacterData(const fields[] = "characters.*", const joins[] = "", const wheres[] = "", page = 1, accountId = -1, characterId = -1, const characterName[] = "")
{
    new query[715+MAX_PLAYER_NAME];

    format(query, sizeof(query), "SELECT %s FROM characters", fields);

    if(!isnull(joins))
    {
        format(query, sizeof(query), "%s %s", query, joins);
    }

    format(query, sizeof(query), "%s WHERE 1", query);

    if(accountId != -1)
    {
        mysql_format(mysqlG, query, sizeof(query), "%s AND characters.character_account_id = '%d'", query, accountId);
    }

    if(characterId != -1)
    {
        mysql_format(mysqlG, query, sizeof(query), "%s AND characters.character_id = '%d'", query, characterId);
    }

    if(!isnull(characterName))
    {
        mysql_format(mysqlG, query, sizeof(query), "%s AND `characters.character_name` = '%s'", query, characterName);
    }

    if(!isnull(wheres))
    {
        format(query, sizeof(query), "%s AND %s", query, wheres);
    }

    //mysql_format(mysqlG, query, sizeof(query), "%s ORDER BY characters.character_id DESC", query);

    /*if(limit == -1)
        mysql_format(mysqlG, query, sizeof(query), "%s LIMIT %d, 10000", query, ((page - 1) * CHARACTER_PER_PAGE));
    else
        mysql_format(mysqlG, query, sizeof(query), "%s LIMIT %d, 1", query, ((page - 1) * CHARACTER_PER_PAGE) + limit);*/

    if(page != 1)
        mysql_format(mysqlG, query, sizeof(query), "%s LIMIT %d, %d", query, ((page-1) * CHARACTER_PER_PAGE), page * CHARACTER_PER_PAGE);
        
    return query;
}

stock ResetPVariables(playerid)
{
	AccountInfo[playerid][pID] = 0;
    AccountInfo[playerid][pLogged] = false;
	AccountInfo[playerid][pName] = EOS;
	AccountInfo[playerid][pStateFlags] = 0;
    AccountInfo[playerid][pStaffRoles] = 0;

    AccountInfo[playerid][pDialogPage] = 1;
    AccountInfo[playerid][pCharacterPanelPage] = 1;
    AccountInfo[playerid][pCameraZoom] = 0;

    for(new characterPanelArray = 0; characterPanelArray < CHARACTER_PER_PAGE; characterPanelArray++)
    {
        CharacterPanelInfo[playerid][characterPanelArray][cSqlID] = 0;
        CharacterPanelInfo[playerid][characterPanelArray][cName] = EOS;
        CharacterPanelInfo[playerid][characterPanelArray][cSkin] = INVALID_CHARACTER_SKIN;
    }

    CharacterInfo[playerid][cID] = 0;

    if(IsValidDynamic3DTextLabel(CharacterInfo[playerid][cNametagID]))
        DestroyDynamic3DTextLabel(CharacterInfo[playerid][cNametagID]);

    ResetCreatorFirstData(playerid);
    ResetCreatorSubFirstData(playerid);

    SetPlayerColor(playerid, COLOUR_GRAY);
    return 1;
}

stock ServerMessage(playerid, const message[])
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

stock UsageMessage(playerid, const message[])
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

stock OptionMessage(playerid, const message[])
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

    defer KickPlayer(playerid);
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

// Character State Flags
stock CharacterHasState(playerid, stateflag)
{
    return (CharacterInfo[playerid][cStateFlags] & stateflag) == stateflag;
}

stock SetCharacterState(playerid, stateflag)
{
    return BitFlag_On(CharacterInfo[playerid][cStateFlags], stateflag);
}

stock RemoveCharacterState(playerid, stateflag)
{
    return BitFlag_Off(CharacterInfo[playerid][cStateFlags], stateflag);
}

// Account State Flags
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

// Staff State Flags
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

// Staff Role Flags
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

stock RemoveUnderscore(const name[])
{
    new newName[MAX_PLAYER_NAME];
    format(newName, sizeof(newName), name);
    for (new i = 0, len = strlen(newName); i < len; i ++) {
        if(newName[i] == '_') newName[i] = ' ';
    }
    return newName;
}

stock ClearChat(playerid, lines = 20)
{
    for(new i = 0; i < lines; i++)
    {
        SendClientMessage(playerid, -1, "");
    }

    return 1;
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

stock SlowCameraMod(playerid)
{
    AccountInfo[playerid][pCameraZoom] = 4;
    SetPlayerCameraPos(playerid, CharacterInfo[playerid][cX], CharacterInfo[playerid][cY], CharacterInfo[playerid][cZ] + (25.0 * AccountInfo[playerid][pCameraZoom]));
    SetPlayerCameraLookAt(playerid, CharacterInfo[playerid][cX], CharacterInfo[playerid][cY], CharacterInfo[playerid][cZ]);
}

stock CreateCharacterNametag(playerid)
{
	if(!IsPlayerNPC(playerid))
	{
        CharacterInfo[playerid][cNametagID] = CreateDynamic3DTextLabel(" ", -1, CharacterInfo[playerid][cX], CharacterInfo[playerid][cY], CharacterInfo[playerid][cZ] + 0.45, NAME_STREAM_DISTANCE, playerid, INVALID_VEHICLE_ID, 1, -1, -1, -1, NAME_STREAM_DISTANCE);
    }
	return 1;
}

stock UpdateCharacterNametag(playerid)
{
	if(!IsPlayerNPC(playerid))
	{
		if(!IsValidDynamic3DTextLabel(CharacterInfo[playerid][cNametagID]))
			CreateCharacterNametag(playerid);

		UpdateDynamic3DTextLabelText(CharacterInfo[playerid][cNametagID], -1, sprintf("%s (%d)", CharacterInfo[playerid][cName], playerid));
	}
	return 1;
}