// COSC 1320 Summer 2015
// Name: Adrian
// Homework 10
// This is my own work; I will not post
#include <iostream>
#include "HotDogStand.h"
using namespace std;

int main(){
	HotDogStand stand0 , stand1(1 , 4) , stand2(2 , 0);

	cout << "All sales: " << stand0.getNumSoldAllStands() << endl;
	cout << "Two sales at stand 0" << endl;
	stand0.JustSold();
	stand0.JustSold();

	cout << "All sales: " << stand0.getNumSoldAllStands() << endl;	
	cout << "One sale at stand 1" << endl;
	stand1.JustSold();
	cout << "Three sales at stand 2" << endl;
	stand2.JustSold();
	stand2.JustSold();
	stand2.JustSold();
	
	cout << "All sales: " << stand0.getNumSoldAllStands() << endl;
	cout << "At stand 0 we sold: " << stand0.getNumSold() << endl;
	cout << "At stand 1 we sold: " << stand1.getNumSold() << endl;
	cout << "At stand 2 we sold: " << stand2.getNumSold() << endl;

	return 0;
}