#pragma once
#include <iostream>
using namespace std;

class Character
{
protected:
	//Atributes
	int hp;
	int dmg;
	int pX;
	int pY;
	string name;

public:
	//Constructor
	Character(int pHp, int pDmg, int pPX, int pPY, string pName);

	//Getters
	int getHp();
	int getDmg();
	int getPX();
	int getPY();
	string getName();
	//Setters
	void setHp(int pHp);
	void setDmg(int pDmg);
	void setPX(int pPCX);
	void setPY(int pPY);
	void setName(string pName);
};

