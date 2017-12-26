// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 3
// This is my own work; I will not post

#pragma once
#include <string>
#include "Administrator.h"
#include "HospitalEmployee.h"
#include "Receptionist.h"
using namespace std;

Receptionist::~Receptionist(void)
{
}

Receptionist::Receptionist() : Administrator('r' , "none" , 0 , "Talking"){
	answering = 'N';
}
Receptionist::Receptionist(char newRole, string newName, int newID, string newDept, char busyState) : Administrator(newRole , newName , newID , newDept){
	answering = busyState;
}
char Receptionist::getAnswering(){
	return answering;
}
void Receptionist::setAnswering(char busyState){
	answering = busyState;
}
string Receptionist::toString(){
	string str = " ";
	str += answering;
	return (Administrator::toString() + str);
}
bool Receptionist::equals(HospitalEmployee obj){
	if(obj.getID() == getID() && obj.getName() == getName() && obj.getRole() == getRole()){
		return true;
	} else {
		return false;
	}
}