// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 3
// This is my own work; I will not post

#include "Doctor.h"
#include <iostream>
using namespace std;


Doctor::Doctor(void): HospitalEmployee(){
	specialty = "none";
}

Doctor::Doctor(char newRole, string newName, int newID, string newSpec) : HospitalEmployee(newRole , newName , newID){
	specialty = newSpec;
	//cout << "doc hit: " << specialty << endl;
}

Doctor::~Doctor(void)
{
}
string Doctor::getSpecialty(){
	return specialty;
}
void Doctor::setSpecialty(string newSpec){
	specialty = newSpec;
}
string Doctor::toString(){
	string str = "";
	str += HospitalEmployee::toString();
	str += " " + specialty;
	//cout << "spec: " << str << endl;
	return (str);
}
bool Doctor::equals(HospitalEmployee obj){
	if(obj.getID() == getID() && obj.getName() == getName() && obj.getRole() == getRole()){
		return true;
	} else {
		return false;
	}
}