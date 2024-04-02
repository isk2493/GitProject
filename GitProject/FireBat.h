#include "Unit.h"

class FireBat :public Unit
{
public:
	FireBat();
	int hp, attack, heal;
	void Unit::doWalk();
	void Unit::doAttack();
	void Unit::doStatus();
};