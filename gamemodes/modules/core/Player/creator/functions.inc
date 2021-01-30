stock ShowCreatorNameDialog(playerid)
{
    inline Response(pid, dialogid, response, listitem, string:text[])
    {
        #pragma unused listitem, dialogid, pid, text

        if(response)
        {

            if(strfind(text, " ") != -1)
                strreplace(text, " ", "_");

            if(strlen(text) < 1)
                return 1;
                
            if(strlen(text) > MAX_PLAYER_NAME)
            {
                ErrorMessage(playerid, sprintf("Karakter ad�n�z maksimum %d karakter olabilir.", MAX_PLAYER_NAME));
                ShowCreatorNameDialog(playerid);
                return 1;
            }

            for(new i = 0; i < sizeof(BlockedNames); i++)
			{
                if(!strcmp(BlockedNames[i], text))
                {
                    ErrorMessage(playerid, "�nl� isimlerini kullanamazs�n.");
                    ShowCreatorNameDialog(playerid);
                    return 1;
                }
            }

            if(strfind(text, "_") == -1)
            {
                ErrorMessage(playerid, "Karakter ad�n�z�n format� Ad_Soyad �eklinde olmal�d�r.");
                ShowCreatorNameDialog(playerid);
                return 1;
            }

            strunpack(AccountInfo[playerid][pCreatorName], text);
            PlayerTextDrawSetString(playerid, CharacterFirstCreator[playerid][23], text);
        }
    }

    Dialog_ShowCallback(playerid, using inline Response, DIALOG_STYLE_INPUT, "Karakter Yaratma Paneli - Karakter Ad�", "Karakter ad�n� belirleyebilmeniz i�in kutucu�a yazman�z         gerekiyor.\n\n\
        -> Karakter isimleri maksimum 24 karakter olabilir.\n\
        -> Karakter ismi yaz�l�rken _ koymak zorunlu de�il. E�er yoksa sistem otomatik ekler.\n\
        -> T�rk�e harf kullan�lamaz.\n\
        -> Sadece iki isimli formata izin verilir. (Ad_Soyad)\n\
        -> �ok bilindik �nl� isimleri kullan�lamaz. (John Wick, Rick Grimes, Daryl Dixon gibi..)", "Kaydet");
    return 1;
}

stock ResetCreatorFirstData(playerid)
{
    strunpack(AccountInfo[playerid][pCreatorName], "Belirtilmemis");
}