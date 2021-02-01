#include <YSI_CODING\y_hooks>

#include <core/Player/globals>
#include <core/Player/clouds>
#include <core/Player/colours>
#include <core/Player/timers>
#include <core/Player/functions>
#include <core/Player/commands>
#include <core/Player/callbacks>

// Character Creator
#include <core/Player/creator/main>

// Login System
#include <core/Player/login/main>

hook OnPlayerConnect(playerid)
{
	if(IsPlayerNPC(playerid))
	{
		if(strcmp(GetIP(playerid), "127.0.0.1") && strcmp(GetIP(playerid), "localhost"))
		{
			AdminWarn(LEAD_WARN, sprintf("%s IP adresi muhtemelen NPC saldýrýsý düzenliyor. (ID: %d)", GetIP(playerid), playerid));
			KickEx(playerid, "Uygun olmayan giriþ yaptýðýnýz için sunucudan uzaklaþtýrýlýyorsunuz.");
		}
	}

    Streamer_ToggleCameraUpdate(playerid, 1);
	Streamer_ToggleIdleUpdate(playerid, 1);

    CreateCharacterPanelTextdraw(playerid);
    CreateCreatorFirstPanel(playerid);
    CreateCreatorSubFirstPage(playerid);

    ResetPVariables(playerid);
}

hook OnPlayerDisconnect(playerid, reason)
{
    ResetPVariables(playerid);
}

hook OnPlayerText(playerid, text[])
{
	ProxDetector(15.0, playerid, sprintf("%s: %s", GetName(playerid, 0), text), COLOUR_GRAY, COLOUR_MERCURY, COLOUR_SILVER, COLOUR_NOBEL, COLOUR_DUSTYGRAY);
}

hook OnPlayerKeyStateChange(playerid, newkeys, oldkeys)
{
    if(newkeys == KEY_NO)
    {
        if(CharacterInfo[playerid][cMovementState] == CHARACTER_MOVE_STATE_WALK)
        {
            ApplyAnimation(playerid, "PED", "PLAYER_SNEAK", 4.1, 1, 1, 1, 1, 1);
            CharacterInfo[playerid][cMovementState] = CHARACTER_MOVE_STATE_SLOW;
        }
        else
        {
            ClearAnimations(playerid, 1);
            CharacterInfo[playerid][cMovementState] = CHARACTER_MOVE_STATE_WALK;
        }
    }    
    return 1;
}

