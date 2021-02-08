#define MAX_FIRST_CHARACTER_CREATOR_TEXTDRAW (45)
new PlayerText:CharacterFirstCreator[MAX_PLAYERS][MAX_FIRST_CHARACTER_CREATOR_TEXTDRAW];

#define MAX_FIRST_CHARACTER_CREATOR_SUB_TEXTDRAW (49)
new PlayerText:CharacterSubFirstCreator[MAX_PLAYERS][MAX_FIRST_CHARACTER_CREATOR_SUB_TEXTDRAW];

#define MAX_SECOND_CHARACTER_CREATOR_SUB_TEXTDRAW (52)
new PlayerText:CharacterSubSecondCreator[MAX_PLAYERS][MAX_SECOND_CHARACTER_CREATOR_SUB_TEXTDRAW];

#define MAX_THIRD_CHARACTER_CREATOR_SUB_TEXTDRAW (42)
new PlayerText:CharacterSubThirdCreator[MAX_PLAYERS][MAX_THIRD_CHARACTER_CREATOR_SUB_TEXTDRAW];

stock CreateCreatorFirstPanel(playerid)
{
    CharacterFirstCreator[playerid][0] = CreatePlayerTextDraw(playerid, 344.152374, -1.916669, "mdl-4003:hud3");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][0], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][0], 287.000000, 452.000000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][0], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][0], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][0], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][0], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][0], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][0], 0);

    CharacterFirstCreator[playerid][1] = CreatePlayerTextDraw(playerid, 339.494659, -11.249996, "mdl-4004:aa1");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][1], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][1], 297.000000, 193.000000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][1], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][1], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][1], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][1], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][1], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][1], 0);

    CharacterFirstCreator[playerid][2] = CreatePlayerTextDraw(playerid, 355.892883, 43.583312, "mdl-4004:aa2");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][2], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][2], 260.000000, 88.000000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][2], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][2], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][2], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][2], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][2], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][2], 0);

    CharacterFirstCreator[playerid][3] = CreatePlayerTextDraw(playerid, 400.982604, 145.783447, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][3], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][3], 10.000000, 27.000000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][3], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][3], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][3], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][3], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][3], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][3], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][3], 0);

    CharacterFirstCreator[playerid][4] = CreatePlayerTextDraw(playerid, 544.201721, 146.366821, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][4], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][4], 10.000000, 27.000000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][4], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][4], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][4], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][4], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][4], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][4], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][4], 0);

    CharacterFirstCreator[playerid][5] = CreatePlayerTextDraw(playerid, 470.963958, 145.783477, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][5], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][5], 10.000000, 27.000000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][5], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][5], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][5], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][5], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][5], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][5], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][5], 0);

    CharacterFirstCreator[playerid][6] = CreatePlayerTextDraw(playerid, 473.688446, 150.116653, "mdl-4003:hud6");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][6], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][6], 47.000000, 19.000000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][6], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][6], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][6], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][6], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][6], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][6], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][6], 0);

    CharacterFirstCreator[playerid][7] = CreatePlayerTextDraw(playerid, 441.948913, 120.683303, "mdl-4004:aa4");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][7], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][7], 81.000000, 70.000000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][7], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][7], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][7], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][7], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][7], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][7], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][7], 0);

    CharacterFirstCreator[playerid][8] = CreatePlayerTextDraw(playerid, 546.772583, 150.666656, "mdl-4003:HUD6");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][8], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][8], 51.000000, 18.000000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][8], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][8], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][8], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][8], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][8], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][8], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][8], 0);

    CharacterFirstCreator[playerid][9] = CreatePlayerTextDraw(playerid, 515.358398, 120.683334, "mdl-4004:aa5");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][9], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][9], 81.000000, 70.000000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][9], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][9], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][9], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][9], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][9], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][9], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][9], 0);

    CharacterFirstCreator[playerid][10] = CreatePlayerTextDraw(playerid, 404.004760, 149.783264, "mdl-4003:HUD6");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][10], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][10], 7.000000, 19.000000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][10], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][10], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][10], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][10], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][10], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][10], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][10], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][10], 0);

    CharacterFirstCreator[playerid][11] = CreatePlayerTextDraw(playerid, 372.502502, 120.683341, "mdl-4004:aa3");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][11], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][11], 81.000000, 70.000000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][11], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][11], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][11], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][11], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][11], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][11], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][11], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][11], 0);

    CharacterFirstCreator[playerid][12] = CreatePlayerTextDraw(playerid, 413.279144, 184.283370, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][12], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][12], 13.000000, 13.000000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][12], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][12], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][12], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][12], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][12], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][12], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][12], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][12], 0);

    CharacterFirstCreator[playerid][13] = CreatePlayerTextDraw(playerid, 483.442199, 184.033050, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][13], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][13], 13.000000, 13.000000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][13], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][13], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][13], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][13], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][13], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][13], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][13], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][13], 0);

    CharacterFirstCreator[playerid][14] = CreatePlayerTextDraw(playerid, 558.249023, 183.949951, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][14], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][14], 13.000000, 13.000000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][14], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][14], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][14], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][14], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][14], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][14], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][14], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][14], 0);

    CharacterFirstCreator[playerid][15] = CreatePlayerTextDraw(playerid, 418.317840, 187.983383, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][15], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][15], 148.000000, 4.000000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][15], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][15], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][15], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][15], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][15], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][15], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][15], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][15], 0);

    CharacterFirstCreator[playerid][16] = CreatePlayerTextDraw(playerid, 415.021789, 186.499984, "mdl-4003:hud6");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][16], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][16], 9.000000, 9.000000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][16], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][16], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][16], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][16], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][16], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][16], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][16], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][16], 0);

    CharacterFirstCreator[playerid][17] = CreatePlayerTextDraw(playerid, 485.353698, 186.299957, "mdl-4003:hud6");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][17], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][17], 9.000000, 9.000000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][17], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][17], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][17], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][17], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][17], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][17], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][17], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][17], 0);

    CharacterFirstCreator[playerid][18] = CreatePlayerTextDraw(playerid, 560.285888, 186.183273, "mdl-4003:hud6");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][18], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][18], 9.000000, 9.000000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][18], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][18], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][18], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][18], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][18], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][18], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][18], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][18], 0);

    CharacterFirstCreator[playerid][19] = CreatePlayerTextDraw(playerid, 415.021789, 185.799942, "mdl-4004:aa8");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][19], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][19], 9.000000, 9.000000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][19], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][19], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][19], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][19], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][19], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][19], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][19], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][19], 0);

    CharacterFirstCreator[playerid][20] = CreatePlayerTextDraw(playerid, 386.269927, 209.616653, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][20], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][20], 210.249862, 4.010000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][20], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][20], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][20], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][20], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][20], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][20], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][20], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][20], 0);

    CharacterFirstCreator[playerid][21] = CreatePlayerTextDraw(playerid, 386.506927, 212.683395, "mdl-4003:hud6");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][21], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][21], 210.000000, 157.000000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][21], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][21], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][21], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][21], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][21], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][21], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][21], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][21], 0);

    CharacterFirstCreator[playerid][22] = CreatePlayerTextDraw(playerid, 395.964447, 214.500045, "mdl-4004:ab1");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][22], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][22], 60.000000, 30.000000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][22], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][22], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][22], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][22], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][22], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][22], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][22], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][22], 0);

    CharacterFirstCreator[playerid][23] = CreatePlayerTextDraw(playerid, 495.681030, 224.116668, "Belirtilmemis");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][23], 0.211654, 1.279165);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][23], 600.0, 10.0);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][23], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][23], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][23], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][23], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][23], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][23], 2);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][23], 1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][23], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterFirstCreator[playerid][23], true);

    CharacterFirstCreator[playerid][24] = CreatePlayerTextDraw(playerid, 384.204589, 209.816635, "mdl-4004:ab6");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][24], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][24], 215.000000, 40.000000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][24], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][24], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][24], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][24], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][24], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][24], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][24], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][24], 0);

    CharacterFirstCreator[playerid][25] = CreatePlayerTextDraw(playerid, 384.204589, 232.218002, "mdl-4004:ab6");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][25], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][25], 215.000000, 40.000000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][25], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][25], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][25], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][25], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][25], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][25], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][25], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][25], 0);

    CharacterFirstCreator[playerid][26] = CreatePlayerTextDraw(playerid, 383.682708, 236.601394, "mdl-4004:ab2");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][26], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][26], 60.000000, 30.000000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][26], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][26], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][26], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][26], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][26], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][26], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][26], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][26], 0);

    CharacterFirstCreator[playerid][27] = CreatePlayerTextDraw(playerid, 495.681030, 246.601333, "BELIRTILMEMIS");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][27], 0.211654, 1.279165);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][27], 560.0, 10.0);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][27], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][27], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][27], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][27], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][27], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][27], 2);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][27], 1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][27], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterFirstCreator[playerid][27], true);

    CharacterFirstCreator[playerid][28] = CreatePlayerTextDraw(playerid, 384.204589, 254.451446, "mdl-4004:ab6");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][28], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][28], 215.000000, 40.000000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][28], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][28], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][28], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][28], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][28], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][28], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][28], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][28], 0);

    CharacterFirstCreator[playerid][29] = CreatePlayerTextDraw(playerid, 495.881042, 268.119354, "00/00/0000");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][29], 0.211654, 1.279165);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][29], 560.0, 10.0);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][29], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][29], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][29], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][29], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][29], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][29], 2);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][29], 1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][29], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterFirstCreator[playerid][29], true);

    CharacterFirstCreator[playerid][30] = CreatePlayerTextDraw(playerid, 392.421844, 258.368011, "mdl-4004:ab3");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][30], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][30], 60.000000, 30.000000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][30], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][30], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][30], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][30], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][30], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][30], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][30], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][30], 0);

    CharacterFirstCreator[playerid][31] = CreatePlayerTextDraw(playerid, 402.122344, 327.466857, "mdl-4005:aba14");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][31], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][31], 70.000000, 40.000000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][31], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][31], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][31], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][31], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][31], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][31], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][31], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][31], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterFirstCreator[playerid][31], true);

    CharacterFirstCreator[playerid][32] = CreatePlayerTextDraw(playerid, 384.204559, 277.184967, "mdl-4004:ab6");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][32], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][32], 215.000000, 40.000000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][32], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][32], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][32], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][32], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][32], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][32], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][32], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][32], 0);

    CharacterFirstCreator[playerid][33] = CreatePlayerTextDraw(playerid, 390.447601, 282.134765, "mdl-4004:ab4");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][33], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][33], 60.000000, 30.000000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][33], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][33], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][33], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][33], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][33], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][33], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][33], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][33], 0);

    CharacterFirstCreator[playerid][34] = CreatePlayerTextDraw(playerid, 495.881042, 291.020751, "BELIRTILMEMIS");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][34], 0.211654, 1.279165);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][34], 560.0, 10.0);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][34], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][34], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][34], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][34], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][34], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][34], 2);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][34], 1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][34], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterFirstCreator[playerid][34], true);

    CharacterFirstCreator[playerid][35] = CreatePlayerTextDraw(playerid, 384.273101, 299.935089, "mdl-4004:ab6");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][35], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][35], 215.000000, 40.000000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][35], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][35], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][35], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][35], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][35], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][35], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][35], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][35], 0);

    CharacterFirstCreator[playerid][36] = CreatePlayerTextDraw(playerid, 393.458862, 304.118164, "mdl-4004:ab5");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][36], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][36], 60.000000, 30.000000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][36], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][36], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][36], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][36], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][36], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][36], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][36], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][36], 0);

    CharacterFirstCreator[playerid][37] = CreatePlayerTextDraw(playerid, 495.412506, 314.022155, "BELIRTILMEMIS");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][37], 0.211654, 1.279165);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][37], 1);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][37], 560.0, 10.0);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][37], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][37], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][37], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][37], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][37], 2);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][37], 1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][37], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterFirstCreator[playerid][37], true);

    CharacterFirstCreator[playerid][38] = CreatePlayerTextDraw(playerid, 476.303466, 310.750091, "mdl-4004:ab7");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][38], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][38], 20.000000, 19.000000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][38], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][38], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][38], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][38], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][38], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][38], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][38], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][38], 0);

    CharacterFirstCreator[playerid][39] = CreatePlayerTextDraw(playerid, 476.303466, 288.732055, "mdl-4004:ab7");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][39], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][39], 20.000000, 19.000000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][39], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][39], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][39], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][39], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][39], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][39], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][39], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][39], 0);

    CharacterFirstCreator[playerid][40] = CreatePlayerTextDraw(playerid, 449.545288, 319.500061, "mdl-4004:ab9");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][40], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][40], 84.000000, 55.000000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][40], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][40], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][40], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][40], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][40], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][40], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][40], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][40], 0);

    CharacterFirstCreator[playerid][41] = CreatePlayerTextDraw(playerid, 456.625671, 327.466857, "mdl-4004:ab10");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][41], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][41], 70.000000, 40.000000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][41], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][41], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][41], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][41], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][41], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][41], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][41], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][41], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterFirstCreator[playerid][41], true);

    CharacterFirstCreator[playerid][42] = CreatePlayerTextDraw(playerid, 385.832885, 367.866790, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][42], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][42], 210.639099, 3.000000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][42], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][42], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][42], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][42], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][42], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][42], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][42], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][42], 0);

    CharacterFirstCreator[playerid][43] = CreatePlayerTextDraw(playerid, 422.207885, 320.883453, "mdl-4005:aba12");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][43], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][43], 50.000000, 56.000000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][43], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][43], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][43], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][43], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][43], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][43], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][43], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][43], 0);

    CharacterFirstCreator[playerid][44] = CreatePlayerTextDraw(playerid, 399.006469, 320.883453, "mdl-4005:aba13");
    PlayerTextDrawLetterSize(playerid, CharacterFirstCreator[playerid][44], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][44], 50.000000, 56.000000);
    PlayerTextDrawAlignment(playerid, CharacterFirstCreator[playerid][44], 1);
    PlayerTextDrawColor(playerid, CharacterFirstCreator[playerid][44], -1);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][44], 0);
    PlayerTextDrawSetOutline(playerid, CharacterFirstCreator[playerid][44], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterFirstCreator[playerid][44], 255);
    PlayerTextDrawFont(playerid, CharacterFirstCreator[playerid][44], 4);
    PlayerTextDrawSetProportional(playerid, CharacterFirstCreator[playerid][44], 0);
    PlayerTextDrawSetShadow(playerid, CharacterFirstCreator[playerid][44], 0);
}

