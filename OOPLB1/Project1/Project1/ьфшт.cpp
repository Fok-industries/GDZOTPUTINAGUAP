#include<iostream>
#define _USE_MATH_DEFINES
#include<math.h>
#include "Header.h"

using namespace std;

	int main() {
		setlocale(LC_ALL, "Russian");
		cout << "������� ������� :" << endl;
		int Gr;
		cin >> Gr;
		cout << "������� ������� ������ :" << endl;
		int Mn;
		cin >> Mn;
		cout << "������� ������� ������� :" << endl;
		int Sc;
		cin >> Sc;

		prevoshodstva Radian;
		Radian.Setgradus(Gr);
		Radian.Setmin(Mn);
		Radian.Setsec(Sc);
		Radian.Getgradus();
		Radian.Getmin();
		Radian.Getsec();
		Radian.ToRadians();
		return 0;
	}