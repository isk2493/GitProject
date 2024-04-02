#include "Medic.h"
#include <iostream>

using namespace std;

Medic::Medic()
{
	hp = 60;
	attack = 0;
	heal = 10;
}
void Medic::doAttack()
{
	cout << "¸ÞµñÀÌ ÈúÀ» "<< heal << " Çß½À´Ï´Ù." << endl;
}

void Medic::doStatus()
{
	cout << "Ã¼·Â : " << hp << "Èú·® : " << heal << endl;
}

void Medic::doWalk()
{
	cout << "¸ÞµñÀÌ °È½À´Ï´Ù." << endl;
}
