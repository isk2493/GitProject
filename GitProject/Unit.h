#pragma once
class Unit
{
private:
	int hp;
public:
	Unit();
	virtual void doWalk()=0;
	virtual void doRun()=0;
	virtual void doHpStatus()=0;
};