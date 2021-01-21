public OnPlayerRetrieveAccount(playerid)
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