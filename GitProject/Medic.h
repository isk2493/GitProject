#pragma once
#include "Unit.h"

class Medic : public Unit
{
private:
public:
	Medic();
	void doWalk();
	void doAttack();
	void doStatus();
};