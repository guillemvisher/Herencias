#pragma once
#include <iostream>
#include "Character.h"
using namespace std;
class myHero : public Character
{
private:
	int fireBall;
	int lightning;
	int stamina;

public:
	//Constructor
	myHero(int pHp, int pDmg, int pPX, int pPY, string pName, int pfreezeAttack,int pStamina);

	//Getters
	int getFireBall();
	int getStamina();

	//Setters
	void setFireBall(int pFireBall);
	void setStamina(int pStamina);

};


