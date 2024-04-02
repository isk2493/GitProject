#include <iostream>
#include "Marine.h"

using namespace std;

Marine::Marine()
{
	hp = 20;
	attack = 5;
}

void Marine::doAttack()
{
	printf("Attack! \n%d Damege", attack);
}

void Marine::doStatus()
{
	printf("HP: %d\nATK: %d", hp, attack);
}

void Marine::doWalk()
{
	printf("Marine Walk");
}
