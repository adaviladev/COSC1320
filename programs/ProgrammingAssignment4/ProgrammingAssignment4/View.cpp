// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 4
// This is my own work; I will not post

#pragma once
#include <iostream>
#include <string>
#include "View.h"
using namespace std;


View::View(void)
{
}


View::~View(void)
{
}

void View::showMenu(){
	const int menuLength = 6;
	string menu[menuLength] = {	"Show the inventory" ,
								"Search the inventory" ,
								"Display the customers",
								"Show a customer's info" ,
								"Show a customer's records",
								"Save and exit"};
	cout << endl;
	for(int i = 0; i < menuLength; i++){
		cout << (i+1) << " " << menu[i] << endl;
	}
	cout << endl;
}