stock CreateCreatorSubFirstPage(playerid)
{
    CharacterSubFirstCreator[playerid][0] = CreatePlayerTextDraw(playerid, 344.152374, -1.916669, "mdl-4003:hud3");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][0], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][0], 287.000000, 452.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][0], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][0], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][0], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][0], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][0], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][0], 0);

    CharacterSubFirstCreator[playerid][1] = CreatePlayerTextDraw(playerid, 339.494659, -11.249996, "mdl-4004:aa1");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][1], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][1], 297.000000, 193.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][1], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][1], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][1], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][1], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][1], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][1], 0);

    CharacterSubFirstCreator[playerid][2] = CreatePlayerTextDraw(playerid, 355.892883, 43.583312, "mdl-4004:aa2");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][2], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][2], 260.000000, 88.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][2], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][2], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][2], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][2], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][2], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][2], 0);

    CharacterSubFirstCreator[playerid][3] = CreatePlayerTextDraw(playerid, 400.982604, 145.783447, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][3], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][3], 10.000000, 27.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][3], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][3], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][3], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][3], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][3], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][3], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][3], 0);

    CharacterSubFirstCreator[playerid][4] = CreatePlayerTextDraw(playerid, 544.201721, 146.366821, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][4], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][4], 10.000000, 27.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][4], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][4], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][4], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][4], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][4], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][4], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][4], 0);

    CharacterSubFirstCreator[playerid][5] = CreatePlayerTextDraw(playerid, 470.963958, 145.783477, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][5], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][5], 10.000000, 27.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][5], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][5], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][5], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][5], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][5], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][5], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][5], 0);

    CharacterSubFirstCreator[playerid][6] = CreatePlayerTextDraw(playerid, 473.688446, 150.116653, "mdl-4003:hud6");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][6], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][6], 47.000000, 19.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][6], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][6], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][6], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][6], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][6], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][6], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][6], 0);

    CharacterSubFirstCreator[playerid][7] = CreatePlayerTextDraw(playerid, 441.948913, 120.683303, "mdl-4005:aa4");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][7], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][7], 81.000000, 70.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][7], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][7], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][7], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][7], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][7], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][7], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][7], 0);

    CharacterSubFirstCreator[playerid][8] = CreatePlayerTextDraw(playerid, 546.772583, 150.666656, "mdl-4003:HUD6");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][8], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][8], 51.000000, 18.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][8], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][8], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][8], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][8], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][8], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][8], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][8], 0);

    CharacterSubFirstCreator[playerid][9] = CreatePlayerTextDraw(playerid, 515.358398, 120.683334, "mdl-4004:aa5");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][9], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][9], 81.000000, 70.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][9], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][9], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][9], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][9], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][9], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][9], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][9], 0);

    CharacterSubFirstCreator[playerid][10] = CreatePlayerTextDraw(playerid, 404.004760, 149.783264, "mdl-4003:HUD6");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][10], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][10], 43.000000, 18.230005);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][10], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][10], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][10], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][10], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][10], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][10], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][10], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][10], 0);

    CharacterSubFirstCreator[playerid][11] = CreatePlayerTextDraw(playerid, 372.502502, 120.683341, "mdl-4005:aa3");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][11], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][11], 81.000000, 70.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][11], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][11], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][11], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][11], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][11], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][11], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][11], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][11], 0);

    CharacterSubFirstCreator[playerid][12] = CreatePlayerTextDraw(playerid, 413.279144, 184.283370, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][12], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][12], 13.000000, 13.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][12], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][12], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][12], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][12], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][12], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][12], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][12], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][12], 0);

    CharacterSubFirstCreator[playerid][13] = CreatePlayerTextDraw(playerid, 483.442199, 184.033050, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][13], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][13], 13.000000, 13.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][13], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][13], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][13], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][13], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][13], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][13], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][13], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][13], 0);

    CharacterSubFirstCreator[playerid][14] = CreatePlayerTextDraw(playerid, 558.249023, 183.949951, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][14], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][14], 13.000000, 13.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][14], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][14], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][14], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][14], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][14], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][14], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][14], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][14], 0);

    CharacterSubFirstCreator[playerid][15] = CreatePlayerTextDraw(playerid, 418.317840, 187.983383, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][15], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][15], 148.000000, 4.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][15], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][15], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][15], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][15], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][15], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][15], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][15], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][15], 0);

    CharacterSubFirstCreator[playerid][16] = CreatePlayerTextDraw(playerid, 415.290313, 186.216674, "mdl-4003:hud6");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][16], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][16], 9.000000, 9.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][16], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][16], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][16], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][16], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][16], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][16], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][16], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][16], 0);

    CharacterSubFirstCreator[playerid][17] = CreatePlayerTextDraw(playerid, 485.300140, 186.216674, "mdl-4004:aa8");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][17], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][17], 9.000000, 9.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][17], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][17], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][17], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][17], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][17], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][17], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][17], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][17], 0);

    CharacterSubFirstCreator[playerid][18] = CreatePlayerTextDraw(playerid, 560.300781, 186.516677, "mdl-4003:hud6");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][18], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][18], 9.000000, 8.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][18], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][18], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][18], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][18], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][18], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][18], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][18], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][18], 0);

    CharacterSubFirstCreator[playerid][19] = CreatePlayerTextDraw(playerid, 386.069915, 210.416702, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][19], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][19], 210.249862, 4.010000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][19], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][19], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][19], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][19], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][19], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][19], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][19], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][19], 0);

    CharacterSubFirstCreator[playerid][20] = CreatePlayerTextDraw(playerid, 386.506927, 213.266723, "mdl-4003:hud6");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][20], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][20], 210.000000, 189.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][20], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][20], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][20], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][20], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][20], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][20], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][20], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][20], 0);

    CharacterSubFirstCreator[playerid][21] = CreatePlayerTextDraw(playerid, 453.508728, 359.850219, "mdl-4004:ab10");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][21], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][21], 80.000000, 45.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][21], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][21], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][21], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][21], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][21], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][21], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][21], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][21], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterSubFirstCreator[playerid][21], true);

    CharacterSubFirstCreator[playerid][22] = CreatePlayerTextDraw(playerid, 386.332916, 401.735473, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][22], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][22], 210.639099, 3.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][22], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][22], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][22], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][22], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][22], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][22], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][22], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][22], 0);

    CharacterSubFirstCreator[playerid][23] = CreatePlayerTextDraw(playerid, 428.188262, 225.583374, "mdl-4005:kutu");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][23], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][23], 38.000000, 39.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][23], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][23], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][23], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][23], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][23], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][23], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][23], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][23], 0);

    CharacterSubFirstCreator[playerid][24] = CreatePlayerTextDraw(playerid, 470.987091, 225.583374, "mdl-4005:kutu");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][24], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][24], 38.000000, 39.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][24], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][24], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][24], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][24], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][24], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][24], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][24], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][24], 0);

    CharacterSubFirstCreator[playerid][25] = CreatePlayerTextDraw(playerid, 513.829956, 225.583404, "mdl-4005:kutu");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][25], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][25], 38.000000, 39.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][25], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][25], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][25], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][25], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][25], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][25], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][25], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][25], 0);

    CharacterSubFirstCreator[playerid][26] = CreatePlayerTextDraw(playerid, 423.322845, 218.700180, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][26], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][26], 133.000000, 2.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][26], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][26], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][26], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][26], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][26], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][26], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][26], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][26], 0);

    CharacterSubFirstCreator[playerid][27] = CreatePlayerTextDraw(playerid, 423.322906, 218.700210, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][27], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][27], 2.000000, 20.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][27], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][27], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][27], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][27], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][27], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][27], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][27], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][27], 0);

    CharacterSubFirstCreator[playerid][28] = CreatePlayerTextDraw(playerid, 554.509033, 218.800231, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][28], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][28], 2.000000, 21.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][28], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][28], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][28], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][28], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][28], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][28], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][28], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][28], 0);

    CharacterSubFirstCreator[playerid][29] = CreatePlayerTextDraw(playerid, 429.851074, 236.016693, "FIZIKSEL~n~OZELLIKLER");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][29], 0.196658, 0.940832);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][29], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][29], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][29], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][29], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][29], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][29], 1);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][29], 1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][29], 0);

    CharacterSubFirstCreator[playerid][30] = CreatePlayerTextDraw(playerid, 472.227783, 236.600021, "RUHSAL~n~OZELLIKLER");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][30], 0.196658, 0.940832);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][30], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][30], -2139062017);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][30], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][30], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][30], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][30], 1);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][30], 1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][30], 0);

    CharacterSubFirstCreator[playerid][31] = CreatePlayerTextDraw(playerid, 514.994689, 236.600021, "DIGER~n~OZELLIKLER");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][31], 0.196658, 0.940832);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][31], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][31], -2139062017);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][31], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][31], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][31], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][31], 1);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][31], 1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][31], 0);

    CharacterSubFirstCreator[playerid][32] = CreatePlayerTextDraw(playerid, 385.073333, 264.083465, "mdl-4004:ab6");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][32], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][32], 215.000000, 40.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][32], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][32], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][32], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][32], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][32], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][32], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][32], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][32], 0);

    CharacterSubFirstCreator[playerid][33] = CreatePlayerTextDraw(playerid, 385.073333, 287.684906, "mdl-4004:ab6");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][33], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][33], 215.000000, 40.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][33], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][33], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][33], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][33], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][33], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][33], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][33], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][33], 0);

    CharacterSubFirstCreator[playerid][34] = CreatePlayerTextDraw(playerid, 385.073333, 310.986328, "mdl-4004:ab6");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][34], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][34], 215.000000, 40.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][34], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][34], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][34], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][34], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][34], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][34], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][34], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][34], 0);

    CharacterSubFirstCreator[playerid][35] = CreatePlayerTextDraw(playerid, 385.878936, 268.549865, "mdl-4005:ab7");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][35], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][35], 60.000000, 30.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][35], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][35], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][35], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][35], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][35], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][35], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][35], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][35], 0);

    CharacterSubFirstCreator[playerid][36] = CreatePlayerTextDraw(playerid, 499.178436, 280.416687, "SEC");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][36], 0.262721, 1.109997);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][36], 560.0, 10.0);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][36], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][36], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][36], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][36], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][36], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][36], 2);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][36], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][36], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterSubFirstCreator[playerid][36], true);

    CharacterSubFirstCreator[playerid][37] = CreatePlayerTextDraw(playerid, 374.703063, 292.117218, "mdl-4005:ab8");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][37], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][37], 60.000000, 30.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][37], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][37], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][37], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][37], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][37], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][37], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][37], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][37], 0);

    CharacterSubFirstCreator[playerid][38] = CreatePlayerTextDraw(playerid, 499.278442, 302.518035, "0_KG");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][38], 0.262721, 1.109997);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][38], 560.0, 10.0);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][38], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][38], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][38], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][38], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][38], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][38], 2);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][38], 1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][38], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterSubFirstCreator[playerid][38], true);

    CharacterSubFirstCreator[playerid][39] = CreatePlayerTextDraw(playerid, 374.060394, 315.550567, "mdl-4005:AB9");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][39], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][39], 60.000000, 30.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][39], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][39], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][39], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][39], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][39], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][39], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][39], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][39], 0);

    CharacterSubFirstCreator[playerid][40] = CreatePlayerTextDraw(playerid, 499.878479, 326.419494, "0_CM");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][40], 0.262721, 1.109997);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][40], 1);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][40], 560.0, 10.0);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][40], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][40], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][40], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][40], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][40], 2);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][40], 1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][40], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterSubFirstCreator[playerid][40], true);

    CharacterSubFirstCreator[playerid][41] = CreatePlayerTextDraw(playerid, 385.073333, 333.787719, "mdl-4004:ab6");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][41], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][41], 215.000000, 40.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][41], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][41], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][41], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][41], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][41], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][41], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][41], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][41], 0);

    CharacterSubFirstCreator[playerid][42] = CreatePlayerTextDraw(playerid, 385.304840, 338.183837, "mdl-4005:AB10");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][42], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][42], 60.000000, 30.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][42], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][42], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][42], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][42], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][42], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][42], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][42], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][42], 0);

    CharacterSubFirstCreator[playerid][43] = CreatePlayerTextDraw(playerid, 498.878356, 348.702850, "BELIRTILMEMIS");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][43], 0.262721, 1.109997);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][43], 1);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][43], 600.0, 10.0);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][43], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][43], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][43], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][43], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][43], 2);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][43], 1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][43], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterSubFirstCreator[playerid][43], true);

    CharacterSubFirstCreator[playerid][44] = CreatePlayerTextDraw(playerid, 451.150665, 355.100372, "mdl-4004:ab9");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][44], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][44], 84.000000, 55.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][44], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][44], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][44], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][44], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][44], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][44], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][44], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][44], 0);

    CharacterSubFirstCreator[playerid][45] = CreatePlayerTextDraw(playerid, 423.123931, 268.433105, "mdl-4005:ab77");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][45], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][45], 60.000000, 30.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][45], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][45], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][45], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][45], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][45], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][45], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][45], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][45], 0);

    CharacterSubFirstCreator[playerid][46] = CreatePlayerTextDraw(playerid, 423.477172, 356.450073, "mdl-4005:aba12");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][46], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][46], 50.000000, 56.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][46], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][46], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][46], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][46], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][46], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][46], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][46], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][46], 0);

    CharacterSubFirstCreator[playerid][47] = CreatePlayerTextDraw(playerid, 398.275634, 356.450073, "mdl-4005:aba13");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][47], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][47], 50.000000, 56.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][47], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][47], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][47], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][47], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][47], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][47], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][47], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][47], 0);

    CharacterSubFirstCreator[playerid][48] = CreatePlayerTextDraw(playerid, 397.605316, 359.850219, "mdl-4005:aba14");
    PlayerTextDrawLetterSize(playerid, CharacterSubFirstCreator[playerid][48], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubFirstCreator[playerid][48], 80.000000, 45.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubFirstCreator[playerid][48], 1);
    PlayerTextDrawColor(playerid, CharacterSubFirstCreator[playerid][48], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][48], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubFirstCreator[playerid][48], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubFirstCreator[playerid][48], 255);
    PlayerTextDrawFont(playerid, CharacterSubFirstCreator[playerid][48], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubFirstCreator[playerid][48], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubFirstCreator[playerid][48], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterSubFirstCreator[playerid][48], true);
}

