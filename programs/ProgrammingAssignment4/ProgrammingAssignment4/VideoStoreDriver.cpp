// COSC 1320 Summer 2015 
// Name: Adrian Davila
// Programming Assignment 4
// This is my own work; I will not post

#include <iostream>
#include <string>
#include "Video.h"
#include "Customer.h"
#include "Controller.h"
#include "View.h"

using namespace std;

int main(){
	Controller cont;
	View view;
	int option = 0;
	cont.readFile();
	
	while(option != 6){
		view.showMenu();
		cin >> option;
		switch(option){
		case 1:
			cont.displayInventory();
			break;
		case 2:
			cont.searchInventory();
			break;
		case 3:
			cont.displayCustomers();
			break;
		case 4:
			cont.displayCustomerInfo();
			break;
		case 5:
			cont.displayCustomerRecord();
			break;
		case 6:
			cont.writeFile();
			break;
		default:
			cout << "Input not recognized" << endl;
			break;
		}
	}
	
	return 0;
}