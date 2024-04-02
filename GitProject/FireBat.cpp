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
	printf("파벳이 이동합니다.\n");
}
void FireBat::doAttack()
{
	printf("파벳이 %d(으)로 공격합니다.\n",attack);
}
void FireBat::doStatus()
{
	printf("체력:%d 공격력:%d\n",hp,attack);
}