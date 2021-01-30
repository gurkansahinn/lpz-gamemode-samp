// Account

enum E_Account {
	pID,
    pForumID,
    bool:pLogged,
	pName[MAX_USER_NAME_LENGHT],
    pPassword[MAX_ACCOUNT_PASSWORD_LENGHT],
	pStateFlags,
    pStaffRoles,

    pCharacterPanelPage,
    pSelectedCharacter,

    pCameraZoom
}

new AccountInfo[MAX_PLAYERS][E_Account];

// State Flags
enum(<<=1)
{
	ACCOUNT_HASLOGGED = 1,
    ACCOUNT_BANNED
}

// Command Roles
enum(<<=1)
{
    CMD_DEVELOPER = 1,
    CMD_MANAGEMENT,
    CMD_SCRIPTER,
    CMD_LEADADMIN,
    CMD_ADMIN,
    CMD_HELPER,
    CMD_POLICE
}

// Character
enum E_Character {
    cID,
    cName[MAX_PLAYER_NAME],
    cSkin,
    cStateFlags,
    cMovementState,

    Float:cX,
    Float:cY,
    Float:cZ,
    Float:cA,

    cInterior,
    cWorld,

    Float:cHealth,
    Float:cArmour,

    Text3D:cNametagID
}

new CharacterInfo[MAX_PLAYERS][E_Character];

enum E_CharacterPanel {
    cSqlID,
    cName[MAX_PLAYER_NAME],
    cSkin
}

new CharacterPanelInfo[MAX_PLAYERS][CHARACTER_PER_PAGE][E_CharacterPanel];

// Staff
enum E_Staff {
    sStaffFlags,
    sSpecID,
    sSpecType,
    bool:sSpec,
    Float:sSpecX,
    Float:sSpecY,
    Float:sSpecZ,
    Float:sSpecA,
    sSpecInterior,
    sSpecWorld
}

new StaffInfo[MAX_PLAYERS][E_Staff];

// Staff Roles
enum(<<=1)
{
    psr_Dev = 1,
    psr_Management,
    psr_Scripter,
    psr_LeadAdmin,
    psr_GameAdmin,
    psr_Helper
}

// Staff Flags
enum(<<=1)
{
    STAFF_STATE_HIDDEN = 1,
    STAFF_STATE_ONDUTY,
    STAFF_STATE_DISABLED_WARNS
}

new PlayerStaffRoles[][] = 
{
    "Developer",
    "Management",
    "3rd Party Scripter",
    "Lead Admin",
    "Game Admin",
    "Helper"
};