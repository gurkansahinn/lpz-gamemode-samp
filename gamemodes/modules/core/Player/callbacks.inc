task GlobalSecondTimer[1000]() 
{
    foreach(new player : Player)
    {
        if(AccountInfo[player][pCameraZoom] > 1)
        {
            new Float:x, Float:y, Float:z;

            GetPlayerPos(player, x, y, z);

            AccountInfo[player][pCameraZoom]--;

            SetPlayerCameraPos(player, x, y, z + (25.0 * AccountInfo[player][pCameraZoom]));
            SetPlayerCameraLookAt(player, x, y, z);
        }
        else if(AccountInfo[player][pCameraZoom] == 1)
        {
            AccountInfo[player][pCameraZoom] = 0;

            SetCameraBehindPlayer(player);
        }
    }
    return 1;
}