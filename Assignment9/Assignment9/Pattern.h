#pragma once
#include <iostream>
using namespace std;

class Pattern
{
private:
	int left;
	int length;

public:
	Pattern();
	Pattern(int newLeft, int newLength);
	void pattern(int left, int length);
};

