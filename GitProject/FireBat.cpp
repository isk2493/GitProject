#define _CRT_SECURE_NO_WARNINGS
#include "FireBat.h"
#include <iostream>

using namespace std;
FireBat::FireBat() 
{
	attack = 10;
	hp = 100;
}
void FireBat::doWalk() 
{
	printf("�ĺ��� �̵��մϴ�.\n");
}
void FireBat::doAttack()
{
	printf("�ĺ��� %d(��)�� �����մϴ�.\n",attack);
}
void FireBat::doStatus()
{
	printf("ü��:%d ���ݷ�:%d\n",hp,attack);
}