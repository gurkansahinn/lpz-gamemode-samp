task GlobalSecondTimer[1000]() 
{
    foreach(new p : Player)
    {
        if(AccountInfo[p][pCameraZoom] > 1)
        {
            new Float:x, Float:y, Float:z;

            GetPlayerPos(p, x, y, z);

            AccountInfo[p][pCameraZoom]--;

            SetPlayerCameraPos(p, x, y, z + (25.0 * AccountInfo[p][pCameraZoom]));
            SetPlayerCameraLookAt(p, x, y, z);
        }
        else if(AccountInfo[p][pCameraZoom] == 1)
        {
            AccountInfo[p][pCameraZoom] = 0;

            SetCameraBehindPlayer(p);
        }
    }
}

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
        KickEx(playerid, "Kullanýcý paneli üzerinden þifreni belirlememiþ veya hiç kayýt olmamýþsýnýz.");
    }
    return 1;
}

public OnPlayerReceivedCharacters(playerid)
{
    new rows = cache_num_rows();

    if(rows)
    {
        for(new character = 0; character < rows; character++)
        {
            cache_get_value_index_int(character, 0, CharacterPanelInfo[playerid][character][cSqlID]);

            cache_get_value_index(character, 1, CharacterPanelInfo[playerid][character][cName]);
            strunpack(CharacterPanelInfo[playerid][character][cName], RemoveUnderscore(CharacterPanelInfo[playerid][character][cName]));

            cache_get_value_index_int(character, 2, CharacterPanelInfo[playerid][character][cSkin]);
        }
    }

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

            for(new characterPanelTextdraw = 0; characterPanelTextdraw < MAX_CHARACTER_PANEL_TEXTDRAW; characterPanelTextdraw++)
            {
                PlayerTextDrawHide(playerid, CharacterPanel[playerid][characterPanelTextdraw]);
            }

            CreateCharacterNametag(playerid);
            UpdateCharacterNametag(playerid);
            CancelSelectTextDraw(playerid);
        }
        else
        {
            KickEx(playerid, "Karakter adýnýzla ilgili problem yaþandý. Lütfen ticket yoluyla bizimle iletiþime geçiniz.");
        }
    }
    else
    {
        KickEx(playerid, "Bu karakter bulunamadýðý için oyundan çýkartýldýnýz. Lütfen ticket yoluyla bizimle iletiþime geçiniz.");
    }
    return 1;
}