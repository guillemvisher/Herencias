#include "myHero.h"
#include <iostream>
using namespace std;

//Constructores
myHero::myHero(int pHp, int pDmg, int pPX, int pPY, string pName, int pFireBall, int pStamina) : Character(pHp, pDmg, pPX, pPY, pName) {
	fireBall = pFireBall;
	stamina = pStamina;
}

//Getters
int myHero::getFireBall() {
	return fireBall;
}
int myHero::getStamina() {
	return stamina;
}


//Setters

void myHero::setFireBall(int pFireBall) {
	fireBall = pFireBall;
}
void myHero::setStamina(int pStamina) {
	stamina = pStamina;
}
void printStats() {
	cout << "PLAYER STATS: \n";
	
}