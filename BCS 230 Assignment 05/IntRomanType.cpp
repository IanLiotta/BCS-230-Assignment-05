// BCS 230 Assignment 05
// Ian Liotta

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
	// Iterate through the roman numerals from largest to smallest
	for (int i = 12; i >= 0; i--) {
		// int divide the integer by the value of the current roman numeral being checked
		// if the result is greater than 0, add the roman numeral to the string
		// and subtract its value from the integer
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
