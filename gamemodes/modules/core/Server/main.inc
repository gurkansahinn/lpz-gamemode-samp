// core > Server > main

#include <YSI_CODING\y_hooks>

#include <core/Server/globals>
#include <core/Server/functions>

hook OnGameModeInit()
{
    LoadServerData();
    return 1;
}