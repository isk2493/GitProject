#pragma once
class Unit
{
private:
	
public:
	int hp, attack, heal;
	virtual void doWalk()=0;
	virtual void doAttack() = 0;
	virtual void doStatus(int n1,int n2)=0;
	
};