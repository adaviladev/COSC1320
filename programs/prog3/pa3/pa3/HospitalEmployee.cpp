// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 3
// This is my own work; I will not post

#include <iostream>
#include <sstream>
#include "HospitalEmployee.h"
#include "EmployeeRoster.h"
#include <string>
using namespace std;


HospitalEmployee::HospitalEmployee(){
	role = 'h';
	name = "";
	idNumber = 0;
}
HospitalEmployee::HospitalEmployee(char newRole , string newName , int newID){
	role = newRole;
	name = newName;
	idNumber = newID;
	//EmployeeRoster::addEmployee(toString());
	//cout << "hit: " << idNumber << endl;
}


HospitalEmployee::~HospitalEmployee(void)
{
}

char HospitalEmployee::getRole(){
	return role;
}
string HospitalEmployee::getName(){
	return name;
}
int HospitalEmployee::getID(){
	return idNumber;
}
void HospitalEmployee::setRole(char newRole){
	role = newRole;
}
void HospitalEmployee::setName(string newName){
	name = newName;
}
void HospitalEmployee::setID(int newID){
	idNumber = newID;
}
string HospitalEmployee::toString(){
	ostringstream ss;
	long num = idNumber;
	ss << num;

	string str = "";
	str += role;
	str += " ";
	str += name;
	str += " ";
	str += ss.str();
	//cout << "str: " << str << endl;
	return str;
}