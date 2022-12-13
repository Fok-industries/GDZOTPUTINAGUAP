#pragma once
class prevoshodstva {

private:
	double radian;
	int gradus;
	int min;
	int sec;
public:
	int Getgradus();
	int Getmin();
	int Getsec();
	void Setgradus(int GRADUS);
	void Setmin(int min);
	void Setsec(int Secunda);
	void ToRadians();
};