stock CreateCreatorSubSecondPage(playerid)
{
    CharacterSubSecondCreator[playerid][0] = CreatePlayerTextDraw(playerid, 344.152374, -1.916669, "mdl-4003:hud3");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][0], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][0], 287.000000, 452.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][0], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][0], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][0], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][0], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][0], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][0], 0);

    CharacterSubSecondCreator[playerid][1] = CreatePlayerTextDraw(playerid, 339.494659, -11.249996, "mdl-4004:aa1");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][1], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][1], 297.000000, 193.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][1], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][1], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][1], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][1], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][1], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][1], 0);

    CharacterSubSecondCreator[playerid][2] = CreatePlayerTextDraw(playerid, 355.892883, 43.583312, "mdl-4004:aa2");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][2], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][2], 260.000000, 88.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][2], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][2], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][2], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][2], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][2], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][2], 0);

    CharacterSubSecondCreator[playerid][3] = CreatePlayerTextDraw(playerid, 400.982604, 145.783447, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][3], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][3], 10.000000, 27.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][3], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][3], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][3], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][3], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][3], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][3], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][3], 0);

    CharacterSubSecondCreator[playerid][4] = CreatePlayerTextDraw(playerid, 544.201721, 146.366821, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][4], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][4], 10.000000, 27.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][4], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][4], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][4], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][4], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][4], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][4], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][4], 0);

    CharacterSubSecondCreator[playerid][5] = CreatePlayerTextDraw(playerid, 470.963958, 145.783477, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][5], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][5], 10.000000, 27.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][5], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][5], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][5], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][5], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][5], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][5], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][5], 0);

    CharacterSubSecondCreator[playerid][6] = CreatePlayerTextDraw(playerid, 473.688446, 150.116653, "mdl-4003:hud6");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][6], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][6], 47.000000, 19.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][6], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][6], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][6], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][6], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][6], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][6], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][6], 0);

    CharacterSubSecondCreator[playerid][7] = CreatePlayerTextDraw(playerid, 441.948913, 120.683303, "mdl-4005:aa4");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][7], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][7], 81.000000, 70.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][7], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][7], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][7], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][7], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][7], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][7], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][7], 0);

    CharacterSubSecondCreator[playerid][8] = CreatePlayerTextDraw(playerid, 546.772583, 150.666656, "mdl-4003:HUD6");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][8], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][8], 51.000000, 18.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][8], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][8], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][8], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][8], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][8], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][8], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][8], 0);

    CharacterSubSecondCreator[playerid][9] = CreatePlayerTextDraw(playerid, 515.358398, 120.683334, "mdl-4004:aa5");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][9], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][9], 81.000000, 70.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][9], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][9], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][9], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][9], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][9], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][9], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][9], 0);

    CharacterSubSecondCreator[playerid][10] = CreatePlayerTextDraw(playerid, 404.004760, 149.783264, "mdl-4003:HUD6");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][10], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][10], 43.000000, 18.230005);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][10], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][10], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][10], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][10], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][10], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][10], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][10], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][10], 0);

    CharacterSubSecondCreator[playerid][11] = CreatePlayerTextDraw(playerid, 372.502502, 120.683341, "mdl-4005:aa3");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][11], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][11], 81.000000, 70.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][11], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][11], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][11], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][11], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][11], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][11], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][11], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][11], 0);

    CharacterSubSecondCreator[playerid][12] = CreatePlayerTextDraw(playerid, 413.279144, 184.283370, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][12], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][12], 13.000000, 13.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][12], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][12], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][12], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][12], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][12], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][12], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][12], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][12], 0);

    CharacterSubSecondCreator[playerid][13] = CreatePlayerTextDraw(playerid, 483.442199, 184.033050, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][13], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][13], 13.000000, 13.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][13], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][13], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][13], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][13], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][13], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][13], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][13], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][13], 0);

    CharacterSubSecondCreator[playerid][14] = CreatePlayerTextDraw(playerid, 558.249023, 183.949951, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][14], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][14], 13.000000, 13.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][14], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][14], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][14], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][14], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][14], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][14], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][14], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][14], 0);

    CharacterSubSecondCreator[playerid][15] = CreatePlayerTextDraw(playerid, 418.317840, 187.983383, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][15], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][15], 148.000000, 4.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][15], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][15], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][15], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][15], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][15], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][15], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][15], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][15], 0);

    CharacterSubSecondCreator[playerid][16] = CreatePlayerTextDraw(playerid, 415.290313, 186.216674, "mdl-4003:hud6");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][16], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][16], 9.000000, 9.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][16], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][16], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][16], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][16], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][16], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][16], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][16], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][16], 0);

    CharacterSubSecondCreator[playerid][17] = CreatePlayerTextDraw(playerid, 485.300140, 186.216674, "mdl-4004:aa8");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][17], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][17], 9.000000, 9.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][17], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][17], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][17], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][17], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][17], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][17], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][17], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][17], 0);

    CharacterSubSecondCreator[playerid][18] = CreatePlayerTextDraw(playerid, 560.300781, 186.516677, "mdl-4003:hud6");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][18], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][18], 9.000000, 8.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][18], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][18], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][18], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][18], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][18], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][18], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][18], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][18], 0);

    CharacterSubSecondCreator[playerid][19] = CreatePlayerTextDraw(playerid, 386.469940, 210.416702, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][19], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][19], 209.960021, 4.010000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][19], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][19], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][19], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][19], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][19], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][19], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][19], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][19], 0);

    CharacterSubSecondCreator[playerid][20] = CreatePlayerTextDraw(playerid, 386.506927, 213.266723, "mdl-4003:hud6");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][20], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][20], 210.000000, 189.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][20], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][20], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][20], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][20], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][20], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][20], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][20], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][20], 0);

    CharacterSubSecondCreator[playerid][21] = CreatePlayerTextDraw(playerid, 452.571716, 359.850219, "mdl-4004:ab10");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][21], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][21], 80.000000, 45.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][21], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][21], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][21], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][21], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][21], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][21], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][21], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][21], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterSubSecondCreator[playerid][21], true);

    CharacterSubSecondCreator[playerid][22] = CreatePlayerTextDraw(playerid, 422.613952, 356.533325, "mdl-4005:aba12");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][22], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][22], 50.000000, 56.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][22], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][22], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][22], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][22], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][22], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][22], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][22], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][22], 0);

    CharacterSubSecondCreator[playerid][23] = CreatePlayerTextDraw(playerid, 386.332916, 401.735473, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][23], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][23], 210.639099, 3.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][23], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][23], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][23], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][23], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][23], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][23], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][23], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][23], 0);

    CharacterSubSecondCreator[playerid][24] = CreatePlayerTextDraw(playerid, 428.188262, 225.583374, "mdl-4005:kutu");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][24], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][24], 38.000000, 39.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][24], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][24], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][24], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][24], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][24], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][24], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][24], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][24], 0);

    CharacterSubSecondCreator[playerid][25] = CreatePlayerTextDraw(playerid, 470.987091, 225.583374, "mdl-4005:kutu");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][25], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][25], 38.000000, 39.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][25], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][25], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][25], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][25], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][25], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][25], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][25], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][25], 0);

    CharacterSubSecondCreator[playerid][26] = CreatePlayerTextDraw(playerid, 513.829956, 225.583404, "mdl-4005:kutu");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][26], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][26], 38.000000, 39.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][26], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][26], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][26], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][26], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][26], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][26], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][26], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][26], 0);

    CharacterSubSecondCreator[playerid][27] = CreatePlayerTextDraw(playerid, 423.322845, 218.700180, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][27], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][27], 133.000000, 2.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][27], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][27], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][27], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][27], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][27], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][27], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][27], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][27], 0);

    CharacterSubSecondCreator[playerid][28] = CreatePlayerTextDraw(playerid, 423.322906, 218.700210, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][28], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][28], 2.000000, 20.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][28], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][28], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][28], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][28], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][28], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][28], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][28], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][28], 0);

    CharacterSubSecondCreator[playerid][29] = CreatePlayerTextDraw(playerid, 554.509033, 218.800231, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][29], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][29], 2.000000, 21.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][29], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][29], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][29], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][29], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][29], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][29], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][29], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][29], 0);

    CharacterSubSecondCreator[playerid][30] = CreatePlayerTextDraw(playerid, 429.851074, 236.016693, "FIZIKSEL~n~OZELLIKLER");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][30], 0.196658, 0.940832);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][30], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][30], -2139062017);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][30], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][30], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][30], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][30], 1);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][30], 1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][30], 0);

    CharacterSubSecondCreator[playerid][31] = CreatePlayerTextDraw(playerid, 472.227783, 236.600021, "RUHSAL~n~OZELLIKLER");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][31], 0.196658, 0.940832);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][31], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][31], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][31], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][31], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][31], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][31], 1);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][31], 1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][31], 0);

    CharacterSubSecondCreator[playerid][32] = CreatePlayerTextDraw(playerid, 514.994689, 236.600021, "DIGER~n~OZELLIKLER");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][32], 0.196658, 0.940832);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][32], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][32], -2139062017);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][32], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][32], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][32], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][32], 1);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][32], 1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][32], 0);

    CharacterSubSecondCreator[playerid][33] = CreatePlayerTextDraw(playerid, 450.682312, 355.200408, "mdl-4004:ab9");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][33], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][33], 84.000000, 55.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][33], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][33], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][33], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][33], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][33], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][33], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][33], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][33], 0);

    CharacterSubSecondCreator[playerid][34] = CreatePlayerTextDraw(playerid, 400.554748, 274.800201, "mdl-4003:hud6");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][34], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][34], 41.000000, 42.880020);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][34], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][34], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][34], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][34], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][34], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][34], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][34], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][34], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterSubSecondCreator[playerid][34], true);

    CharacterSubSecondCreator[playerid][35] = CreatePlayerTextDraw(playerid, 400.791778, 323.516937, "mdl-4003:hud6");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][35], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][35], 41.000000, 42.880020);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][35], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][35], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][35], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][35], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][35], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][35], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][35], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][35], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterSubSecondCreator[playerid][35], true);

    CharacterSubSecondCreator[playerid][36] = CreatePlayerTextDraw(playerid, 446.575500, 323.416839, "mdl-4003:hud6");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][36], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][36], 41.000000, 42.880020);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][36], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][36], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][36], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][36], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][36], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][36], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][36], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][36], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterSubSecondCreator[playerid][36], true);

    CharacterSubSecondCreator[playerid][37] = CreatePlayerTextDraw(playerid, 491.690795, 323.500091, "mdl-4003:hud6");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][37], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][37], 41.000000, 42.880020);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][37], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][37], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][37], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][37], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][37], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][37], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][37], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][37], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterSubSecondCreator[playerid][37], true);

    CharacterSubSecondCreator[playerid][38] = CreatePlayerTextDraw(playerid, 537.074584, 323.400054, "mdl-4003:hud6");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][38], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][38], 41.000000, 42.880020);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][38], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][38], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][38], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][38], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][38], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][38], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][38], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][38], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterSubSecondCreator[playerid][38], true);

    CharacterSubSecondCreator[playerid][39] = CreatePlayerTextDraw(playerid, 446.649810, 275.166595, "mdl-4003:hud6");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][39], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][39], 41.000000, 42.880020);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][39], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][39], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][39], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][39], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][39], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][39], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][39], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][39], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterSubSecondCreator[playerid][39], true);

    CharacterSubSecondCreator[playerid][40] = CreatePlayerTextDraw(playerid, 491.790954, 274.783264, "mdl-4003:hud6");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][40], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][40], 41.000000, 42.880020);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][40], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][40], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][40], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][40], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][40], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][40], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][40], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][40], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterSubSecondCreator[playerid][40], true);

    CharacterSubSecondCreator[playerid][41] = CreatePlayerTextDraw(playerid, 537.237670, 274.783233, "mdl-4004:hud6");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][41], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][41], 41.000000, 42.880020);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][41], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][41], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][41], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][41], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][41], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][41], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][41], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][41], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterSubSecondCreator[playerid][41], true);

    CharacterSubSecondCreator[playerid][42] = CreatePlayerTextDraw(playerid, 397.824798, 272.833496, "mdl-4005:1bencil");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][42], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][42], 47.000000, 47.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][42], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][42], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][42], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][42], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][42], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][42], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][42], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][42], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterSubSecondCreator[playerid][42], true);

    CharacterSubSecondCreator[playerid][43] = CreatePlayerTextDraw(playerid, 443.449737, 272.833496, "mdl-4005:2tartismaci");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][43], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][43], 47.000000, 47.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][43], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][43], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][43], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][43], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][43], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][43], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][43], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][43], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterSubSecondCreator[playerid][43], true);

    CharacterSubSecondCreator[playerid][44] = CreatePlayerTextDraw(playerid, 488.763671, 272.833496, "mdl-4005:3baskin");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][44], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][44], 47.000000, 47.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][44], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][44], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][44], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][44], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][44], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][44], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][44], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][44], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterSubSecondCreator[playerid][44], true);

    CharacterSubSecondCreator[playerid][45] = CreatePlayerTextDraw(playerid, 534.194030, 272.833496, "mdl-4005:4kuskucu");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][45], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][45], 47.000000, 47.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][45], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][45], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][45], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][45], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][45], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][45], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][45], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][45], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterSubSecondCreator[playerid][45], true);

    CharacterSubSecondCreator[playerid][46] = CreatePlayerTextDraw(playerid, 397.824798, 321.336456, "mdl-4005:5akcanlisi");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][46], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][46], 47.000000, 47.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][46], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][46], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][46], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][46], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][46], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][46], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][46], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][46], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterSubSecondCreator[playerid][46], true);

    CharacterSubSecondCreator[playerid][47] = CreatePlayerTextDraw(playerid, 443.449737, 321.336456, "mdl-4005:6ofkeli");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][47], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][47], 47.000000, 47.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][47], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][47], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][47], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][47], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][47], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][47], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][47], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][47], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterSubSecondCreator[playerid][47], true);

    CharacterSubSecondCreator[playerid][48] = CreatePlayerTextDraw(playerid, 488.763671, 321.336456, "mdl-4005:7utan");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][48], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][48], 47.000000, 47.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][48], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][48], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][48], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][48], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][48], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][48], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][48], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][48], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterSubSecondCreator[playerid][48], true);

    CharacterSubSecondCreator[playerid][49] = CreatePlayerTextDraw(playerid, 534.194030, 321.336456, "mdl-4005:8yansit");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][49], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][49], 47.000000, 47.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][49], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][49], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][49], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][49], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][49], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][49], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][49], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][49], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterSubSecondCreator[playerid][49], true);

    CharacterSubSecondCreator[playerid][50] = CreatePlayerTextDraw(playerid, 399.181030, 357.116668, "mdl-4005:aba13");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][50], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][50], 50.000000, 56.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][50], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][50], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][50], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][50], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][50], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][50], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][50], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][50], 0);

    CharacterSubSecondCreator[playerid][51] = CreatePlayerTextDraw(playerid, 397.068328, 359.850219, "mdl-4005:aba14");
    PlayerTextDrawLetterSize(playerid, CharacterSubSecondCreator[playerid][51], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubSecondCreator[playerid][51], 80.000000, 45.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubSecondCreator[playerid][51], 1);
    PlayerTextDrawColor(playerid, CharacterSubSecondCreator[playerid][51], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][51], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubSecondCreator[playerid][51], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubSecondCreator[playerid][51], 255);
    PlayerTextDrawFont(playerid, CharacterSubSecondCreator[playerid][51], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubSecondCreator[playerid][51], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubSecondCreator[playerid][51], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterSubSecondCreator[playerid][51], true);
}

