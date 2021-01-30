stock CheckPlayerAccount(playerid)
{
    mysql_tquery(mysqlG, GetAccountData(.fields = "accounts.account_id, accounts.account_forum_id, accounts.account_name, accounts.account_password", .forumId = strval(GetName(playerid))), "OnPlayerReceivedAccount", "d", playerid);
    return 1;
}

stock CheckPlayerCharacters(playerid)
{
    mysql_tquery(mysqlG, GetCharacterData(.fields = "characters.character_id, characters.character_name, characters.character_skin", .page = AccountInfo[playerid][pCharacterPanelPage], .accountId = AccountInfo[playerid][pID]), "OnPlayerReceivedCharacters", "d", playerid);
}

stock ShowLoginDialog(playerid)
{
    inline Response(pid, dialogid, response, listitem, string:text[])
    {
        #pragma unused listitem, dialogid, pid, text

        if(!response)
        {
            KickEx(playerid, "Oyundan çýkýþ yapmaya karar verdiniz.");
            return false;
        }

        SHA256_PassHash(text, AccountInfo[playerid][pName], text, sizeof(text));
        printf("%s", text);
        if(!strcmp(text, AccountInfo[playerid][pPassword]))
        {
            ServerMessage(playerid, "Ýþlem baþarýlý karakter giriþ yapma ekraný hazýrlanýyor.");
            
            CheckPlayerCharacters(playerid);
            return true;
        }
        else
        {
            ServerMessage(playerid, "Hatalý þifre girdiniz. Tekrar deneyin.");
            ShowLoginDialog(playerid);
            return false;
        }
    }

    Dialog_ShowCallback(playerid, using inline Response, DIALOG_STYLE_PASSWORD, sprintf("%s - Giriþ Yap", AccountInfo[playerid][pName]), "Kullanýcý paneli üzerinden belirlediðin þifren ile giriþ yapabilirsin.\nGiriþ yaptýðýn zaman karakter bilgilerini görüntüleyeceksin.", "Giriþ Yap", "Çýkýþ Yap");
    return true;
}

stock LoadCharacter(playerid, sqlId)
{
    mysql_tquery(mysqlG, GetCharacterData(.characterId = sqlId), "OnPlayerLoadCharacter", "d", playerid);
    return 1;
}