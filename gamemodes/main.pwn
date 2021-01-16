#include <a_samp>
#include <crashdetect>

#undef MAX_PLAYERS
#define MAX_PLAYERS (50)
#include <fixes>

// YSI
#include <YSI_CODING\y_hooks>
#include <YSI_Data\y_iterate>

// Others
#include <a_mysql>
#include <redis>
#include <strlib>
#include <env>
#include <vector>
#include <streamer>

#define BitFlag_Get(%0,%1) ((%0) & (%1))   	// Returns zero (false) if the flag isn't set.
#define BitFlag_On(%0,%1) ((%0) |= (%1))  	// Turn on a flag.
#define BitFlag_Off(%0,%1) ((%0) &= ~(%1)) 	// Turn off a flag.
#define BitFlag_Toggle(%0,%1) ((%0) ^= (%1))  	// Toggle a flag (swap true/false).

#define IsNaN(%0) ((%0) != (%0))

#define HOLDING(%0) ((newkeys & (%0)) == (%0))
#define RELEASED(%0 (((newkeys & (%0)) != (%0)) && ((oldkeys & (%0)) == (%0)))

#define DEV_WARN (psr_Management | psr_Dev)
#define LEAD_WARN (psr_LeadAdmin | psr_Management | psr_Dev)
#define ADMIN_WARN (psr_GameAdmin | psr_LeadAdmin | psr_Management | psr_Dev)
#define HELPER_WARN (psr_Helper | psr_GameAdmin | psr_LeadAdmin | psr_Management | psr_Dev)

#define DEV (1)
#define LEAD (2)
#define ADMIN (3)
#define SCRIPTER (4)
#define HELPER (5)

// Modules
#include <core/Server/main>
#include <core/Player/main>

#include <persistance/MySQL/main>
#include <persistance/Redis/main>

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