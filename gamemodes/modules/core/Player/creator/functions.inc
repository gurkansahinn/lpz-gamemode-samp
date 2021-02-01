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

    Dialog_ShowCallback(playerid, using inline Response, DIALOG_STYLE_INPUT, "Karakter Yaratma Paneli - Karakter Adý", "Karakter adýný belirleyebilmeniz için kutucuða yazmanýz gerekiyor.\n\n\
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
            static const monthDays[] = {
                31, 
                29, 
                31, 
                30, 
                31, 
                30, 
                31, 
                31, 
                30, 
                31, 
                30, 
                31
            };
            
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

stock ShowCreatorCountrieDialog(playerid)
{
    inline Response(pid, dialogid, response, listitem, string:text[])
    {
        #pragma unused listitem, dialogid, pid, text

        if(response)
        {
            if(strfind(text, "Sonraki Sayfa") != -1)
            {
                AccountInfo[playerid][pDialogPage]++;
                ShowCreatorCountrieDialog(playerid);
            }
            else if(strfind(text, "Önceki Sayfa") != -1)
            {
                AccountInfo[playerid][pDialogPage]--;
                ShowCreatorCountrieDialog(playerid);
            }
            else
            {
                if(listitem > sizeof(Countries))
                    return 1;

                new id = ((AccountInfo[playerid][pDialogPage] - 1) * ITEM_PER_PAGE) + listitem;
                PlayerTextDrawSetString(playerid, CharacterFirstCreator[playerid][34], Countries[id][cName]);
                PlayerTextDrawSetString(playerid, CharacterFirstCreator[playerid][39], Countries[id][cTxd]);

                AccountInfo[playerid][pCreatorCountry] = id;
                AccountInfo[playerid][pDialogPage] = 1;
            }
        }
    }

    new dialogBody[ITEM_PER_PAGE * MAX_COUNTRIE_NAME_LENGTH], 
        count = 0;

    for(new i = ((AccountInfo[playerid][pDialogPage] - 1) * ITEM_PER_PAGE); i < sizeof(Countries); i++)
    {
        if(count < ITEM_PER_PAGE)
		{
            format(dialogBody, sizeof(dialogBody), "%s%s\n", dialogBody, Countries[i][cName]);
            count++;
        }
        else
        {
			format(dialogBody, sizeof(dialogBody), "%s" EMBED_DANDELION "Sonraki Sayfa\n", dialogBody);
			break;
        }
    }

    if(AccountInfo[playerid][pDialogPage] > 1)
	{
		format(dialogBody, sizeof(dialogBody), "%s" EMBED_TOMATO "Önceki Sayfa", dialogBody);
	}

    Dialog_ShowCallback(playerid, using inline Response, DIALOG_STYLE_LIST, "Karakter Yaratma Paneli - Doðum Yeri", dialogBody, "Kaydet");
    return 1;
}

stock ShowCreatorLanguageDialog(playerid)
{
    inline Response(pid, dialogid, response, listitem, string:text[])
    {
        #pragma unused listitem, dialogid, pid, text

        if(response)
        {
            if(strfind(text, "Sonraki Sayfa") != -1)
            {
                AccountInfo[playerid][pDialogPage]++;
                ShowCreatorLanguageDialog(playerid);
            }
            else if(strfind(text, "Önceki Sayfa") != -1)
            {
                AccountInfo[playerid][pDialogPage]--;
                ShowCreatorLanguageDialog(playerid);
            }
            else
            {
                if(listitem > sizeof(Languages))
                    return 1;

                new id = ((AccountInfo[playerid][pDialogPage] - 1) * ITEM_PER_PAGE) + listitem;
                PlayerTextDrawSetString(playerid, CharacterFirstCreator[playerid][37], Languages[id][lName]);
                PlayerTextDrawSetString(playerid, CharacterFirstCreator[playerid][38], Languages[id][lTxd]);

                AccountInfo[playerid][pCreatorLanguage] = id;
                AccountInfo[playerid][pDialogPage] = 1;
            }
        }
    }

    new dialogBody[ITEM_PER_PAGE * MAX_LANGUAGE_NAME_LENGTH], 
        count = 0;

    for(new i = ((AccountInfo[playerid][pDialogPage] - 1) * ITEM_PER_PAGE); i < sizeof(Languages); i++)
    {
        if(count < ITEM_PER_PAGE)
		{
            format(dialogBody, sizeof(dialogBody), "%s%s\n", dialogBody, Languages[i][lName]);
            count++;
        }
        else
        {
			format(dialogBody, sizeof(dialogBody), "%s" EMBED_DANDELION "Sonraki Sayfa\n", dialogBody);
			break;
        }
    }

    if(AccountInfo[playerid][pDialogPage] > 1)
	{
		format(dialogBody, sizeof(dialogBody), "%s" EMBED_TOMATO "Önceki Sayfa", dialogBody);
	}

    Dialog_ShowCallback(playerid, using inline Response, DIALOG_STYLE_LIST, "Karakter Yaratma Paneli - Ek Dil", dialogBody, "Kaydet");
    return 1;
}

stock ShowCreatorEyeColour(playerid)
{
    inline Response(pid, dialogid, response, listitem, string:text[])
    {
        #pragma unused listitem, dialogid, pid, text

        if(response)
        {
            if(strfind(text, "Sonraki Sayfa") != -1)
            {
                AccountInfo[playerid][pDialogPage]++;
                ShowCreatorEyeColour(playerid);
            }
            else if(strfind(text, "Önceki Sayfa") != -1)
            {
                AccountInfo[playerid][pDialogPage]--;
                ShowCreatorEyeColour(playerid);
            }
            else
            {
                new colourID = ((AccountInfo[playerid][pDialogPage] - 1) * ITEM_PER_PAGE) + listitem;

                AccountInfo[playerid][pCreatorColour] = colourID;
                PlayerTextDrawSetString(playerid, CharacterSubFirstCreator[playerid][43], Colours[colourID][coName]);

                AccountInfo[playerid][pDialogPage] = 1;
            }
        }
    }

    new dialogBody[ITEM_PER_PAGE * MAX_COLOR_NAME_LENGTH + MAX_COLOR_EMBED_LENGTH], 
        count = 0;

    for(new i = ((AccountInfo[playerid][pDialogPage] - 1) * ITEM_PER_PAGE); i < sizeof(Colours); i++)
    {
        if(count < ITEM_PER_PAGE)
		{
			format(dialogBody, sizeof(dialogBody), "%s%s%s\n", dialogBody, Colours[i][coEmbedValue], Colours[i][coName]);
			count++;
		}
		else
		{
			format(dialogBody, sizeof(dialogBody), "%s" EMBED_DANDELION "Sonraki Sayfa\n", dialogBody);
			break;
		}
    }

	if(AccountInfo[playerid][pDialogPage] > 1)
	{
		format(dialogBody, sizeof(dialogBody), "%s" EMBED_TOMATO "Önceki Sayfa", dialogBody);
	}

    Dialog_ShowCallback(playerid, using inline Response, DIALOG_STYLE_LIST, "Karakter Yaratma Paneli - Göz Rengi", dialogBody, "Kaydet");
    return 1;
}

stock ShowCreatorWeight(playerid)
{
    inline Response(pid, dialogid, response, listitem, string:text[])
    {
        #pragma unused listitem, dialogid, pid, text

        if(response)
        {
            new weight;
            if(sscanf(text, "d", weight))
            {
                ErrorMessage(playerid, "Karakterinizin kilosunu uygun formata göre doldurmalýsýnýz.");
                ShowCreatorWeight(playerid);
                return 1;
            }

            if(weight < 40)
            {
                ErrorMessage(playerid, "Karakterinizin kilosu en az 40 olabilir.");
                ShowCreatorWeight(playerid);
                return 1;
            }

            if(weight > 150)
            {
                ErrorMessage(playerid, "Karakterinizin kilosu en fazla 150 olabilir.");
                ShowCreatorWeight(playerid);
                return 1;
            }

            AccountInfo[playerid][pCreatorWeight] = weight;
            PlayerTextDrawSetString(playerid, CharacterSubFirstCreator[playerid][38], sprintf("%d_KG", weight));
        }
    }

    Dialog_ShowCallback(playerid, using inline Response, DIALOG_STYLE_INPUT, "Karakter Yaratma Paneli - Kilo", "Karakterinizin kilosunu belirleyebilmeniz için kutucuða yazmanýz gerekiyor.\n\n\
        -> Kilo yazým formatýnýz 00 þeklinde olmalý. (örneðin: 69 veya 100)\n\
        -> Karakterinizin kilosu maksimum 150 olabilir.\n\
        -> Karakterinizin kilosu minimum 40 olabilir.", "Kaydet");
    return 1;
}

stock ShowCreatorHeight(playerid)
{
    inline Response(pid, dialogid, response, listitem, string:text[])
    {
        #pragma unused listitem, dialogid, pid, text

        if(response)
        {
            new height;
            if(sscanf(text, "d", height))
            {
                ErrorMessage(playerid, "Karakterinizin uzunluðunu uygun formata göre doldurmalýsýnýz.");
                ShowCreatorHeight(playerid);
                return 1;
            }

            if(height > 200)
            {
                ErrorMessage(playerid, "Boy 2 metreden uzun olamaz.");
                ShowCreatorHeight(playerid);
                return 1;
            }

            if(height < 130)
            {
                ErrorMessage(playerid, "Boy 1 metre 30 santimetreden kýsa olamaz.");
                ShowCreatorHeight(playerid);
                return 1;
            }

            AccountInfo[playerid][pCreatorHeight] = height;
            PlayerTextDrawSetString(playerid, CharacterSubFirstCreator[playerid][40], sprintf("%d_KG", height));
        }
    }

    Dialog_ShowCallback(playerid, using inline Response, DIALOG_STYLE_INPUT, "Karakter Yaratma Paneli - Uzunluk", "Karakterinizin uzunluðunu belirleyebilmeniz için kutucuða yazmanýz gerekiyor.\n\n\
        -> Uzunluk yazým formatýnýz 000 þeklinde olmalý. (örneðin: 179, bu örneðe göre 1(metre) 79(santimetre)'yi temsil eder)\n\
        -> Karakter uzunluðunuz en fazla 2 metre olabilir.\n\
        -> Karakter uzunluðunuz en az 1 metre 30 santim olabilir.", "Kaydet");
    return 1;
}

stock ResetCreatorFirstData(playerid)
{
    strunpack(AccountInfo[playerid][pCreatorName], "Belirtilmemis");
    strunpack(AccountInfo[playerid][pCreatorDate], "00/00/0000");

    AccountInfo[playerid][pCreatorLanguage] = 0;
    AccountInfo[playerid][pCreatorCountry] = 0;
    AccountInfo[playerid][pCreatorGender] = 0;

    PlayerTextDrawSetString(playerid, CharacterFirstCreator[playerid][23], AccountInfo[playerid][pCreatorName]);
    PlayerTextDrawSetString(playerid, CharacterFirstCreator[playerid][27], Genders[AccountInfo[playerid][pCreatorGender]]);
    PlayerTextDrawSetString(playerid, CharacterFirstCreator[playerid][29], AccountInfo[playerid][pCreatorDate]);
    
    new countryID = AccountInfo[playerid][pCreatorCountry];
    PlayerTextDrawSetString(playerid, CharacterFirstCreator[playerid][34], Countries[countryID][cName]);
    PlayerTextDrawSetString(playerid, CharacterFirstCreator[playerid][39], Countries[countryID][cTxd]);

    new languageID = AccountInfo[playerid][pCreatorLanguage];
    PlayerTextDrawSetString(playerid, CharacterFirstCreator[playerid][37], Languages[languageID][lName]);
    PlayerTextDrawSetString(playerid, CharacterFirstCreator[playerid][38], Languages[languageID][lTxd]);
}

stock ResetCreatorSubFirstData(playerid)
{
    AccountInfo[playerid][pCreatorSkin] = INVALID_PLAYER_ID;
    PlayerTextDrawSetString(playerid, CharacterSubFirstCreator[playerid][36], "Sec"); 

    AccountInfo[playerid][pCreatorColour] = 0;
    PlayerTextDrawSetString(playerid, CharacterSubFirstCreator[playerid][43], Colours[0][coName]);

    AccountInfo[playerid][pCreatorWeight] = 0;
    PlayerTextDrawSetString(playerid, CharacterSubFirstCreator[playerid][38], "00_KG");

    AccountInfo[playerid][pCreatorHeight] = 0;
    PlayerTextDrawSetString(playerid, CharacterSubFirstCreator[playerid][40], "00_CM");
}