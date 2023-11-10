#pragma once

#include "Swordsman.h"
#include "Archer.h"

#include "Heavy.h"
#include "Crossbower.h"

class Spawner
{
public:
	virtual Range* spawn_range() = 0;
	virtual Melee* spawn_melee() = 0;
};

