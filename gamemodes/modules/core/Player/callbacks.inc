task GlobalSecondTimer[1000]() 
{
    foreach(new p : Player)
    {
        if(AccountInfo[p][pCameraZoom] > 1)
        {
            new Float:x, Float:y, Float:z;

            GetPlayerPos(p, x, y, z);

            AccountInfo[p][pCameraZoom]--;

            SetPlayerCameraPos(p, x, y, z + (25.0 * AccountInfo[p][pCameraZoom]));
            SetPlayerCameraLookAt(p, x, y, z);
        }
        else if(AccountInfo[p][pCameraZoom] == 1)
        {
            AccountInfo[p][pCameraZoom] = 0;

            SetCameraBehindPlayer(p);
        }
    }
}