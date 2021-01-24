/*
    # Description
    Return player login dialog or kick.

    # Index List
    0) accounts.account_id
    1) accounts.account_forum_id
    2) accounts.account_name
    3) accounts.account_password
*/
forward OnPlayerReceivedAccount(playerid);

/*
    # Description
    Return player characters (CHARACTER_PER_PAGE LIMIT)

    # Index List
    0) characters.character_id
    1) characters.character_account_id
    2) characters.character_name
    3) characters.character_skin
*/
forward OnPlayerReceivedCharacters(playerid);