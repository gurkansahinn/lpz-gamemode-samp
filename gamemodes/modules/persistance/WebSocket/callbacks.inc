forward OnWebSocketClientConnect(ws_server:ws, ws_connection:con);
public OnWebSocketClientConnect(ws_server:ws, ws_connection:con)
{
    new ip[32];
    WSServerGetIP(ws, con, ip, sizeof(ip));
    printf("Incomming connection from %s", ip);
}

forward OnWebSocketClientDisconnect(ws_server:ws, ws_connection:con);
public OnWebSocketClientDisconnect(ws_server:ws, ws_connection:con)
{
    printf("Connection closed");
}

forward OnWebSocketClientMessage(ws_server:ws, ws_connection:con, message[]);
public OnWebSocketClientMessage(ws_server:ws, ws_connection:con, message[])
{
    printf("A connection sent a message: %s", message);

    if(!strcmp(message, "kickme", true))
        WSServerKick(ws, con, 1000, "Bye ;)");

    if(!strcmp(message, "stopserver", true))
        WSServerStopListen(ws);

    WSServerSend(ws, con, message);
}