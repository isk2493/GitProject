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
	cout << "�޵��� ���� "<< heal << " �߽��ϴ�." << endl;
}

void Medic::doStatus()
{
	cout << "ü�� : " << hp << "���� : " << heal << endl;
}

void Medic::doWalk()
{
	cout << "�޵��� �Ƚ��ϴ�." << endl;
}