stock CreateCreatorSubThirdPage(playerid)
{
    CharacterSubThirdCreator[playerid][0] = CreatePlayerTextDraw(playerid, 344.152374, -1.916669, "mdl-4003:hud3");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][0], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubThirdCreator[playerid][0], 287.000000, 452.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][0], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][0], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][0], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][0], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][0], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][0], 0);

    CharacterSubThirdCreator[playerid][1] = CreatePlayerTextDraw(playerid, 339.494659, -11.249996, "mdl-4004:aa1");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][1], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubThirdCreator[playerid][1], 297.000000, 193.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][1], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][1], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][1], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][1], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][1], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][1], 0);

    CharacterSubThirdCreator[playerid][2] = CreatePlayerTextDraw(playerid, 355.892883, 43.583312, "mdl-4004:aa2");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][2], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubThirdCreator[playerid][2], 260.000000, 88.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][2], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][2], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][2], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][2], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][2], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][2], 0);

    CharacterSubThirdCreator[playerid][3] = CreatePlayerTextDraw(playerid, 400.982604, 145.783447, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][3], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubThirdCreator[playerid][3], 10.000000, 27.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][3], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][3], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][3], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][3], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][3], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][3], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][3], 0);

    CharacterSubThirdCreator[playerid][4] = CreatePlayerTextDraw(playerid, 544.201721, 146.366821, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][4], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubThirdCreator[playerid][4], 10.000000, 27.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][4], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][4], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][4], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][4], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][4], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][4], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][4], 0);

    CharacterSubThirdCreator[playerid][5] = CreatePlayerTextDraw(playerid, 470.963958, 145.783477, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][5], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubThirdCreator[playerid][5], 10.000000, 27.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][5], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][5], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][5], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][5], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][5], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][5], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][5], 0);

    CharacterSubThirdCreator[playerid][6] = CreatePlayerTextDraw(playerid, 473.688446, 150.116653, "mdl-4003:hud6");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][6], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubThirdCreator[playerid][6], 47.000000, 19.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][6], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][6], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][6], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][6], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][6], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][6], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][6], 0);

    CharacterSubThirdCreator[playerid][7] = CreatePlayerTextDraw(playerid, 441.948913, 120.683303, "mdl-4005:aa4");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][7], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubThirdCreator[playerid][7], 81.000000, 70.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][7], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][7], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][7], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][7], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][7], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][7], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][7], 0);

    CharacterSubThirdCreator[playerid][8] = CreatePlayerTextDraw(playerid, 546.772583, 150.666656, "mdl-4003:HUD6");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][8], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubThirdCreator[playerid][8], 51.000000, 18.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][8], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][8], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][8], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][8], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][8], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][8], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][8], 0);

    CharacterSubThirdCreator[playerid][9] = CreatePlayerTextDraw(playerid, 515.358398, 120.683334, "mdl-4004:aa5");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][9], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubThirdCreator[playerid][9], 81.000000, 70.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][9], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][9], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][9], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][9], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][9], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][9], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][9], 0);

    CharacterSubThirdCreator[playerid][10] = CreatePlayerTextDraw(playerid, 404.004760, 149.783264, "mdl-4003:HUD6");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][10], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubThirdCreator[playerid][10], 43.000000, 18.230005);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][10], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][10], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][10], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][10], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][10], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][10], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][10], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][10], 0);

    CharacterSubThirdCreator[playerid][11] = CreatePlayerTextDraw(playerid, 372.502502, 120.683341, "mdl-4005:aa3");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][11], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubThirdCreator[playerid][11], 81.000000, 70.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][11], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][11], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][11], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][11], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][11], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][11], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][11], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][11], 0);

    CharacterSubThirdCreator[playerid][12] = CreatePlayerTextDraw(playerid, 413.279144, 184.283370, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][12], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubThirdCreator[playerid][12], 13.000000, 13.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][12], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][12], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][12], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][12], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][12], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][12], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][12], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][12], 0);

    CharacterSubThirdCreator[playerid][13] = CreatePlayerTextDraw(playerid, 483.442199, 184.033050, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][13], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubThirdCreator[playerid][13], 13.000000, 13.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][13], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][13], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][13], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][13], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][13], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][13], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][13], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][13], 0);

    CharacterSubThirdCreator[playerid][14] = CreatePlayerTextDraw(playerid, 558.249023, 183.949951, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][14], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubThirdCreator[playerid][14], 13.000000, 13.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][14], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][14], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][14], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][14], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][14], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][14], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][14], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][14], 0);

    CharacterSubThirdCreator[playerid][15] = CreatePlayerTextDraw(playerid, 418.317840, 187.983383, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][15], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubThirdCreator[playerid][15], 148.000000, 4.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][15], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][15], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][15], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][15], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][15], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][15], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][15], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][15], 0);

    CharacterSubThirdCreator[playerid][16] = CreatePlayerTextDraw(playerid, 415.290313, 186.216674, "mdl-4003:hud6");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][16], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubThirdCreator[playerid][16], 9.000000, 9.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][16], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][16], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][16], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][16], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][16], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][16], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][16], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][16], 0);

    CharacterSubThirdCreator[playerid][17] = CreatePlayerTextDraw(playerid, 485.300140, 186.216674, "mdl-4004:aa8");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][17], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubThirdCreator[playerid][17], 9.000000, 9.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][17], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][17], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][17], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][17], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][17], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][17], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][17], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][17], 0);

    CharacterSubThirdCreator[playerid][18] = CreatePlayerTextDraw(playerid, 560.300781, 186.516677, "mdl-4003:hud6");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][18], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubThirdCreator[playerid][18], 9.000000, 8.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][18], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][18], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][18], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][18], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][18], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][18], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][18], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][18], 0);

    CharacterSubThirdCreator[playerid][19] = CreatePlayerTextDraw(playerid, 386.469940, 210.416702, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][19], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubThirdCreator[playerid][19], 209.960021, 4.010000);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][19], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][19], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][19], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][19], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][19], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][19], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][19], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][19], 0);

    CharacterSubThirdCreator[playerid][20] = CreatePlayerTextDraw(playerid, 386.506927, 213.266723, "mdl-4003:hud6");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][20], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubThirdCreator[playerid][20], 210.000000, 189.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][20], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][20], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][20], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][20], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][20], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][20], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][20], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][20], 0);

    CharacterSubThirdCreator[playerid][21] = CreatePlayerTextDraw(playerid, 452.571716, 359.850219, "mdl-4004:ab10");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][21], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubThirdCreator[playerid][21], 80.000000, 45.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][21], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][21], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][21], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][21], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][21], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][21], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][21], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][21], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterSubThirdCreator[playerid][21], true);

    CharacterSubThirdCreator[playerid][22] = CreatePlayerTextDraw(playerid, 396.968322, 359.850219, "mdl-4005:aba14");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][22], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubThirdCreator[playerid][22], 80.000000, 45.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][22], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][22], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][22], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][22], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][22], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][22], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][22], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][22], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterSubThirdCreator[playerid][22], true);

    CharacterSubThirdCreator[playerid][23] = CreatePlayerTextDraw(playerid, 386.332916, 401.735473, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][23], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubThirdCreator[playerid][23], 210.639099, 3.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][23], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][23], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][23], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][23], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][23], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][23], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][23], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][23], 0);

    CharacterSubThirdCreator[playerid][24] = CreatePlayerTextDraw(playerid, 428.188262, 225.583374, "mdl-4005:kutu");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][24], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubThirdCreator[playerid][24], 38.000000, 39.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][24], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][24], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][24], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][24], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][24], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][24], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][24], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][24], 0);

    CharacterSubThirdCreator[playerid][25] = CreatePlayerTextDraw(playerid, 470.987091, 225.583374, "mdl-4005:kutu");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][25], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubThirdCreator[playerid][25], 38.000000, 39.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][25], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][25], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][25], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][25], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][25], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][25], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][25], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][25], 0);

    CharacterSubThirdCreator[playerid][26] = CreatePlayerTextDraw(playerid, 513.829956, 225.583404, "mdl-4005:kutu");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][26], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubThirdCreator[playerid][26], 38.000000, 39.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][26], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][26], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][26], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][26], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][26], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][26], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][26], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][26], 0);

    CharacterSubThirdCreator[playerid][27] = CreatePlayerTextDraw(playerid, 423.322845, 218.700180, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][27], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubThirdCreator[playerid][27], 133.000000, 2.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][27], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][27], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][27], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][27], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][27], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][27], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][27], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][27], 0);

    CharacterSubThirdCreator[playerid][28] = CreatePlayerTextDraw(playerid, 423.322906, 218.700210, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][28], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubThirdCreator[playerid][28], 2.000000, 20.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][28], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][28], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][28], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][28], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][28], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][28], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][28], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][28], 0);

    CharacterSubThirdCreator[playerid][29] = CreatePlayerTextDraw(playerid, 554.509033, 218.800231, "mdl-4004:aa7");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][29], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubThirdCreator[playerid][29], 2.000000, 21.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][29], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][29], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][29], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][29], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][29], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][29], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][29], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][29], 0);

    CharacterSubThirdCreator[playerid][30] = CreatePlayerTextDraw(playerid, 429.851074, 236.016693, "FIZIKSEL~n~OZELLIKLER");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][30], 0.196658, 0.940832);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][30], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][30], -2139062017);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][30], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][30], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][30], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][30], 1);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][30], 1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][30], 0);

    CharacterSubThirdCreator[playerid][31] = CreatePlayerTextDraw(playerid, 472.227783, 236.600021, "RUHSAL~n~OZELLIKLER");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][31], 0.196658, 0.940832);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][31], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][31], -2139062017);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][31], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][31], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][31], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][31], 1);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][31], 1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][31], 0);

    CharacterSubThirdCreator[playerid][32] = CreatePlayerTextDraw(playerid, 514.994689, 236.600021, "DIGER~n~OZELLIKLER");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][32], 0.196658, 0.940832);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][32], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][32], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][32], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][32], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][32], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][32], 1);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][32], 1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][32], 0);

    CharacterSubThirdCreator[playerid][33] = CreatePlayerTextDraw(playerid, 450.682312, 355.200408, "mdl-4004:ab9");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][33], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubThirdCreator[playerid][33], 84.000000, 55.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][33], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][33], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][33], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][33], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][33], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][33], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][33], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][33], 0);

    CharacterSubThirdCreator[playerid][34] = CreatePlayerTextDraw(playerid, 419.713562, 277.117065, "mdl-4005:kutu3");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][34], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubThirdCreator[playerid][34], 44.000000, 84.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][34], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][34], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][34], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][34], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][34], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][34], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][34], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][34], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterSubThirdCreator[playerid][34], true);

    CharacterSubThirdCreator[playerid][35] = CreatePlayerTextDraw(playerid, 467.869689, 277.117065, "mdl-4005:kutu3");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][35], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubThirdCreator[playerid][35], 44.000000, 84.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][35], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][35], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][35], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][35], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][35], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][35], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][35], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][35], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterSubThirdCreator[playerid][35], true);

    CharacterSubThirdCreator[playerid][36] = CreatePlayerTextDraw(playerid, 516.697570, 277.117065, "mdl-4005:kutu3");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][36], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubThirdCreator[playerid][36], 44.000000, 84.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][36], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][36], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][36], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][36], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][36], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][36], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][36], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][36], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterSubThirdCreator[playerid][36], true);

    CharacterSubThirdCreator[playerid][37] = CreatePlayerTextDraw(playerid, 422.323730, 279.899932, "mdl-4005:kutu33");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][37], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubThirdCreator[playerid][37], 39.000000, 79.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][37], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][37], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][37], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][37], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][37], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][37], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][37], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][37], 0);

    CharacterSubThirdCreator[playerid][38] = CreatePlayerTextDraw(playerid, 469.912933, 279.899932, "mdl-4005:kutu33a");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][38], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubThirdCreator[playerid][38], 39.830028, 79.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][38], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][38], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][38], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][38], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][38], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][38], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][38], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][38], 0);

    CharacterSubThirdCreator[playerid][39] = CreatePlayerTextDraw(playerid, 518.839050, 279.899932, "mdl-4005:kutu33aa");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][39], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubThirdCreator[playerid][39], 39.830028, 79.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][39], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][39], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][39], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][39], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][39], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][39], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][39], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][39], 0);

    CharacterSubThirdCreator[playerid][40] = CreatePlayerTextDraw(playerid, 422.582580, 356.516601, "mdl-4005:aba12");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][40], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubThirdCreator[playerid][40], 50.000000, 56.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][40], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][40], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][40], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][40], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][40], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][40], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][40], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][40], 0);

    CharacterSubThirdCreator[playerid][41] = CreatePlayerTextDraw(playerid, 398.081085, 356.516601, "mdl-4005:aba13");
    PlayerTextDrawLetterSize(playerid, CharacterSubThirdCreator[playerid][41], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterSubThirdCreator[playerid][41], 50.000000, 56.000000);
    PlayerTextDrawAlignment(playerid, CharacterSubThirdCreator[playerid][41], 1);
    PlayerTextDrawColor(playerid, CharacterSubThirdCreator[playerid][41], -1);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][41], 0);
    PlayerTextDrawSetOutline(playerid, CharacterSubThirdCreator[playerid][41], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterSubThirdCreator[playerid][41], 255);
    PlayerTextDrawFont(playerid, CharacterSubThirdCreator[playerid][41], 4);
    PlayerTextDrawSetProportional(playerid, CharacterSubThirdCreator[playerid][41], 0);
    PlayerTextDrawSetShadow(playerid, CharacterSubThirdCreator[playerid][41], 0);
}

