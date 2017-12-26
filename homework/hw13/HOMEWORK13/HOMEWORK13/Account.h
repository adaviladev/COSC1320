// COSC 1320 Summer 2015
// Name: Adrian
// Homework 13
// This is my own work; I will not post

#pragma once
class NonPositiveDeposit{

};

class InvalidWithdrawalAmount{

};
class Account
{
public:
	Account(void);
	~Account(void);
	Account(double initialDeposit);
	double getBalance();
	double deposit(double);
	double withdraw(double);
private:
	double balance;
};

