// COSC 1320 Summer 2015
// Name: Adrian
// Homework 10
// This is my own work; I will not post

#include <iostream>
#include "BankAccount.h"
using namespace std;

//Returns true if the balance in account1 is greater than that
//in account2. Otherwise returns false.
bool isLarger( const BankAccount& account1, const BankAccount& account2);
void welcome( const BankAccount& yourAccount);

int main( ){
	BankAccount account1(6543.21, 4.5), account2;//
	welcome(account1);
	cout << "Enter data for account 2:\n";
	//account2.input( );
	if (isLarger(account1, account2)){
		cout << "account1 is larger.\n";
	} else {
		cout << "account2 is at least as large as account1.\n";
	}/**/
	return 0;
}

bool isLarger( const BankAccount& account1, const BankAccount& account2){
	return(account1.getBalance( ) > account2.getBalance( ));
}
void welcome( const BankAccount& yourAccount){
	cout << "Welcome to our bank.\n"
		<< "The status of your account is:\n";
	yourAccount.output( );
} 