// COSC 1320 Summer 2015 
// Name: Adrian Davila
// Programming Assignment 4
// This is my own work; I will not post

#pragma once
#include <string>

using namespace std;

	const int MAX = 5;
class Customer{
private:
	string fName;
	string lName;
	int id;
	int amountRented;
	string *currentRentals[MAX];
public:
	Customer(void);
	~Customer(void);
	Customer(string , string , int);
	string getFirstName();
	string getLastName();
	int getID();
	void setFirstName(string);
	void setLastName(string);
	void setID(int);
	void addRental(string);
	void deleteRental(string);
	string getRentals();
	int getRentalCount();
	string toString();
};

