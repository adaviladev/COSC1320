// COSC 1320 Summer 2015
// Name: Adrian
// Homework 13
// This is my own work; I will not post

#pragma warning( disable : 4290 )
#include <iostream> 
#include "Account.h"
using namespace std; 


int main( ) {
	Account a(100);

	try{
		cout << "Deposit 50" << endl;
		cout << "The new balance is " << a.deposit(50) << endl;

		cout << "Deposit -25" << endl;
		cout << "The new balance is " << a.deposit(-25) << endl;
	} catch (NonPositiveDeposit){
		cout << "The amount to deposit must be positive." << endl;
	} catch (InvalidWithdrawalAmount){
		cout << "The withdrawal amount is invalid." << endl;
	}

	system("pause");
}
