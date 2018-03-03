// Ian Liotta
// BCS230 Lab 03 Task 03
// 2/15/18

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
