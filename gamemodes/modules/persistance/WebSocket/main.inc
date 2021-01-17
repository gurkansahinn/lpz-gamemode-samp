#include <YSI_CODING\y_hooks>

#include <persistance/WebSocket/globals>
#include <persistance/WebSocket/functions>
#include <persistance/WebSocket/callbacks>

hook OnGameModeInit()
{
    webSocketServer = CreateWSServer("OnWebSocketClientConnect", "OnWebSocketClientDisconnect", "OnWebSocketClientMessage");

    printf("WebSocket server has been created and listening to port %d and accepts requests from %s.", WSServerStartListen(webSocketServer, WEB_SOCKET_HOST, WEB_SOCKET_PORT), ALLOWED_SERVER_HOST);
}