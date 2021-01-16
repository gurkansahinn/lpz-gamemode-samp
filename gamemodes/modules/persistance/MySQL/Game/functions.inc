// persistance > MySQL > Game > functions

stock ConnectGameDatabase()
{
    new gameDatabaseHost[MAX_GAME_DATABASE_HOST_LENGTH], gameDatabaseUser[MAX_GAME_DATABASE_USER_LENGTH], gameDatabaseDB[MAX_GAME_DATABASE_DB_LENGTH],
        gameDatabasePassword[MAX_GAME_DATABASE_PASSWORD_LENGTH], 
        MySQLOpt:mysql_options;

    Env_Get(ENV_GAME_DATABASE_HOST, gameDatabaseHost);
    Env_Get(ENV_GAME_DATABASE_USER, gameDatabaseUser);
    Env_Get(ENV_GAME_DATABASE_DB, gameDatabaseDB);
    Env_Get(ENV_GAME_DATABASE_PASSWORD, gameDatabasePassword);

    mysql_options = mysql_init_options();

    mysql_set_option(mysql_options, AUTO_RECONNECT, true);
    mysql_set_option(mysql_options, MULTI_STATEMENTS, false);
    mysql_set_option(mysql_options, POOL_SIZE, 3);
    mysql_set_option(mysql_options, SERVER_PORT, 3306);

    mysqlGame = mysql_connect(gameDatabaseHost, gameDatabaseUser, gameDatabasePassword, gameDatabaseDB, mysql_options);

    if(mysqlGame == MYSQL_INVALID_HANDLE || mysql_errno(mysqlGame) != 0)
    {
        print("[!] Connection to MySQL server failed.");
        return 0;
    }

    printf("\n[!] Connection to MySQL server successful. (DATABASE: %s)", gameDatabaseDB);
    return 1;
}