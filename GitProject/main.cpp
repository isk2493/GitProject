#include <iostream>
#include "Unit.h"
#include "FireBat.h"
#include "Marine.h"
#include "Medic.h"
using namespace std;
int main(void)
{
	Marine* marine1 = new Marine();
	FireBat* fireBat1 = new FireBat();
	Medic* medic1 = new Medic();

	marine1->doAttack();
	marine1->doWalk();
	marine1->doStatus();
	cout << endl;
	cout << endl;
	fireBat1->doAttack();
	fireBat1->doWalk();
	fireBat1->doStatus();
	cout << endl;
	medic1->doAttack();
	medic1->doWalk();
	medic1->doStatus();


	return 0;
}