// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 1
// This is my own work; I will not post
#pragma once
#include "HospitalEmployee.h"
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
	cout << "HIT" << endl;
}

void HospitalEmployee::deleteEmployee(){
    //EmployeeRoster::deleteEmployee(getName() , getRole());
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
