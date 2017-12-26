// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 4
// This is my own work; I will not post

#pragma once
#include "Customer.h"
#include "Video.h"
#include <iostream>

using namespace std;

class Controller
{
private:
	int vidCtr;
	int custCtr;
	//int rentalsCtr;
	Customer *custArr[20];
	Video *vidArr[20];
	//string *rentals[10][20];

	void rentVideo(string);
public:
	Controller(void);
	~Controller(void);

	void displayInventory();
	void searchInventory();
	void displayCustomers();
	void displayCustomerInfo();
	void displayCustomerRecord();
	void readFile();
	void writeFile();
};

