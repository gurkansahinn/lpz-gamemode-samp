// persistance > MySQL > main

#include <YSI_CODING\y_hooks>

// Forum Database
// (empty)

// Game Database
#include <persistance/MySQL/Game/globals>
#include <persistance/MySQL/Game/functions>

hook OnGameModeInit()
{
    ConnectGameDatabase();
    return 1;
}