stock ShowCharacterCreatorFirstPanel(playerid)
{
    for(new i = 0; i < MAX_FIRST_CHARACTER_CREATOR_TEXTDRAW; i++)
    {
        PlayerTextDrawShow(playerid, CharacterFirstCreator[playerid][i]);
    }
}

stock HideCharacterCreatorFirstPanel(playerid)
{
    for(new i = 0; i < MAX_FIRST_CHARACTER_CREATOR_TEXTDRAW; i++)
    {
        PlayerTextDrawHide(playerid, CharacterFirstCreator[playerid][i]);
    } 
}

stock ShowCreatorSubFirstPage(playerid)
{
    for(new i = 0; i < MAX_FIRST_CHARACTER_CREATOR_SUB_TEXTDRAW; i++)
    {
        PlayerTextDrawShow(playerid, CharacterSubFirstCreator[playerid][i]);
    }

    wait_ms(150);
    SelectTextDraw(playerid, 0x6f0407FF);
}

stock HideCreatorSubFirstPage(playerid)
{
    for(new i = 0; i < MAX_FIRST_CHARACTER_CREATOR_SUB_TEXTDRAW; i++)
    {
        PlayerTextDrawHide(playerid, CharacterSubFirstCreator[playerid][i]);
    }
}

stock ShowCreatorSubSecondPage(playerid)
{
    for(new i = 0; i < MAX_SECOND_CHARACTER_CREATOR_SUB_TEXTDRAW; i++)
    {
        PlayerTextDrawShow(playerid, CharacterSubSecondCreator[playerid][i]);
    }

    SelectTextDraw(playerid, 0x6f0407FF);
}

