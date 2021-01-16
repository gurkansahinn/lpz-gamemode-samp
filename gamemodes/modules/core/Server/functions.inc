// core > Server > functions

stock LoadServerData()
{
    new serverName[MAX_SERVER_NAME_LENGTH], serverMode[MAX_SERVER_MODE_LENGTH], serverMap[MAX_SERVER_MAP_LENGTH], serverUrl[MAX_SERVER_URL_LENGTH], 
        serverLanguage[MAX_SERVER_LANGUAGE_LENGTH], serverPassword[MAX_SERVER_PASSWORD_LENGTH];

    Env_Get(ENV_SERVER_NAME, serverName);
    Env_Get(ENV_SERVER_MODE, serverMode);
    Env_Get(ENV_SERVER_MAP, serverMap);
    Env_Get(ENV_SERVER_URL, serverUrl);
    Env_Get(ENV_SEVRER_LANGUAGE, serverLanguage);
    Env_Get(ENV_SERVER_PASSWORD, serverPassword);

    SendRconCommand(sprintf("hostname %s", serverName));
    SendRconCommand(sprintf("gamemodetext %s", serverMode));
    SendRconCommand(sprintf("mapname %s", serverMap));
    SendRconCommand(sprintf("weburl %s", serverUrl));
    SendRconCommand(sprintf("language %s", serverLanguage));
    SendRconCommand(sprintf("password %s", serverPassword));
    return 1;
}