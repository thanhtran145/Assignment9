#pragma once
#include <iostream>
#include <string>
#include <random>
using namespace std;

char inputChar(string prompt, char yes, char no);

class GuessNumber
{
private:
	int midPoint;
	int low;
	int high;
public:

	GuessNumber();

	int getMidPoint();
	int getLow();
	int getHigh();

	void setMidPoint(int);
	void setLow(int);
	void setHigh(int);

	void gameDisplay();
	void gameLogic(GuessNumber& game, char answer, int max, int min, int guesses);

};

