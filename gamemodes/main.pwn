#include <a_samp>
#include <crashdetect>
//#include <TD-Streamer>

#undef MAX_PLAYERS
#define MAX_PLAYERS (50)
#include <fixes>

// YSI
#define YSI_YES_MODE_CACHE
#define YSI_NO_OPTIMISATION_MESSAGE
#define YSI_NO_HEAP_MALLOC

#include <YSI_Visual\y_dialog>
#include <YSI_CODING\y_timers>
#include <YSI_Visual\y_commands>
#include <YSI_CODING\y_hooks>
#include <YSI_Data\y_iterate>

// Persistance Includes
#include <a_mysql>
#include <socket>
#include <redis>

//#include <websockets>

// Others
#include <colandreas>
#include <FCNPC>
#include <3DTryg>
#include <strlib>
#include <env>
#include <vector>
#include <sscanf2>

#define PP_SYNTAX_AWAIT

#include <PawnPlus>
#include <eSelection>
#include <streamer>

// Main Globals
#include <globals>

// Persistance Modules
#include <persistance/MySQL/main>
#include <persistance/Redis/main>
//#include <persistance/WebSocket/main>

// Core Modules
#include <core/Server/main>
#include <core/Player/main>

// Maps
#include <world/map/main>

main() {
    ShowNameTags(false);
}

public OnGameModeInit()
{
    return 1;
}

public OnPlayerRequestClass(playerid, classid)
{
    SetSpawnInfo(playerid, NO_TEAM, 95, 3191.943,385.393,22.547, 90.0, 0, 0, 0, 0, 0, 0);
    SpawnPlayer(playerid);

    TogglePlayerSpectating(playerid, true);
    return 1;
}