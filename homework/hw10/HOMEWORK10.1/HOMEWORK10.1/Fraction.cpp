// COSC 1320 Summer 2015
// Name: Adrian
// Homework 10
// This is my own work; I will not post

#include <iostream>
#include "Fraction.h"
using namespace std;

Fraction::Fraction(void){
}

Fraction::~Fraction(void){

}
void Fraction::setNumerator(int newNumerator){
	numerator = newNumerator;
}
void Fraction::setDenominator(int newDenominator){
	denominator = newDenominator;
}
double Fraction::getAsDouble(){
	return static_cast<double>(numerator) / denominator;
}
void Fraction::outputLowestTerms(){
	int gcd;
	gcd = findCommonDivisor(numerator , denominator);
	cout << (numerator / gcd) << "/" << (denominator / gcd) << endl;
}
int Fraction::findCommonDivisor(int num1, int num2){
	for(int i = num2; i > 0; i--){
		if(((num2 % i)==0) && ((num1 % i) ==0)){
			return i;
		}
	}
	return 1;
}
