// COSC 1320 Summer 2015
// Name: Adrian
// Homework 13
// This is my own work; I will not post

#include "Account.h"

Account::Account(void) : balance(0){
}


Account::~Account(void)
{
}

Account::Account(double initialDeposit) : balance(initialDeposit){
}
double Account::getBalance(){
	return balance;
}
double Account::deposit(double amount) throw (NonPositiveDeposit){
	if(amount > 0){
		balance += amount;
	} else {
		//return -1;
		throw NonPositiveDeposit();
	}
	return balance;
}
double Account::withdraw(double amount) throw (InvalidWithdrawalAmount){
	if((amount > balance) || (amount < 0)){
		//return -1;
		throw InvalidWithdrawalAmount();
	} else {
		balance -= amount;
	}
	return balance;
}