// COSC 1320 Summer 2015
// Name: Adrian
// Homework 10
// This is my own work; I will not post

#pragma once

class Fraction{
	private:
		int numerator;
		int denominator;

		int findCommonDivisor(int , int);
	public:
		void setNumerator(int);
		void setDenominator(int);
		double getAsDouble();
		void outputLowestTerms();
		Fraction(void);
		~Fraction(void);
};

