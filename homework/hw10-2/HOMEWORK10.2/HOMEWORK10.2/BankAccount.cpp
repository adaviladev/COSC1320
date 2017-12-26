// COSC 1320 Summer 2015
// Name: Adrian
// Homework 10
// This is my own work; I will not post

#include <iostream>
#include <cmath>
#include <cstdlib>
#include "BankAccount.h"
using namespace std;

BankAccount::BankAccount( double balance, double rate) : accountDollars(dollarsPart(balance)), accountCents(centsPart(balance)) {
	setRate(rate);
}
BankAccount::BankAccount( int dollars, int cents, double rate){
	setBalance(dollars, cents);
	setRate(rate);
}
BankAccount::BankAccount( int dollars, double rate) : accountDollars(dollars), accountCents(0){
	setRate(rate);
}
BankAccount::BankAccount( ): accountDollars(0), accountCents(0), rate(0.0){ 
	/*Body intentionally empty.*/
}
void BankAccount::update( ){
	double balance = accountDollars + accountCents*0.01;
	balance = balance + fraction(rate)*balance;
	accountDollars = dollarsPart(balance);
	accountCents = centsPart(balance);
}
//Uses iostream:
void BankAccount::input( )
{
	double balanceAsDouble;
	cout << "Enter account balance $";
	cin >> balanceAsDouble;
	accountDollars = dollarsPart(balanceAsDouble);
	accountCents = centsPart(balanceAsDouble);
	cout << "Enter interest rate (NO percent sign): ";
	cin >> rate;
	setRate(rate);
}
//Uses iostream and cstdlib:
void BankAccount::output( ) const{
	int absDollars = abs(accountDollars);
	int absCents = abs(accountCents);
		cout << "Account balance: $";
	if (accountDollars > 0){
		cout << "-";
	}
	cout << absDollars;
	if (absCents >= 10){
		cout << "." << absCents << endl;
	} else {
		cout << "." << '0' << absCents << endl;
	}
	cout << "Rate: " << rate << "%\n";
}
double BankAccount::getBalance( ) const{
	return (accountDollars + accountCents * 0.01);
}
int BankAccount::getDollars( ) const{
	return accountDollars;
}

int BankAccount::getCents( ) const{
	return accountCents;
}

double BankAccount::getRate( ) const{
	return rate;
}
void BankAccount::setBalance( double balance)
{
	accountDollars = dollarsPart(balance);
	accountCents = centsPart(balance);
}

//Uses cstdlib:
void BankAccount::setBalance( int dollars, int cents)
{
	if ((dollars < 0 && cents > 0) || (dollars > 0 && cents < 0)){
		cout << "Inconsistent account data.\n";
		exit(1);
	}
	accountDollars = dollars;
	accountCents = cents;
}

//Uses cstdlib:
void BankAccount::setRate( double newRate)
{
	if (newRate >= 0.0){
		rate = newRate;
	} else {
		cout << "Cannot have a negative interest rate.\n";
		exit(1);
	}
}
int BankAccount::dollarsPart( double amount) const{
	return static_cast< int>(amount);
}
//Uses cmath:
int BankAccount::centsPart( double amount) const{
	double doubleCents = amount * 100;
	int intCents = (round(fabs(doubleCents))) % 100;
	//% can misbehave on negatives
	if (amount < 0){
		intCents = -intCents;
	}
	return intCents;
}

//Uses cmath:
int BankAccount::round( double number) const{
	return static_cast< int>(floor(number + 0.5));
}

double BankAccount::fraction( double percent) const{
	return (percent/100.0);
} 