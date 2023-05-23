#include "FinalBoss.h"
#include <iostream>
using namespace std;

//Constructores
FinalBoss::FinalBoss(int pHp, int pDmg, int pPX, int pPY, string pName, int pFireattack, int pLightningAttack) : Character(pHp, pDmg, pPX, pPY, pName) {
	fireAttack = pFireattack;
	lightningAttack = pLightningAttack;
}

//Getters
int FinalBoss::getFireAttack() {
	return fireAttack;
}
int FinalBoss::getLightningAttack() {
	return lightningAttack;
}
//Setters
void FinalBoss::setFireAttack(int pFireAttack) {
	fireAttack = pFireAttack;
}
void FinalBoss::setLightningAttack(int pLightningAttack) {
	lightningAttack = pLightningAttack;
}

void FinalBoss::printStats() {
	cout << "El enemigo final tiene una vida de " << getHp();
}