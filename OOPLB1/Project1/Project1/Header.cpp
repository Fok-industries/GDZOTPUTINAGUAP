#include "Header.h"
#include<iostream>
#define _USE_MATH_DEFINES
#include<math.h>
using namespace std;

int prevoshodstva::Getgradus()
{
	return gradus;
}

int prevoshodstva::Getmin()
{
	return min;
}

int prevoshodstva::Getsec()
{
 return sec;
}

void prevoshodstva::Setgradus(int GRADUS)
{
	gradus = GRADUS;
}

void prevoshodstva::Setmin(int min)
{
	this->min = min;
}

void prevoshodstva::Setsec(int Secunda)
{
	sec = Secunda;
}

void prevoshodstva::ToRadians()
{
	cout << "Результат : ";
		radian = (gradus * M_PI / 180) + (min * M_PI / 10800) + (sec * M_PI / 648000);
			cout << radian << " Радиан" << endl;

		// Перевод градусов в радианы  radian=gradus * M_PI / 180;
	
		//Перевод угловых минут в радианы radian=min * M_PI / 10800; //  1/60 от радиана
	
		// "Перевод угловых секунд в радианы radian=sec * M_PI / 648000   1/60 от угловой минуты
}
