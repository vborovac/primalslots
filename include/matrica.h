#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>

#ifdef _WIN32
	#include <windows.h>
	#define SLEEP(x) Sleep(x)
#else
	#include <unistd.h>
	#define SLEEP(x) usleep(x)
#endif

class Matrica
{
public :
	const int rows=4, cols=4;
    int matrix[4][4];
	int found;
	void Make();
	void Print();
	bool ThreeRow();
	bool FourRow();
	bool ThreeCol();
	bool FourCol();
};

