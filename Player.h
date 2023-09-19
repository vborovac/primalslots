#pragma once
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include "Matrica.h"
class Player : public Matrica
{
public :
	float money;
	std::string nick;
	int games;
	int stake;
public:
	Player() {
		money = 10.0;
		nick = "nn";
		games = 0;
		stake = 0;
	}
	void Play();
	void Stats();
	bool MCheck();
	void setPlayer();
	float GetM();
	void SetStake(int nstake);

};

