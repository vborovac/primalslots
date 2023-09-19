#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
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

