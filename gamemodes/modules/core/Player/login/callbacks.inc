public OnPlayerReceivedAccount(playerid)
{
    new rows = cache_num_rows();

    if(rows)
    {
        cache_get_value_index_int(0, 0, AccountInfo[playerid][pID]);
        cache_get_value_index_int(0, 1, AccountInfo[playerid][pForumID]);

        cache_get_value_index(0, 2, AccountInfo[playerid][pName]);
        cache_get_value_index(0, 3, AccountInfo[playerid][pPassword]);

        ShowLoginDialog(playerid);
    }
    else
    {
        KickEx(playerid, "Kullan�c� paneli �zerinden �ifreni belirlememi� veya hi� kay�t olmam��s�n�z.");
    }
    return 1;
}

public OnPlayerReceivedCharacters(playerid)
{
    new rows = cache_num_rows();

    for(new characterPanelArray = 0; characterPanelArray < CHARACTER_PER_PAGE; characterPanelArray++)
    {
        CharacterPanelInfo[playerid][characterPanelArray][cSqlID] = 0;
        CharacterPanelInfo[playerid][characterPanelArray][cName] = EOS;
        CharacterPanelInfo[playerid][characterPanelArray][cSkin] = INVALID_CHARACTER_SKIN;
    }

    if(rows)
    {
        for(new character = 0; character < rows; character++)
        {
            if(character == CHARACTER_PER_PAGE)
                break;

            cache_get_value_index_int(character, 0, CharacterPanelInfo[playerid][character][cSqlID]);

            cache_get_value_index(character, 1, CharacterPanelInfo[playerid][character][cName]);
            strunpack(CharacterPanelInfo[playerid][character][cName], RemoveUnderscore(CharacterPanelInfo[playerid][character][cName]));

            cache_get_value_index_int(character, 2, CharacterPanelInfo[playerid][character][cSkin]);
        }
    }

    ResetCharacterPanel(playerid);
    ShowCharacterPanel(playerid);
    return 1;
}

public OnPlayerLoadCharacter(playerid)
{
    ClearChat(playerid, 20);
    
    new rows = cache_num_rows();

    if(rows)
    {
        cache_get_value_name_int(0, "character_id", CharacterInfo[playerid][cID]);
        cache_get_value_name(0, "character_name", CharacterInfo[playerid][cName]);

        cache_get_value_name_int(0, "character_skin", CharacterInfo[playerid][cSkin]);
        cache_get_value_name_int(0, "character_stateflags", CharacterInfo[playerid][cStateFlags]);

        cache_get_value_name_float(0, "character_x", CharacterInfo[playerid][cX]);
        cache_get_value_name_float(0, "character_y", CharacterInfo[playerid][cY]);
        cache_get_value_name_float(0, "character_z", CharacterInfo[playerid][cZ]);
        cache_get_value_name_float(0, "character_a", CharacterInfo[playerid][cA]);

        cache_get_value_name_int(0, "character_interior", CharacterInfo[playerid][cInterior]);
        cache_get_value_name_int(0, "character_world", CharacterInfo[playerid][cWorld]);

        cache_get_value_name_float(0, "character_health", CharacterInfo[playerid][cHealth]);
        cache_get_value_name_float(0, "character_armour", CharacterInfo[playerid][cArmour]);

        SetSpawnInfo(playerid, NO_TEAM, CharacterInfo[playerid][cSkin], CharacterInfo[playerid][cX], CharacterInfo[playerid][cY], CharacterInfo[playerid][cZ], CharacterInfo[playerid][cA], 0, 0, 0, 0, 0, 0);
        TogglePlayerSpectating(playerid, false);

        //SpawnPlayer(playerid);

        SlowCameraMod(playerid);

        SetPlayerPos(playerid, CharacterInfo[playerid][cX], CharacterInfo[playerid][cY], CharacterInfo[playerid][cZ]);
        SetPlayerFacingAngle(playerid, CharacterInfo[playerid][cA]);

        SetPlayerSkin(playerid, CharacterInfo[playerid][cSkin]);

        SetPlayerHealth(playerid, CharacterInfo[playerid][cHealth]);
        SetPlayerArmour(playerid, CharacterInfo[playerid][cArmour]);

        SetPlayerInterior(playerid, CharacterInfo[playerid][cInterior]);
        SetPlayerVirtualWorld(playerid, CharacterInfo[playerid][cWorld]);

        new response = SetPlayerName(playerid, CharacterInfo[playerid][cName]);

        if(response)
        {
            GameTextForPlayer(playerid, sprintf("~y~Hos geldiniz,~n~~w~%s", CharacterInfo[playerid][cName]), 8 * 1000, 1);

            HideCharacterPanel(playerid);

            CreateCharacterNametag(playerid);
            UpdateCharacterNametag(playerid);
            CancelSelectTextDraw(playerid);
        }
        else
        {
            KickEx(playerid, "Karakter ad�n�zla ilgili problem ya�and�. L�tfen ticket yoluyla bizimle ileti�ime ge�iniz.");
        }
    }
    else
    {
        KickEx(playerid, "Bu karakter bulunamad��� i�in oyundan ��kart�ld�n�z. L�tfen ticket yoluyla bizimle ileti�ime ge�iniz.");
    }
    return 1;
}