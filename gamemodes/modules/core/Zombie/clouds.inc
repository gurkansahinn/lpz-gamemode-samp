enum E_Zombie {
	zID
    zSkin,
    zStateFlags,
    zMovementFlags
}

new ZombieInfo[MAX_ZOMBIE][E_Zombie];

// State Flags
enum(<<=1)
{
	ZOMBIE_ALIVE = 1,
    ZOMBIE_DEAD
}

// Movement Flags
enum(<<=1)
{
	ZOMBIE_IDLE = 1,
    ZOMBIE_CHASE
}