#include <a_samp>
#include <crashdetect>

#undef MAX_PLAYERS
#define MAX_PLAYERS (50)
#include <fixes>

// YSI
#include <YSI_CODING\y_hooks>

// Others
#include <a_mysql>
#include <redis>
#include <strlib>
#include <env>
#include <vector>

// Modules
#include <core/Server/main>
#include <core/Player/main>

#include <persistance/MySQL/main>
#include <persistance/Redis/main>

main() {

}

public OnGameModeInit()
{
    DisableInteriorEnterExits();
	return 1;
}