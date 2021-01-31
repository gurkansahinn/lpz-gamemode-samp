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
                ErrorMessage(playerid, sprintf("Karakter adýnýz maksimum %d karakter olabilir.", MAX_PLAYER_NAME));
                ShowCreatorNameDialog(playerid);
                return 1;
            }

            for(new i = 0; i < sizeof(BlockedNames); i++)
			{
                if(!strcmp(BlockedNames[i], text))
                {
                    ErrorMessage(playerid, "Ünlü isimlerini kullanamazsýn.");
                    ShowCreatorNameDialog(playerid);
                    return 1;
                }
            }

            for(new i = 0; i < sizeof(TurkishCharacters); i++)
            {
                if(strfind(text, TurkishCharacters[i]) != -1)
                {
                    ErrorMessage(playerid, "Karakter isminizde türkçe karakter kullanamazsýnýz.");
                    ShowCreatorNameDialog(playerid);
                    return 1;
                }
            }

            if(strfind(text, "_") == -1)
            {
                ErrorMessage(playerid, "Karakter adýnýzýn formatý Ad_Soyad þeklinde olmalýdýr.");
                ShowCreatorNameDialog(playerid);
                return 1;
            }

            strunpack(AccountInfo[playerid][pCreatorName], text);
            PlayerTextDrawSetString(playerid, CharacterFirstCreator[playerid][23], text);
        }
    }

    Dialog_ShowCallback(playerid, using inline Response, DIALOG_STYLE_INPUT, "Karakter Yaratma Paneli - Karakter Adý", "Karakter adýný belirleyebilmeniz için kutucuða yazmanýz         gerekiyor.\n\n\
        -> Karakter isimleri maksimum 24 karakter olabilir.\n\
        -> Karakter ismi yazýlýrken _ koymak zorunlu deðil. Eðer yoksa sistem otomatik ekler.\n\
        -> Türkçe harf kullanýlamaz.\n\
        -> Sadece iki isimli formata izin verilir. (Ad_Soyad)\n\
        -> Çok bilindik ünlü isimleri kullanýlamaz. (John Wick, Rick Grimes, Daryl Dixon gibi..)", "Kaydet");
    return 1;
}

stock ShowCreatorGenderDialog(playerid)
{
    inline Response(pid, dialogid, response, listitem, string:text[])
    {
        #pragma unused listitem, dialogid, pid, text

        if(response)
        {
            AccountInfo[playerid][pCreatorGender] = listitem+1;
            PlayerTextDrawSetString(playerid, CharacterFirstCreator[playerid][27], Genders[AccountInfo[playerid][pCreatorGender]]);
        }
    }

    Dialog_ShowCallback(playerid, using inline Response, DIALOG_STYLE_LIST, "Karakter Yaratma Paneli - Karakter Cinsiyeti", "Erkek\nKadýn", "Kaydet");
    return 1;
}

stock ShowCreatorDateDialog(playerid)
{
    inline Response(pid, dialogid, response, listitem, string:text[])
    {
        #pragma unused listitem, dialogid, pid, text

        if(response)
        {
            new day, month, year;
            static const monthDays[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            
            if (sscanf(text, "p</>ddd", day, month, year)) 
            {
                ErrorMessage(playerid, "GUN/AY/YIL formatýna uygun bir þekilde giriþ yapmalýsýnýz.");
                ShowCreatorDateDialog(playerid);
            }
            else if(year < 1950 || year > 2004)
            {
                ErrorMessage(playerid, "Doðum yýlýnýz en fazla 2004 en az 1950 olabilir.");
            }
            else if(month < 1 || month > 12)
            {
                ErrorMessage(playerid, "Doðum ayý hatalý gözüküyor. Tekrar kontrol ediniz.");
                ShowCreatorDateDialog(playerid);
            }
            else if(day < 1 || day > monthDays[month - 1])
            {
                ErrorMessage(playerid, "Bu ay içerisinde böyle bir gün bulunmuyor.");
                ShowCreatorDateDialog(playerid);
            }
            else
            {
                strunpack(AccountInfo[playerid][pCreatorDate], text);
                PlayerTextDrawSetString(playerid, CharacterFirstCreator[playerid][29], AccountInfo[playerid][pCreatorDate]);
            }
        }
    }

    Dialog_ShowCallback(playerid, using inline Response, DIALOG_STYLE_INPUT, "Karakter Yaratma Paneli - Doðum Tarihi", "Karakterinizin doðum tarihini belirleyebilmeniz için kutucuða yazmanýz gerekiyor.\n\n\
        -> Doðum yýlýnýz en fazla 2004 olabilir.\n\
        -> Doðum yýlýnýz en az 1950 olabilir.\n\
        -> Doðum yýlý formatý GUN/AY/YIL þeklinde olmalýdýr.", "Kaydet");
    return 1;
}

stock ResetCreatorFirstData(playerid)
{
    strunpack(AccountInfo[playerid][pCreatorName], "Belirtilmemis");
    strunpack(AccountInfo[playerid][pCreatorDate], "00/00/0000");

    AccountInfo[playerid][pCountry] = 0;
    AccountInfo[playerid][pCreatorGender] = 0;

    PlayerTextDrawSetString(playerid, CharacterFirstCreator[playerid][23], AccountInfo[playerid][pCreatorName]);
    PlayerTextDrawSetString(playerid, CharacterFirstCreator[playerid][27], Genders[AccountInfo[playerid][pCreatorGender]]);
    PlayerTextDrawSetString(playerid, CharacterFirstCreator[playerid][29], AccountInfo[playerid][pCreatorDate]);
    
    new countryID = AccountInfo[playerid][pCountry];
    PlayerTextDrawSetString(playerid, CharacterFirstCreator[playerid][34], Countries[countryID][cName]);
    PlayerTextDrawSetString(playerid, CharacterFirstCreator[playerid][38], Countries[countryID][cTxd]);
}