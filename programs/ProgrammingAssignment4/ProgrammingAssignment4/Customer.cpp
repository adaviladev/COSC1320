// COSC 1320 Summer 2015 
// Name: Adrian Davila
// Programming Assignment 4
// This is my own work; I will not post

#include "Customer.h"
#include <sstream>
#include <iostream>

using namespace std;

Customer::Customer(void){
	fName = "No given name";
	lName = "No surname";
	id = -1;
	amountRented = 0;
}


Customer::~Customer(void)
{
}
Customer::Customer(string givenName, string surname, int newID){
	fName = givenName;
	lName = surname;
	id = newID;
	amountRented = 0;
}
string Customer::getFirstName(){
	return fName;
}
string Customer::getLastName(){
	return lName;
}
int Customer::getID(){
	return id;
}
void Customer::setFirstName(string givenName){
	fName = givenName;
}
void Customer::setLastName(string surname){
	lName = surname;
}
void Customer::setID(int newID){
	id = newID;
}
void Customer::addRental(string title){
	if(amountRented == 5){
		return;
	}
	//cout << amountRented << endl;
	currentRentals[amountRented] = new string(title);
	amountRented++;
}

void Customer::deleteRental(string title){	
	int h = 0;
	for(int i = 0; i < amountRented; i++){
		//if the flag is triggered, the array is shifted to the left by one
		if(h == 1){
			//delete (*empArr[i]);
			currentRentals[i-h] = currentRentals[i];
		}
		
		if((*currentRentals[i]) == title){
			//if there is a match, the flag (h) is triggered
			h = 1;
			cout << "Match found" << endl;
		}
		if(h == 0 && i == amountRented-1){
			cout << "No match found." << endl;
		}
	}
	if(h == 1){
		amountRented--;
	}
}
string Customer::getRentals(){
	if(amountRented == 0){
		return "No rentals";		
	}
	string str = "";
	for(int i = 0; i < amountRented; i++){
		//cout << "hit" << endl;
		//cout << currentRentals[i] << endl;
		if(i > 0){
			str += ",";
		}
		str += *currentRentals[i];
	}
	return str;
}
int Customer::getRentalCount(){
	return amountRented;
}

string Customer::toString(){
	ostringstream oss;
	oss << id;
	string str = "";
	str += fName + ",";
	str += lName + ",";
	str += oss.str();
	str += "\n";
	return str;
}