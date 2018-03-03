// BCS 230 Assignment 05
// Ian Liotta

#include "stdafx.h"
#include "RomanType.h"
#include <iostream>
#include <string>
using namespace std;


	RomanType::RomanType() {
		romanNum = "I";
		num = 1;
	}

	RomanType::RomanType(string initalNum) {
		romanNum = initalNum;
		romanToPositiveInteger();
	}

	void RomanType::setRoman(string setNum) {
		romanNum = setNum;
		romanToPositiveInteger();
	}

	void RomanType::romanToPositiveInteger() {
		int previous = 1000, sum = 0, i, length = romanNum.length();

		for (i = 0; i < length; i++) {
			switch (romanNum[i]) {
			case 'M':
			case 'm':
				supportRomanToIntFunc(1000, sum, previous);
				break;
			case 'D':
			case 'd':
				supportRomanToIntFunc(500, sum, previous);
				break;
			case 'C':
			case 'c':
				supportRomanToIntFunc(100, sum, previous);
				break;
			case 'L':
			case 'l':
				supportRomanToIntFunc(50, sum, previous);
				break;
			case 'X':
			case 'x':
				supportRomanToIntFunc(10, sum, previous);
				break;
			case 'V':
			case 'v':
				supportRomanToIntFunc(5, sum, previous);
				break;
			case 'I':
			case 'i':
				supportRomanToIntFunc(1, sum, previous);
				break;
			// If another character is found end with an error value
			default:
				num = -1;
				return;
			}
			num = sum;
		}
	}

	void RomanType::printPositiveInteger(){
		if (num == -1)
			cout << "Error: Invalid roman numeral";
		else
			cout << num;
	}

	void RomanType::printRoman(){
		cout << romanNum;
	}

	void RomanType::supportRomanToIntFunc(int factor, int& sum, int& previous) {
		sum += factor;
		if (previous < factor)
			sum -= 2 * previous;
		previous = factor;
	}
