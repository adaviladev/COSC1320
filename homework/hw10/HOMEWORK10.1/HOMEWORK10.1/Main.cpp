// COSC 1320 Summer 2015
// Name: Adrian
// Homework 10
// This is my own work; I will not post

#include <iostream>
#include "Fraction.h"
using namespace std;

int main(int argc, char* argv[])
{
	Fraction f1 , f2;

	f1.setNumerator(25);
	f1.setDenominator(20);
	f2.setNumerator(7);
	f2.setDenominator(3);

	cout << f1.getAsDouble() << endl;
	cout << f2.getAsDouble() << endl;
	f1.outputLowestTerms();
	f2.outputLowestTerms();
	int getkey;
	cin >> getkey;
	return 0;
}