stock HideCreatorSubSecondPage(playerid)
{
    for(new i = 0; i < MAX_SECOND_CHARACTER_CREATOR_SUB_TEXTDRAW; i++)
    {
        PlayerTextDrawHide(playerid, CharacterSubSecondCreator[playerid][i]);
    }
}

stock ShowCreatorSubThirdPage(playerid)
{
    for(new i = 0; i < MAX_THIRD_CHARACTER_CREATOR_SUB_TEXTDRAW; i++)
    {
        PlayerTextDrawShow(playerid, CharacterSubThirdCreator[playerid][i]);
    }

    SelectTextDraw(playerid, 0x6f0407FF);
}

stock HideCreatorSubThirdPage(playerid)
{
    for(new i = 0; i < MAX_THIRD_CHARACTER_CREATOR_SUB_TEXTDRAW; i++)
    {
        PlayerTextDrawHide(playerid, CharacterSubThirdCreator[playerid][i]);
    }
}

CMD:test(playerid, params[])
{
	new textdrawid, Float:x, Float:y;

	if(sscanf(params, "dff", textdrawid, x, y))
		return UsageMessage(playerid, "/test [textdraw id] [x] [y]");
	
	PlayerTextDrawTextSize(playerid, CharacterFirstCreator[playerid][textdrawid], x, y);
    PlayerTextDrawHide(playerid, CharacterFirstCreator[playerid][textdrawid]);
    PlayerTextDrawShow(playerid, CharacterFirstCreator[playerid][textdrawid]);
	return 1;
}