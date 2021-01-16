// persistance > Redis > main

#include <YSI_CODING\y_hooks>

#include <persistance/Redis/globals>
#include <persistance/Redis/functions>

hook OnGameModeInit()
{
    ConnectRedisServer();
    return 1;
}