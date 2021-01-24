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
            cache_get_value_index_int(character, 2, CharacterPanelInfo[playerid][character][cSkin]);
        }
    }

    ShowCharacterPanel(playerid);
    return 1;
}