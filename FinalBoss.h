#pragma once
#include <iostream>
#include "Character.h"
using namespace std;

class FinalBoss : public Character
{
private:
	int fireAttack;
	int lightningAttack;

public:
	//Constructor
	FinalBoss(int pHp, int pDmg, int pPX, int pPY, string pName, int pFireAttack, int pLightningAttack);

	//Getters
	int getFireAttack();
	int getLightningAttack();

	//Setters
	void setFireAttack(int pFireAttack);
	void setLightningAttack(int pLightningAttack);

	void printStats();
};
