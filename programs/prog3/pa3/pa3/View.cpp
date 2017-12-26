// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 3
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
	const int menuLength = 4;
	string menu[menuLength] = {"Add Employee" , "Delete Employee" , "Display Employees" , "Save and exit"};
	cout << endl;
	for(int i = 0; i < menuLength; i++){
		cout << (i+1) << " " << menu[i] << endl;
	}
	cout << endl;
}