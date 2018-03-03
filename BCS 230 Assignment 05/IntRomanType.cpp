#include "stdafx.h"
#include "IntRomanType.h"
#include <iostream>
using namespace std;

// Constructor - num has default value of 1
IntRomanType::IntRomanType(int num)
{
	setNumInt(num);
}

void IntRomanType::setNumInt(int num) {
	numInt = num;
	intToRoman();
}

void IntRomanType::intToRoman()
{
	int temp = numInt;
	numRoman = "";
	for (int i = 12; i >= 0; i--) {
		while ((temp / romanInts[i]) > 0) {
			numRoman += romanNums[i];
			temp -= romanInts[i];
		}
	}
}

int IntRomanType::getNumInt()
{
	return numInt;
}

string IntRomanType::getNumRoman()
{
	return numRoman;
}
