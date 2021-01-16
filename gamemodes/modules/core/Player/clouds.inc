enum E_Account {
	pID,
    bool:pLogged,
	pName[MAX_USER_NAME_LENGHT],
	pStateFlags,
    pStaffRoles
}

new AccountInfo[MAX_PLAYERS][E_Account];

enum(<<=1)
{
	ACCOUNT_HASLOGGED = 1,
    ACCOUNT_BANNED
}

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

enum(<<=1)
{
    psr_Dev = 1,
    psr_Management,
    psr_Scripter,
    psr_LeadAdmin,
    psr_GameAdmin,
    psr_Helper
}

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

enum E_Character {
    cID
}

new CharacterInfo[MAX_PLAYERS][E_Character];

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