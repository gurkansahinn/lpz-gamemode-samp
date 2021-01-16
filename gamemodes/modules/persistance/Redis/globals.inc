// persistance > Redis > globals

new Redis:redisClient;

#define ENV_REDIS_HOST "REDIS_HOST"
#define MAX_REDIS_HOST_LENGTH (26)

#define ENV_REDIS_PORT "REDIS_PORT"
#define MAX_REDIS_PORT_LENGTH (8)

#define ENV_REDIS_AUTH "REDIS_AUTH"
#define MAX_REDIS_AUTH_LENGTH (128)

#define REDIS_INVALID_HANDLE (1)