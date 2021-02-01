// Account

enum E_Account {
	pID,
    pForumID,
    bool:pLogged,
	pName[MAX_USER_NAME_LENGHT],
    pPassword[MAX_ACCOUNT_PASSWORD_LENGHT],
	pStateFlags,
    pStaffRoles,

    pDialogPage,

    pCharacterPanelPage,
    pSelectedCharacter,

    pCreatorStage,
    pCreatorName[MAX_PLAYER_NAME],
    pCreatorGender,
    pCreatorDate[MAX_CHARACTER_DATE_LENGTH],
    pCreatorCountry,
    pCreatorLanguage,
    pCreatorSkin,
    pCreatorColour,
    Float:pCreatorWeight,
    Float:pCreatorHeight,

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

enum E_SKIN {
    sID
}

new Skins[][E_SKIN] =
{
    {1},
    {2},
    {95},
    {43}
};

new TurkishCharacters[][] =
{
    "ð", "Ð", "ç", "Ç", "þ", "Þ", "ü", "Ü", "ö", "Ö", "ý", "Ý"
};

enum E_COUNTRIES {
    cName[MAX_COUNTRIE_NAME_LENGTH],
    cTxd[MAX_COUNTRIE_TXD_LENGTH]
}

new Countries[][E_COUNTRIES] =
{
    {"Belirtilmemis", "mdl-4004:ab7"},
    {"Amerika", "mdl-4006:1abd"},
    {"Ingiltere", "mdl-4006:2ing"},
    {"Fransa", "mdl-4006:3fra"},
    {"Almanya", "mdl-4006:4alm"},
    {"Ispanya", "mdl-4006:5spain"},
    {"Cin", "mdl-4006:6cin"},
    {"Italya", "mdl-4006:7ital"},
    {"Japonya", "mdl-4006:8japon"},
    {"Rusya", "mdl-4006:9rus"},
    {"Kanada", "mdl-4006:10kan"},
    {"Avustralya", "mdl-4006:10Avu"},
    {"Hindistan", "mdl-4006:11hin"},
    {"Israil", "mdl-4006:12Isr"},
    {"Yeni Zelanda", "mdl-4006:13Yen"},
    {"Arnavutluk", "mdl-4006:14Arn"},
    {"Belcika", "mdl-4006:15Bel"},
    {"Brezilya", "mdl-4006:16Ber"},
    {"Irlanda", "mdl-4006:17Irl"},
    {"Isvec", "mdl-4006:18Isv"},
    {"Kosova", "mdl-4006:19Kosv"},
    {"Romanya", "mdl-4006:20rom"}
};

enum E_LANGUAGES {
    lName[MAX_LANGUAGE_NAME_LENGTH],
    lTxd[MAX_LANGUAGE_TXD_LENGTH]
}

new Languages[][E_LANGUAGES] =
{
    {"Belirtilmemis", "mdl-4004:ab7"},
    {"Fransizca", "mdl-4006:3fra"},
    {"Almanca", "mdl-4006:4alm"},
    {"Ispanyolca", "mdl-4006:5spain"},
    {"Cince", "mdl-4006:6cin"},
    {"Italyanca", "mdl-4006:7ital"},
    {"Japonca", "mdl-4006:8japon"},
    {"Rusca", "mdl-4006:9rus"},
    {"Hintce", "mdl-4006:11hin"},
    {"Ibranice", "mdl-4006:12Isr"},
    {"Maorice", "mdl-4006:13Yen"},
    {"Arnavutca", "mdl-4006:14Arn"},
    {"Felemenkce", "mdl-4006:15Bel"},
    {"Portekizce", "mdl-4006:16Ber"},
    {"Irlandaca", "mdl-4006:17Irl"},
    {"Isvecce", "mdl-4006:18Isv"},
    {"Arnavutca", "mdl-4006:19Kosv"},
    {"Rumence", "mdl-4006:20rom"}
};

new Genders[][] = 
{
    "Belirtilmemis",
    "Erkek",
    "Kadin"
};

new BlockedNames[][] =
{
    "John_Wick",
    "Rick_Grimes",
    "Daryl_Dixon",
    "Fena_Sikerim",
    "Anani_Sikeyim",
    "Fenasi_Kerim",
    "Alexis_Texas",
    "Johnny_Sins"
};

enum ColourData
{
	coName[MAX_COLOR_NAME_LENGTH],
	coEmbedValue[MAX_COLOR_EMBED_LENGTH]
}
new Colours[][ColourData] = 
{
	{"Yok", "{000000}"},
    {"Kahverengi", "{964B00}"}
};