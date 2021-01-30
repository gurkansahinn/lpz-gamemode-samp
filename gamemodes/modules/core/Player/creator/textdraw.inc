#define MAX_FIRST_CHARACTER_CREATOR_TEXTDRAW (45)
new PlayerText:CharacterFirstCreator[MAX_PLAYERS][MAX_FIRST_CHARACTER_CREATOR_TEXTDRAW];

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

stock ShowCharacterCreatorFirstPanel(playerid)
{
    ResetCreatorFirstData(playerid);
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