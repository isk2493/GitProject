#pragma once
#include "Unit.h"

class Marine : public Unit
{
public:
	int hp, attack, heal;
	void doWalk();
	void doAttack();
	void doStatus();
};