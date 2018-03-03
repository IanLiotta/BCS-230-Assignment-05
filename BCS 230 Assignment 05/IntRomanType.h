// BCS 230 Assignment 05
// Ian Liotta

#ifndef INTROMANTYPE_H
#define INTROMANTYPE_H

#include <iostream>
using namespace std;

class IntRomanType {
private:
	string romanNums[13] = { "I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M" };
	int romanInts[13] =    { 1,   4,    5,    9,   10,   40,  50,  90,   100,  400,  500, 900, 1000 };
	int numInt = 0;
	string numRoman = "";
public:
	IntRomanType(int num = 1);
	void setNumInt(int);
	void intToRoman();
	int getNumInt();
	string getNumRoman();
};

#endif // !INTROMANTYPE_H
