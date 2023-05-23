#include "Character.h"
#include <iostream>
using namespace std;

//Constructor
Character::Character(int pHp, int pDmg, int pPX, int pPY, string pName) {
	hp = pHp;
	dmg = pDmg;
	pX = pPX;
	pY = pPY;
	name = pName;
}



//Getters

int Character::getHp() {
	return hp;
}
int Character::getDmg() {
	return dmg;
}
int Character::getPX() {
	return pX;
}
int Character::getPY() {
	return pY;
}
string Character::getName() {
	return name;
}

//Setters
void Character::setHp(int pHp) {
	hp = pHp;
}
void Character::setDmg(int pDmg) {
	dmg = pDmg;
}
void Character::setPY(int pPY) {
	pY = pPY;
}
void Character::setPX(int pPX) {
	pX = pPX;
}
void Character::setName(string pName) {
	name = pName;
}