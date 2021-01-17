#include <a_samp>
#include <crashdetect>

#undef MAX_PLAYERS
#define MAX_PLAYERS (50)
#include <fixes>

// YSI
#include <YSI_CODING\y_hooks>
#include <YSI_Data\y_iterate>

// Persistance Includes
#include <a_mysql>
#include <websockets>
#include <redis>

// Others
#include <colandreas>
#include <FCNPC>
#include <3DTryg>
#include <strlib>
#include <env>
#include <vector>
#include <streamer>

// Main Globals
#include <globals>

// Core Modules
#include <core/Server/main>
#include <core/Player/main>

// Persistance Modules
#include <persistance/MySQL/main>
#include <persistance/Redis/main>
//#include <persistance/WebSocket/main>

main() {
    SendRconCommand("hostname L A S T P R O J E C T Z");
    SendRconCommand(sprintf("password %dLOADING", random(9999999)));
}

public OnGameModeInit()
{
	return 1;
}

public OnPlayerConnect(playerid)
{
    return 1;
}

public OnPlayerText(playerid, text[])
{
    return 0;
}