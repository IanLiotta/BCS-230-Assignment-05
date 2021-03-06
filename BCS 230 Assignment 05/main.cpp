// BCS 230 Assignment 05
// Ian Liotta

#include "stdafx.h"
#include <iostream>
#include <string>
#include "IntRomanType.h"
#include "RomanType.h"
using namespace std;

void intToRoman();
void romanToInt();

int main()
{
	int input = 0;

	// MAIN MENU
	do {
		cout << " 1.\tInteger to Roman\n";
		cout << " 2.\tRoman to Integer\n";
		cout << "-1.\tQuit\n\n";
		cin >> input;
		if (input == 1) {
			intToRoman();
			system("CLS");
		}
		else if (input == 2) {
			romanToInt();
			system("CLS");
		}
		else if (input != -1) {
			system("CLS");
			cout << "Please choose 1, 2, or -1.\n\n";
			// in case the user entered a non-integer, clear the failbit and buffer
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}

	} while (input != -1);
    return 0;
}

//	***	intToRoman ***
//	Accept an integer from 1-5000 inclusive, convert it to a roman numeral, and print the result.

void intToRoman() {
	int input = -1;
	IntRomanType roman;

	do {
		cout << "Enter an integer from 1 - 5,000 to be converted to Roman numerals.\n";
		cout << "(-1 to exit)\n";
		// Validate that the user entered an integer
		if (cin >> input) {
			system("CLS");
			// Validate the range of the integer
			if (input > 5000 || input < 1)
				cout << "Integer must be between 1 and 5,000 (-1 to exit.)\n\n";
			// Check that we are not quitting
			else if (input != -1) {
				// Perform the conversion and print the result
				roman.setNumInt(input);
				cout << roman.getNumInt() << " = " << roman.getNumRoman() << "\n\n";
			}
		}
		// If the user did not enter an integer, print an error, clear the failbit, and clear the buffer
		else {
			system("CLS");
			cout << "Please enter an integer.\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}

	} while (input != -1);
	system("CLS");
}


// ***	romanToInt	***
// Accept a roman numeral, convert it to int, and print the result

void romanToInt() {
	string input = "";
	size_t sentinel;
	RomanType roman;

	do {
		cout << "Enter a roman numeral to be converted to integer.\n";
		cout << "(-1 to exit)\n";
		// Input validation is done in RomanType::romanToPositiveInteger
		cin >> input;
		roman.setRoman(input);
		system("CLS");
		cout << input << " = ";
		roman.printPositiveInteger();
		cout << "\n\n";
		sentinel = input.find("-1");
	} while (sentinel == string::npos);

	system("CLS");
}