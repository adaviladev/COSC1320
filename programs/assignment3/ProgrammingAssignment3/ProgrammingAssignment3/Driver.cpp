// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 3
// This is my own work; I will not post

#include <iostream>
#include <fstream>
#include "EmployeeRoster.h"
#include "View.h"
using namespace std;

int main(){
	View view;
	EmployeeRoster list1;
	list1.readFile();
	int option = 0;
	while(option != 4){
		cout << "Make a selection: " << endl;
		view.showMenu();
		cin >> option;
		switch(option){
		case 1:
			list1.addEmployee();
			break;
		case 2:
			list1.deleteEmployee();
			break;
		case 3:
			list1.displayEmployee();
			break;
		case 4:
			list1.writeFile();
			break;
		default:
			cout << "Command not recognized." << endl;
			break;
		}
	}
	cout << "Thank you for using this system! Session will now terminate." << endl;
	system("pause");
	exit(0);
	return 0;
}