public OnPlayerClickPlayerTextDraw(playerid, PlayerText:playertextid)
{
    // Character Panel
    if(playertextid == CharacterPanel[playerid][38])
    {
        new sqlid = AccountInfo[playerid][pSelectedCharacter];
        if(sqlid == 0)
        {
            ErrorMessage(playerid, "Oyunu baþlatmak için bir karakteri seçmelisiniz. Eðer ki bir karakteriniz yoksa yeni bir tane oluþturabilirsiniz.");
        }
        else
        {
            LoadCharacter(playerid, AccountInfo[playerid][pSelectedCharacter]);
        }
    } 
    else if(playertextid == CharacterPanel[playerid][19]) // Sayfa Atla CharacterPanel [19]
    {
        AccountInfo[playerid][pCharacterPanelPage]++;
        CheckPlayerCharacters(playerid);
    }
    else if(playertextid == CharacterPanel[playerid][20]) // Sayfa Geri CharacterPanel [20]
    {
        if(AccountInfo[playerid][pCharacterPanelPage] <= 1)
        {
            ErrorMessage(playerid, "Bu sayfadan geriye gidemezsin.");
        }
        else
        {
            AccountInfo[playerid][pCharacterPanelPage]--;
            CheckPlayerCharacters(playerid);
        }
    }
    else if(playertextid == CharacterPanel[playerid][10]) // CharcterPanelInfo [0]
    {
        if(CharacterPanelInfo[playerid][0][cSqlID] == 0)
        {
            HideCharacterPanel(playerid);
            ShowCharacterCreatorFirstPanel(playerid);
        }
        else
        {
            ResetCharacterPanel(playerid);
            PlayerTextDrawSetString(playerid, CharacterPanel[playerid][10], "mdl-4003:hud7");

            AccountInfo[playerid][pSelectedCharacter] = CharacterPanelInfo[playerid][0][cSqlID];
            ServerMessage(playerid, sprintf("Seçili karakterinizi %s olarak güncellediniz.", CharacterPanelInfo[playerid][0][cName]));
        }
    }
    else if(playertextid == CharacterPanel[playerid][11]) // CharacterPanelInfo [1]
    {
        if(CharacterPanelInfo[playerid][1][cSqlID] == 0)
        {
            HideCharacterPanel(playerid);
            ShowCharacterCreatorFirstPanel(playerid);
        }
        else
        {
            ResetCharacterPanel(playerid);
            PlayerTextDrawSetString(playerid, CharacterPanel[playerid][11], "mdl-4003:hud7");

            AccountInfo[playerid][pSelectedCharacter] = CharacterPanelInfo[playerid][1][cSqlID];
            ServerMessage(playerid, sprintf("Seçili karakterinizi %s olarak güncellediniz.", CharacterPanelInfo[playerid][1][cName]));
        }
    }
    else if(playertextid == CharacterPanel[playerid][13]) // CharacterPanelInfo [2]
    {
        if(CharacterPanelInfo[playerid][2][cSqlID] == 0)
        {
            HideCharacterPanel(playerid);
            ShowCharacterCreatorFirstPanel(playerid);
        }
        else
        {
            ResetCharacterPanel(playerid);
            PlayerTextDrawSetString(playerid, CharacterPanel[playerid][13], "mdl-4003:hud7");

            AccountInfo[playerid][pSelectedCharacter] = CharacterPanelInfo[playerid][2][cSqlID];
            ServerMessage(playerid, sprintf("Seçili karakterinizi %s olarak güncellediniz.", CharacterPanelInfo[playerid][2][cName]));
        }
    }

    // Character Creator
    else if(playertextid == CharacterFirstCreator[playerid][31]) // Back Button
    {
        ResetCreatorFirstData(playerid);
        ResetCreatorSubFirstData(playerid);

        HideCharacterCreatorFirstPanel(playerid);
        CheckPlayerCharacters(playerid); 
    }
    else if(playertextid == CharacterFirstCreator[playerid][23]) // Character Name
    {
        ShowCreatorNameDialog(playerid);
    }
    else if(playertextid == CharacterFirstCreator[playerid][27]) // Gender
    {
        ShowCreatorGenderDialog(playerid);
    }
    else if(playertextid == CharacterFirstCreator[playerid][29]) // Date
    {
        ShowCreatorDateDialog(playerid);
    }
    else if(playertextid == CharacterFirstCreator[playerid][34]) // Countrie
    {
        ShowCreatorCountrieDialog(playerid);
    }
    else if(playertextid == CharacterFirstCreator[playerid][37]) // Language
    {
        ShowCreatorLanguageDialog(playerid);
    }
    else if(playertextid == CharacterFirstCreator[playerid][41]) // First creator page save button.
    {
        if(!strcmp(AccountInfo[playerid][pCreatorName], "Belirtilmemis"))
        {
            ErrorMessage(playerid, "Karakter adýný doldurmadan devam edemezsin.");
        }
        else if(!AccountInfo[playerid][pCreatorGender])
        {
            ErrorMessage(playerid, "Karakter cinsiyetini belirlemeden devam edemezsiniz.");
        }
        else if(!strcmp(AccountInfo[playerid][pCreatorDate], "00/00/0000", true))
        {
            ErrorMessage(playerid, "Doðum tarihini doldurmadan devam edemezsiniz.");
        }
        else if(AccountInfo[playerid][pCreatorCountry] == 0)
        {
            ErrorMessage(playerid, "Karakterin doðum yerini seçmeden devam edemezsiniz.");
        }
        else if(AccountInfo[playerid][pCreatorLanguage] == 0)
        {
            ErrorMessage(playerid, "Karakter ek dilini seçmeden devam edemezsiniz.");
        }
        else
        {
            HideCharacterCreatorFirstPanel(playerid);
            ShowCreatorSubFirstPage(playerid);
        }
    }
    else if(playertextid == CharacterSubFirstCreator[playerid][36]) // Creator select skin button.
    {
        new List:skins = list_new();

        for(new i = 0; i < sizeof(Skins); i++)
        {
            AddModelMenuItem(skins, Skins[i][sID]);
        }

        HideCreatorSubFirstPage(playerid);
        ShowModelSelectionMenu(playerid, "Karakter Gorunusu", CREATOR_SELECT_SKIN, skins);
    }
    else if(playertextid == CharacterSubFirstCreator[playerid][43]) // Creator eye colour.
    {
        ShowCreatorEyeColour(playerid);
    }
    else if(playertextid == CharacterSubFirstCreator[playerid][38]) // Creator weight selection.
    {
        ShowCreatorWeight(playerid);
    }
    else if(playertextid == CharacterSubFirstCreator[playerid][40]) // Creator height selection.
    {
        ShowCreatorHeight(playerid);
    }
    else if(playertextid == CharacterSubFirstCreator[playerid][48]) // Creator sub first page back button.
    {
        HideCreatorSubFirstPage(playerid);
        ShowCharacterCreatorFirstPanel(playerid);
    }
    return 1;
}

public OnModelSelectionResponse(playerid, extraid, index, modelid, response)
{
    if(extraid == CREATOR_SELECT_SKIN)
    {
        if(response == MODEL_RESPONSE_SELECT)
        {
            AccountInfo[playerid][pCreatorSkin] = modelid;
            PlayerTextDrawSetString(playerid, CharacterSubFirstCreator[playerid][36], "SECILDI");

            ShowCreatorSubFirstPage(playerid);
            return 1;
        }
    }
    return 1;
}