#include<iostream>
#define _USE_MATH_DEFINES
#include<math.h>
#include "prevoshodstva.h"

using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "������� ������� :" << endl;
	cin >> a;
	cout << "������� ������� ������ :" << endl;
	cin >> b;
	cout << "������� ������� ������� :" << endl;
	cin >> c;
	prevoshodstva Radian;
	Radian.Setgradus(a);
	Radian.Setmin(b);
	Radian.Setsec(c);
	Radian.Getgradus();
	Radian.Getmin();
	Radian.Getsec();
	Radian.ToRadians();
	return 0;
}