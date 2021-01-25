#include <YSI_CODING\y_hooks>

#define MAX_CHARACTER_PANEL_TEXTDRAW (39)
new PlayerText:CharacterPanel[MAX_PLAYERS][MAX_CHARACTER_PANEL_TEXTDRAW];

stock CreateCharacterPanelTextdraw(playerid)
{
    CharacterPanel[playerid][0] = CreatePlayerTextDraw(playerid, 344.152374, -1.916669, "mdl-4003:hud3");
    PlayerTextDrawLetterSize(playerid, CharacterPanel[playerid][0], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterPanel[playerid][0], 287.000000, 452.000000);
    PlayerTextDrawAlignment(playerid, CharacterPanel[playerid][0], 1);
    PlayerTextDrawColor(playerid, CharacterPanel[playerid][0], -1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, CharacterPanel[playerid][0], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterPanel[playerid][0], 255);
    PlayerTextDrawFont(playerid, CharacterPanel[playerid][0], 4);
    PlayerTextDrawSetProportional(playerid, CharacterPanel[playerid][0], 0);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][0], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterPanel[playerid][0], true);

    CharacterPanel[playerid][1] = CreatePlayerTextDraw(playerid, 429.329254, 10.966629, "mdl-4003:b2");
    PlayerTextDrawLetterSize(playerid, CharacterPanel[playerid][1], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterPanel[playerid][1], 124.000000, 144.000000);
    PlayerTextDrawAlignment(playerid, CharacterPanel[playerid][1], 1);
    PlayerTextDrawColor(playerid, CharacterPanel[playerid][1], -1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, CharacterPanel[playerid][1], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterPanel[playerid][1], 255);
    PlayerTextDrawFont(playerid, CharacterPanel[playerid][1], 4);
    PlayerTextDrawSetProportional(playerid, CharacterPanel[playerid][1], 0);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][1], 0);

    CharacterPanel[playerid][2] = CreatePlayerTextDraw(playerid, 418.480377, 157.049987, "mdl-4003:b3");
    PlayerTextDrawLetterSize(playerid, CharacterPanel[playerid][2], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterPanel[playerid][2], 100.000000, 25.000000);
    PlayerTextDrawAlignment(playerid, CharacterPanel[playerid][2], 1);
    PlayerTextDrawColor(playerid, CharacterPanel[playerid][2], -1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, CharacterPanel[playerid][2], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterPanel[playerid][2], 255);
    PlayerTextDrawFont(playerid, CharacterPanel[playerid][2], 4);
    PlayerTextDrawSetProportional(playerid, CharacterPanel[playerid][2], 0);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][2], 0);

    CharacterPanel[playerid][3] = CreatePlayerTextDraw(playerid, 518.835327, 164.450088, "Test!");
    PlayerTextDrawLetterSize(playerid, CharacterPanel[playerid][3], 0.299266, 1.267498);
    PlayerTextDrawAlignment(playerid, CharacterPanel[playerid][3], 1);
    PlayerTextDrawColor(playerid, CharacterPanel[playerid][3], -1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, CharacterPanel[playerid][3], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterPanel[playerid][3], 255);
    PlayerTextDrawFont(playerid, CharacterPanel[playerid][3], 1);
    PlayerTextDrawSetProportional(playerid, CharacterPanel[playerid][3], 1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][3], 0);

    CharacterPanel[playerid][4] = CreatePlayerTextDraw(playerid, 379.956298, 346.317260, "HESAP_AYARLARI");
    PlayerTextDrawLetterSize(playerid, CharacterPanel[playerid][4], 0.314260, 1.280835);
    PlayerTextDrawAlignment(playerid, CharacterPanel[playerid][4], 1);
    PlayerTextDrawColor(playerid, CharacterPanel[playerid][4], -1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, CharacterPanel[playerid][4], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterPanel[playerid][4], 255);
    PlayerTextDrawFont(playerid, CharacterPanel[playerid][4], 1);
    PlayerTextDrawSetProportional(playerid, CharacterPanel[playerid][4], 1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][4], 0);

    CharacterPanel[playerid][5] = CreatePlayerTextDraw(playerid, 490.358917, 205.766662, "mdl-4003:hud4");
    PlayerTextDrawLetterSize(playerid, CharacterPanel[playerid][5], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterPanel[playerid][5], 112.000000, 1.000000);
    PlayerTextDrawAlignment(playerid, CharacterPanel[playerid][5], 1);
    PlayerTextDrawColor(playerid, CharacterPanel[playerid][5], -1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, CharacterPanel[playerid][5], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterPanel[playerid][5], 255);
    PlayerTextDrawFont(playerid, CharacterPanel[playerid][5], 4);
    PlayerTextDrawSetProportional(playerid, CharacterPanel[playerid][5], 0);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][5], 0);

    CharacterPanel[playerid][6] = CreatePlayerTextDraw(playerid, 378.850799, 217.016647, "mdl-4003:b5");
    PlayerTextDrawLetterSize(playerid, CharacterPanel[playerid][6], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterPanel[playerid][6], 59.000000, 76.000000);
    PlayerTextDrawAlignment(playerid, CharacterPanel[playerid][6], 1);
    PlayerTextDrawColor(playerid, CharacterPanel[playerid][6], -1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, CharacterPanel[playerid][6], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterPanel[playerid][6], 255);
    PlayerTextDrawFont(playerid, CharacterPanel[playerid][6], 4);
    PlayerTextDrawSetProportional(playerid, CharacterPanel[playerid][6], 0);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][6], 0);

    CharacterPanel[playerid][7] = CreatePlayerTextDraw(playerid, 442.226165, 217.600006, "mdl-4003:b5");
    PlayerTextDrawLetterSize(playerid, CharacterPanel[playerid][7], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterPanel[playerid][7], 59.000000, 76.000000);
    PlayerTextDrawAlignment(playerid, CharacterPanel[playerid][7], 1);
    PlayerTextDrawColor(playerid, CharacterPanel[playerid][7], -1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, CharacterPanel[playerid][7], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterPanel[playerid][7], 255);
    PlayerTextDrawFont(playerid, CharacterPanel[playerid][7], 4);
    PlayerTextDrawSetProportional(playerid, CharacterPanel[playerid][7], 0);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][7], 0);

    CharacterPanel[playerid][8] = CreatePlayerTextDraw(playerid, 504.545166, 217.016647, "mdl-4003:b5");
    PlayerTextDrawLetterSize(playerid, CharacterPanel[playerid][8], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterPanel[playerid][8], 59.000000, 76.000000);
    PlayerTextDrawAlignment(playerid, CharacterPanel[playerid][8], 1);
    PlayerTextDrawColor(playerid, CharacterPanel[playerid][8], -1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, CharacterPanel[playerid][8], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterPanel[playerid][8], 255);
    PlayerTextDrawFont(playerid, CharacterPanel[playerid][8], 4);
    PlayerTextDrawSetProportional(playerid, CharacterPanel[playerid][8], 0);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][8], 0);

    CharacterPanel[playerid][9] = CreatePlayerTextDraw(playerid, 381.257476, 290.483856, "KARAKTER_OLUSTUR");
    PlayerTextDrawLetterSize(playerid, CharacterPanel[playerid][9], 0.133873, 0.958329);
    PlayerTextDrawAlignment(playerid, CharacterPanel[playerid][9], 1);
    PlayerTextDrawColor(playerid, CharacterPanel[playerid][9], -1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, CharacterPanel[playerid][9], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterPanel[playerid][9], 255);
    PlayerTextDrawFont(playerid, CharacterPanel[playerid][9], 2);
    PlayerTextDrawSetProportional(playerid, CharacterPanel[playerid][9], 1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][9], 0);

    CharacterPanel[playerid][10] = CreatePlayerTextDraw(playerid, 379.019134, 288.116455, "mdl-4003:hud5");
    PlayerTextDrawLetterSize(playerid, CharacterPanel[playerid][10], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterPanel[playerid][10], 59.000000, 14.000000);
    PlayerTextDrawAlignment(playerid, CharacterPanel[playerid][10], 1);
    PlayerTextDrawColor(playerid, CharacterPanel[playerid][10], -1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][10], 0);
    PlayerTextDrawSetOutline(playerid, CharacterPanel[playerid][10], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterPanel[playerid][10], 255);
    PlayerTextDrawFont(playerid, CharacterPanel[playerid][10], 4);
    PlayerTextDrawSetProportional(playerid, CharacterPanel[playerid][10], 0);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][10], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterPanel[playerid][10], true);

    CharacterPanel[playerid][11] = CreatePlayerTextDraw(playerid, 442.112548, 288.116455, "mdl-4003:hud5");
    PlayerTextDrawLetterSize(playerid, CharacterPanel[playerid][11], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterPanel[playerid][11], 59.000000, 14.000000);
    PlayerTextDrawAlignment(playerid, CharacterPanel[playerid][11], 1);
    PlayerTextDrawColor(playerid, CharacterPanel[playerid][11], -1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][11], 0);
    PlayerTextDrawSetOutline(playerid, CharacterPanel[playerid][11], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterPanel[playerid][11], 255);
    PlayerTextDrawFont(playerid, CharacterPanel[playerid][11], 4);
    PlayerTextDrawSetProportional(playerid, CharacterPanel[playerid][11], 0);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][11], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterPanel[playerid][11], true);

    CharacterPanel[playerid][12] = CreatePlayerTextDraw(playerid, 444.206695, 290.650146, "KARAKTER_OLUSTUR");
    PlayerTextDrawLetterSize(playerid, CharacterPanel[playerid][12], 0.133873, 0.958329);
    PlayerTextDrawAlignment(playerid, CharacterPanel[playerid][12], 1);
    PlayerTextDrawColor(playerid, CharacterPanel[playerid][12], -1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][12], 0);
    PlayerTextDrawSetOutline(playerid, CharacterPanel[playerid][12], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterPanel[playerid][12], 255);
    PlayerTextDrawFont(playerid, CharacterPanel[playerid][12], 2);
    PlayerTextDrawSetProportional(playerid, CharacterPanel[playerid][12], 1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][12], 0);

    CharacterPanel[playerid][13] = CreatePlayerTextDraw(playerid, 504.468597, 288.116424, "mdl-4003:hud5");
    PlayerTextDrawLetterSize(playerid, CharacterPanel[playerid][13], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterPanel[playerid][13], 59.000000, 14.000000);
    PlayerTextDrawAlignment(playerid, CharacterPanel[playerid][13], 1);
    PlayerTextDrawColor(playerid, CharacterPanel[playerid][13], -1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][13], 0);
    PlayerTextDrawSetOutline(playerid, CharacterPanel[playerid][13], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterPanel[playerid][13], 255);
    PlayerTextDrawFont(playerid, CharacterPanel[playerid][13], 4);
    PlayerTextDrawSetProportional(playerid, CharacterPanel[playerid][13], 0);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][13], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterPanel[playerid][13], true);

    CharacterPanel[playerid][14] = CreatePlayerTextDraw(playerid, 505.955932, 290.450103, "KARAKTER_OLUSTUR");
    PlayerTextDrawLetterSize(playerid, CharacterPanel[playerid][14], 0.133873, 0.958329);
    PlayerTextDrawAlignment(playerid, CharacterPanel[playerid][14], 1);
    PlayerTextDrawColor(playerid, CharacterPanel[playerid][14], -1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][14], 0);
    PlayerTextDrawSetOutline(playerid, CharacterPanel[playerid][14], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterPanel[playerid][14], 255);
    PlayerTextDrawFont(playerid, CharacterPanel[playerid][14], 2);
    PlayerTextDrawSetProportional(playerid, CharacterPanel[playerid][14], 1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][14], 0);

    CharacterPanel[playerid][15] = CreatePlayerTextDraw(playerid, 464.889984, 352.635437, "mdl-4003:hud4");
    PlayerTextDrawLetterSize(playerid, CharacterPanel[playerid][15], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterPanel[playerid][15], 141.000000, 1.000000);
    PlayerTextDrawAlignment(playerid, CharacterPanel[playerid][15], 1);
    PlayerTextDrawColor(playerid, CharacterPanel[playerid][15], -1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][15], 0);
    PlayerTextDrawSetOutline(playerid, CharacterPanel[playerid][15], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterPanel[playerid][15], 255);
    PlayerTextDrawFont(playerid, CharacterPanel[playerid][15], 4);
    PlayerTextDrawSetProportional(playerid, CharacterPanel[playerid][15], 0);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][15], 0);

    CharacterPanel[playerid][16] = CreatePlayerTextDraw(playerid, 566.727661, 217.899993, "mdl-4003:b8");
    PlayerTextDrawLetterSize(playerid, CharacterPanel[playerid][16], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterPanel[playerid][16], 36.000000, 75.000000);
    PlayerTextDrawAlignment(playerid, CharacterPanel[playerid][16], 1);
    PlayerTextDrawColor(playerid, CharacterPanel[playerid][16], -1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][16], 0);
    PlayerTextDrawSetOutline(playerid, CharacterPanel[playerid][16], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterPanel[playerid][16], 255);
    PlayerTextDrawFont(playerid, CharacterPanel[playerid][16], 4);
    PlayerTextDrawSetProportional(playerid, CharacterPanel[playerid][16], 0);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][16], 0);

    CharacterPanel[playerid][17] = CreatePlayerTextDraw(playerid, 566.750610, 287.633148, "mdl-4003:hud6");
    PlayerTextDrawLetterSize(playerid, CharacterPanel[playerid][17], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterPanel[playerid][17], 35.869853, 14.000000);
    PlayerTextDrawAlignment(playerid, CharacterPanel[playerid][17], 1);
    PlayerTextDrawColor(playerid, CharacterPanel[playerid][17], -1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][17], 0);
    PlayerTextDrawSetOutline(playerid, CharacterPanel[playerid][17], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterPanel[playerid][17], 255);
    PlayerTextDrawFont(playerid, CharacterPanel[playerid][17], 4);
    PlayerTextDrawSetProportional(playerid, CharacterPanel[playerid][17], 0);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][17], 0);

    CharacterPanel[playerid][18] = CreatePlayerTextDraw(playerid, 573.409851, 291.516693, "SAYFA1");
    PlayerTextDrawLetterSize(playerid, CharacterPanel[playerid][18], 0.181666, 0.958329);
    PlayerTextDrawAlignment(playerid, CharacterPanel[playerid][18], 1);
    PlayerTextDrawColor(playerid, CharacterPanel[playerid][18], -1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][18], 0);
    PlayerTextDrawSetOutline(playerid, CharacterPanel[playerid][18], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterPanel[playerid][18], 255);
    PlayerTextDrawFont(playerid, CharacterPanel[playerid][18], 1);
    PlayerTextDrawSetProportional(playerid, CharacterPanel[playerid][18], 1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][18], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterPanel[playerid][18], true);

    CharacterPanel[playerid][19] = CreatePlayerTextDraw(playerid, 591.508300, 267.699645, "mdl-4003:b9");
    PlayerTextDrawLetterSize(playerid, CharacterPanel[playerid][19], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterPanel[playerid][19], 8.000000, 13.000000);
    PlayerTextDrawAlignment(playerid, CharacterPanel[playerid][19], 1);
    PlayerTextDrawColor(playerid, CharacterPanel[playerid][19], -1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][19], 0);
    PlayerTextDrawSetOutline(playerid, CharacterPanel[playerid][19], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterPanel[playerid][19], 255);
    PlayerTextDrawFont(playerid, CharacterPanel[playerid][19], 4);
    PlayerTextDrawSetProportional(playerid, CharacterPanel[playerid][19], 0);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][19], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterPanel[playerid][19], true);

    CharacterPanel[playerid][20] = CreatePlayerTextDraw(playerid, 568.787841, 267.733062, "mdl-4003:b7");
    PlayerTextDrawLetterSize(playerid, CharacterPanel[playerid][20], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterPanel[playerid][20], 8.000000, 13.000000);
    PlayerTextDrawAlignment(playerid, CharacterPanel[playerid][20], 1);
    PlayerTextDrawColor(playerid, CharacterPanel[playerid][20], -1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][20], 0);
    PlayerTextDrawSetOutline(playerid, CharacterPanel[playerid][20], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterPanel[playerid][20], 255);
    PlayerTextDrawFont(playerid, CharacterPanel[playerid][20], 4);
    PlayerTextDrawSetProportional(playerid, CharacterPanel[playerid][20], 0);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][20], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterPanel[playerid][20], true);

    CharacterPanel[playerid][21] = CreatePlayerTextDraw(playerid, 379.493377, 368.019042, "mdl-4003:hud6");
    PlayerTextDrawLetterSize(playerid, CharacterPanel[playerid][21], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterPanel[playerid][21], 109.000000, 20.000000);
    PlayerTextDrawAlignment(playerid, CharacterPanel[playerid][21], 1);
    PlayerTextDrawColor(playerid, CharacterPanel[playerid][21], -1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][21], 0);
    PlayerTextDrawSetOutline(playerid, CharacterPanel[playerid][21], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterPanel[playerid][21], 255);
    PlayerTextDrawFont(playerid, CharacterPanel[playerid][21], 4);
    PlayerTextDrawSetProportional(playerid, CharacterPanel[playerid][21], 0);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][21], 0);

    CharacterPanel[playerid][22] = CreatePlayerTextDraw(playerid, 493.268066, 367.469085, "mdl-4003:hud6");
    PlayerTextDrawLetterSize(playerid, CharacterPanel[playerid][22], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterPanel[playerid][22], 109.000000, 20.000000);
    PlayerTextDrawAlignment(playerid, CharacterPanel[playerid][22], 1);
    PlayerTextDrawColor(playerid, CharacterPanel[playerid][22], -1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][22], 0);
    PlayerTextDrawSetOutline(playerid, CharacterPanel[playerid][22], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterPanel[playerid][22], 255);
    PlayerTextDrawFont(playerid, CharacterPanel[playerid][22], 4);
    PlayerTextDrawSetProportional(playerid, CharacterPanel[playerid][22], 0);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][22], 0);

    CharacterPanel[playerid][23] = CreatePlayerTextDraw(playerid, 383.067504, 341.152374, "mdl-4003:b10");
    PlayerTextDrawLetterSize(playerid, CharacterPanel[playerid][23], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterPanel[playerid][23], 70.000000, 70.000000);
    PlayerTextDrawAlignment(playerid, CharacterPanel[playerid][23], 1);
    PlayerTextDrawColor(playerid, CharacterPanel[playerid][23], -1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][23], 0);
    PlayerTextDrawSetOutline(playerid, CharacterPanel[playerid][23], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterPanel[playerid][23], 255);
    PlayerTextDrawFont(playerid, CharacterPanel[playerid][23], 4);
    PlayerTextDrawSetProportional(playerid, CharacterPanel[playerid][23], 0);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][23], 0);

    CharacterPanel[playerid][24] = CreatePlayerTextDraw(playerid, 461.688690, 373.152221, "PASIF");
    PlayerTextDrawLetterSize(playerid, CharacterPanel[playerid][24], 0.195252, 0.940831);
    PlayerTextDrawAlignment(playerid, CharacterPanel[playerid][24], 1);
    PlayerTextDrawColor(playerid, CharacterPanel[playerid][24], -1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][24], 0);
    PlayerTextDrawSetOutline(playerid, CharacterPanel[playerid][24], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterPanel[playerid][24], 255);
    PlayerTextDrawFont(playerid, CharacterPanel[playerid][24], 1);
    PlayerTextDrawSetProportional(playerid, CharacterPanel[playerid][24], 1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][24], 0);

    CharacterPanel[playerid][25] = CreatePlayerTextDraw(playerid, 455.219726, 367.802276, "mdl-4003:HUD7");
    PlayerTextDrawLetterSize(playerid, CharacterPanel[playerid][25], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterPanel[playerid][25], 31.000000, 21.000000);
    PlayerTextDrawAlignment(playerid, CharacterPanel[playerid][25], 1);
    PlayerTextDrawColor(playerid, CharacterPanel[playerid][25], -1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][25], 0);
    PlayerTextDrawSetOutline(playerid, CharacterPanel[playerid][25], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterPanel[playerid][25], 255);
    PlayerTextDrawFont(playerid, CharacterPanel[playerid][25], 4);
    PlayerTextDrawSetProportional(playerid, CharacterPanel[playerid][25], 0);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][25], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterPanel[playerid][25], true);

    CharacterPanel[playerid][26] = CreatePlayerTextDraw(playerid, 569.082336, 367.352020, "mdl-4003:HUD7");
    PlayerTextDrawLetterSize(playerid, CharacterPanel[playerid][26], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterPanel[playerid][26], 31.000000, 20.160026);
    PlayerTextDrawAlignment(playerid, CharacterPanel[playerid][26], 1);
    PlayerTextDrawColor(playerid, CharacterPanel[playerid][26], -1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][26], 0);
    PlayerTextDrawSetOutline(playerid, CharacterPanel[playerid][26], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterPanel[playerid][26], 255);
    PlayerTextDrawFont(playerid, CharacterPanel[playerid][26], 4);
    PlayerTextDrawSetProportional(playerid, CharacterPanel[playerid][26], 0);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][26], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterPanel[playerid][26], true);

    CharacterPanel[playerid][27] = CreatePlayerTextDraw(playerid, 490.838562, 341.052368, "mdl-4003:b11");
    PlayerTextDrawLetterSize(playerid, CharacterPanel[playerid][27], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterPanel[playerid][27], 70.000000, 70.000000);
    PlayerTextDrawAlignment(playerid, CharacterPanel[playerid][27], 1);
    PlayerTextDrawColor(playerid, CharacterPanel[playerid][27], -1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][27], 0);
    PlayerTextDrawSetOutline(playerid, CharacterPanel[playerid][27], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterPanel[playerid][27], 255);
    PlayerTextDrawFont(playerid, CharacterPanel[playerid][27], 4);
    PlayerTextDrawSetProportional(playerid, CharacterPanel[playerid][27], 0);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][27], 0);

    CharacterPanel[playerid][28] = CreatePlayerTextDraw(playerid, 575.476257, 373.252227, "PASIF");
    PlayerTextDrawLetterSize(playerid, CharacterPanel[playerid][28], 0.195252, 0.940831);
    PlayerTextDrawAlignment(playerid, CharacterPanel[playerid][28], 1);
    PlayerTextDrawColor(playerid, CharacterPanel[playerid][28], -1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][28], 0);
    PlayerTextDrawSetOutline(playerid, CharacterPanel[playerid][28], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterPanel[playerid][28], 255);
    PlayerTextDrawFont(playerid, CharacterPanel[playerid][28], 1);
    PlayerTextDrawSetProportional(playerid, CharacterPanel[playerid][28], 1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][28], 0);

    CharacterPanel[playerid][29] = CreatePlayerTextDraw(playerid, 481.120452, 405.767730, "mdl-4003:b12");
    PlayerTextDrawLetterSize(playerid, CharacterPanel[playerid][29], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterPanel[playerid][29], 21.000000, 27.000000);
    PlayerTextDrawAlignment(playerid, CharacterPanel[playerid][29], 1);
    PlayerTextDrawColor(playerid, CharacterPanel[playerid][29], -1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][29], 0);
    PlayerTextDrawSetOutline(playerid, CharacterPanel[playerid][29], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterPanel[playerid][29], 255);
    PlayerTextDrawFont(playerid, CharacterPanel[playerid][29], 4);
    PlayerTextDrawSetProportional(playerid, CharacterPanel[playerid][29], 0);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][29], 0);

    CharacterPanel[playerid][30] = CreatePlayerTextDraw(playerid, 445.849182, 391.833343, "mdl-4003:b13");
    PlayerTextDrawLetterSize(playerid, CharacterPanel[playerid][30], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterPanel[playerid][30], 90.000000, 90.000000);
    PlayerTextDrawAlignment(playerid, CharacterPanel[playerid][30], 1);
    PlayerTextDrawColor(playerid, CharacterPanel[playerid][30], -1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][30], 0);
    PlayerTextDrawSetOutline(playerid, CharacterPanel[playerid][30], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterPanel[playerid][30], 255);
    PlayerTextDrawFont(playerid, CharacterPanel[playerid][30], 4);
    PlayerTextDrawSetProportional(playerid, CharacterPanel[playerid][30], 0);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][30], 0);

    CharacterPanel[playerid][31] = CreatePlayerTextDraw(playerid, 468.263580, 314.085388, "mdl-4003:hud6");
    PlayerTextDrawLetterSize(playerid, CharacterPanel[playerid][31], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterPanel[playerid][31], 47.000000, 29.000000);
    PlayerTextDrawAlignment(playerid, CharacterPanel[playerid][31], 1);
    PlayerTextDrawColor(playerid, CharacterPanel[playerid][31], -1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][31], 0);
    PlayerTextDrawSetOutline(playerid, CharacterPanel[playerid][31], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterPanel[playerid][31], 255);
    PlayerTextDrawFont(playerid, CharacterPanel[playerid][31], 4);
    PlayerTextDrawSetProportional(playerid, CharacterPanel[playerid][31], 0);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][31], 0);

    CharacterPanel[playerid][32] = CreatePlayerTextDraw(playerid, 468.269104, 314.368530, "mdl-4003:HUD7");
    PlayerTextDrawLetterSize(playerid, CharacterPanel[playerid][32], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterPanel[playerid][32], 3.000000, 29.000000);
    PlayerTextDrawAlignment(playerid, CharacterPanel[playerid][32], 1);
    PlayerTextDrawColor(playerid, CharacterPanel[playerid][32], -1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][32], 0);
    PlayerTextDrawSetOutline(playerid, CharacterPanel[playerid][32], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterPanel[playerid][32], 255);
    PlayerTextDrawFont(playerid, CharacterPanel[playerid][32], 4);
    PlayerTextDrawSetProportional(playerid, CharacterPanel[playerid][32], 0);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][32], 0);

    CharacterPanel[playerid][33] = CreatePlayerTextDraw(playerid, 514.608398, 314.568542, "mdl-4003:HUD7");
    PlayerTextDrawLetterSize(playerid, CharacterPanel[playerid][33], 0.000000, 0.000000);
    PlayerTextDrawTextSize(playerid, CharacterPanel[playerid][33], 3.000000, 29.000000);
    PlayerTextDrawAlignment(playerid, CharacterPanel[playerid][33], 1);
    PlayerTextDrawColor(playerid, CharacterPanel[playerid][33], -1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][33], 0);
    PlayerTextDrawSetOutline(playerid, CharacterPanel[playerid][33], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterPanel[playerid][33], 255);
    PlayerTextDrawFont(playerid, CharacterPanel[playerid][33], 4);
    PlayerTextDrawSetProportional(playerid, CharacterPanel[playerid][33], 0);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][33], 0);

    CharacterPanel[playerid][34] = CreatePlayerTextDraw(playerid, 378.834594, 278.233581, "KARAKTERAD1");
    PlayerTextDrawLetterSize(playerid, CharacterPanel[playerid][34], 0.147927, 0.859161);
    PlayerTextDrawAlignment(playerid, CharacterPanel[playerid][34], 1);
    PlayerTextDrawColor(playerid, CharacterPanel[playerid][34], -1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][34], 0);
    PlayerTextDrawSetOutline(playerid, CharacterPanel[playerid][34], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterPanel[playerid][34], 255);
    PlayerTextDrawFont(playerid, CharacterPanel[playerid][34], 1);
    PlayerTextDrawSetProportional(playerid, CharacterPanel[playerid][34], 1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][34], 0);

    CharacterPanel[playerid][35] = CreatePlayerTextDraw(playerid, 441.617218, 278.800292, "KARAKTERADI2");
    PlayerTextDrawLetterSize(playerid, CharacterPanel[playerid][35], 0.147927, 0.859161);
    PlayerTextDrawAlignment(playerid, CharacterPanel[playerid][35], 1);
    PlayerTextDrawColor(playerid, CharacterPanel[playerid][35], -1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][35], 0);
    PlayerTextDrawSetOutline(playerid, CharacterPanel[playerid][35], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterPanel[playerid][35], 255);
    PlayerTextDrawFont(playerid, CharacterPanel[playerid][35], 1);
    PlayerTextDrawSetProportional(playerid, CharacterPanel[playerid][35], 1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][35], 0);

    CharacterPanel[playerid][36] = CreatePlayerTextDraw(playerid, 504.356781, 278.800292, "KARAKTERADI3");
    PlayerTextDrawLetterSize(playerid, CharacterPanel[playerid][36], 0.147927, 0.859161);
    PlayerTextDrawAlignment(playerid, CharacterPanel[playerid][36], 1);
    PlayerTextDrawColor(playerid, CharacterPanel[playerid][36], -1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][36], 0);
    PlayerTextDrawSetOutline(playerid, CharacterPanel[playerid][36], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterPanel[playerid][36], 255);
    PlayerTextDrawFont(playerid, CharacterPanel[playerid][36], 1);
    PlayerTextDrawSetProportional(playerid, CharacterPanel[playerid][36], 1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][36], 0);

    CharacterPanel[playerid][37] = CreatePlayerTextDraw(playerid, 378.550689, 199.333358, "MEVCUT_KARAKTERLER");
    PlayerTextDrawLetterSize(playerid, CharacterPanel[playerid][37], 0.303952, 1.314167);
    PlayerTextDrawAlignment(playerid, CharacterPanel[playerid][37], 1);
    PlayerTextDrawColor(playerid, CharacterPanel[playerid][37], -1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][37], 0);
    PlayerTextDrawSetOutline(playerid, CharacterPanel[playerid][37], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterPanel[playerid][37], 255);
    PlayerTextDrawFont(playerid, CharacterPanel[playerid][37], 1);
    PlayerTextDrawSetProportional(playerid, CharacterPanel[playerid][37], 1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][37], 0);

    CharacterPanel[playerid][38] = CreatePlayerTextDraw(playerid, 477.492309, 317.050170, "OYUNU~n~BASLAT");
    PlayerTextDrawLetterSize(playerid, CharacterPanel[playerid][38], 0.268344, 1.185832);
    PlayerTextDrawTextSize(playerid, CharacterPanel[playerid][38], 516.0, 27.0);
    PlayerTextDrawAlignment(playerid, CharacterPanel[playerid][38], 1);
    PlayerTextDrawColor(playerid, CharacterPanel[playerid][38], -1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][38], 0);
    PlayerTextDrawSetOutline(playerid, CharacterPanel[playerid][38], 0);
    PlayerTextDrawBackgroundColor(playerid, CharacterPanel[playerid][38], -16711681);
    PlayerTextDrawFont(playerid, CharacterPanel[playerid][38], 1);
    PlayerTextDrawSetProportional(playerid, CharacterPanel[playerid][38], 1);
    PlayerTextDrawSetShadow(playerid, CharacterPanel[playerid][38], 0);
    PlayerTextDrawSetSelectable(playerid, CharacterPanel[playerid][38], true);
}

