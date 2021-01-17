stock ConnectRedisServer()
{
    new redisHost[MAX_REDIS_HOST_LENGTH], redisPort[MAX_REDIS_PORT_LENGTH], redisAuth[MAX_REDIS_AUTH_LENGTH],
        redisResponse;

    Env_Get(ENV_REDIS_HOST, redisHost);
    Env_Get(ENV_REDIS_PORT, redisPort);
    Env_Get(ENV_REDIS_AUTH, redisAuth);

    redisResponse = Redis_Connect(redisHost, strval(redisPort), redisAuth, redisClient);
    
    if(redisResponse == REDIS_INVALID_HANDLE)
    {
        print("[!] Connection to Redis server failed.");
        return 0;
    }

    printf("[!] Connection to Redis server successful. (HOST: %s)\n", redisHost);
    return 1;
}