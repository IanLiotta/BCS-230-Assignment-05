// BCS 230 Assignment 05
// Ian Liotta

#include "stdafx.h"
#include <string>
using namespace std;

class RomanType {
public:
	RomanType();
	RomanType(string initalNum);

	void setRoman(string setNum);
	void romanToPositiveInteger();
	void printPositiveInteger();
	void printRoman();
private:
	string romanNum;
	int num;

	void supportRomanToIntFunc(int, int&, int&);

};