stock ShowCharacterPanel(playerid)
{
    // ugly coding lines
    PlayerTextDrawSetString(playerid, CharacterPanel[playerid][3], AccountInfo[playerid][pName]);

    PlayerTextDrawSetString(playerid, CharacterPanel[playerid][18], sprintf("Sayfa_%d", AccountInfo[playerid][pCharacterPanelPage]));

    if(CharacterPanelInfo[playerid][0][cSqlID] != 0)
    {
        PlayerTextDrawSetString(playerid, CharacterPanel[playerid][9], "KARAKTER_SEC");
        PlayerTextDrawSetString(playerid, CharacterPanel[playerid][34], CharacterPanelInfo[playerid][0][cName]);

        PlayerTextDrawFont(playerid, CharacterPanel[playerid][6], 5);
        PlayerTextDrawSetPreviewModel(playerid, CharacterPanel[playerid][6], CharacterPanelInfo[playerid][0][cSkin]);
    }
    else
    {
        PlayerTextDrawSetString(playerid, CharacterPanel[playerid][9], "KARAKTER_OLUSTUR");
        PlayerTextDrawSetString(playerid, CharacterPanel[playerid][34], "KARAKTER_YOK");

        PlayerTextDrawFont(playerid, CharacterPanel[playerid][6], 4);
    }

    if(CharacterPanelInfo[playerid][1][cSqlID] != 0)
    {
        PlayerTextDrawSetString(playerid, CharacterPanel[playerid][12], "KARAKTER_SEC");
        PlayerTextDrawSetString(playerid, CharacterPanel[playerid][35], CharacterPanelInfo[playerid][1][cName]);

        PlayerTextDrawFont(playerid, CharacterPanel[playerid][7], 5);
        PlayerTextDrawSetPreviewModel(playerid, CharacterPanel[playerid][7], CharacterPanelInfo[playerid][1][cSkin]);
    }
    else
    {
        PlayerTextDrawSetString(playerid, CharacterPanel[playerid][12], "KARAKTER_OLUSTUR");
        PlayerTextDrawSetString(playerid, CharacterPanel[playerid][35], "KARAKTER_YOK");
        PlayerTextDrawFont(playerid, CharacterPanel[playerid][7], 4);
    }

    if(CharacterPanelInfo[playerid][2][cSqlID] != 0)
    {
        PlayerTextDrawSetString(playerid, CharacterPanel[playerid][14], "KARAKTER_SEC");
        PlayerTextDrawSetString(playerid, CharacterPanel[playerid][36], CharacterPanelInfo[playerid][2][cName]);

        PlayerTextDrawFont(playerid, CharacterPanel[playerid][8], 5);
        PlayerTextDrawSetPreviewModel(playerid, CharacterPanel[playerid][8], CharacterPanelInfo[playerid][2][cSkin]);
    }
    else
    {
        PlayerTextDrawSetString(playerid, CharacterPanel[playerid][14], "KARAKTER_OLUSTUR");
        PlayerTextDrawSetString(playerid, CharacterPanel[playerid][36], "KARAKTER_YOK");
        PlayerTextDrawFont(playerid, CharacterPanel[playerid][8], 4);
    }

    for(new characterPanelTextdraw = 0; characterPanelTextdraw < MAX_CHARACTER_PANEL_TEXTDRAW; characterPanelTextdraw++)
    {
        PlayerTextDrawShow(playerid, CharacterPanel[playerid][characterPanelTextdraw]);
    }

    ShowMouseToPlayer(playerid);
    return 1;
}

stock ShowMouseToPlayer(playerid)
{
    InfoMessage(playerid, "Eðer ki mouse kaybolursa /mouse komutuyla tekrar getirebilirsiniz.");
    SelectTextDraw(playerid, 0x6f0407FF);
    return 1;
}

stock ResetCharacterPanel(playerid)
{
    PlayerTextDrawSetString(playerid, CharacterPanel[playerid][10], "mdl-4003:hud5");
    PlayerTextDrawSetString(playerid, CharacterPanel[playerid][11], "mdl-4003:hud5");
    PlayerTextDrawSetString(playerid, CharacterPanel[playerid][13], "mdl-4003:hud5");

    PlayerTextDrawSetSelectable(playerid, CharacterPanel[playerid][10], true);
    PlayerTextDrawSetSelectable(playerid, CharacterPanel[playerid][11], true);
    PlayerTextDrawSetSelectable(playerid, CharacterPanel[playerid][13], true);
    return 1;
}