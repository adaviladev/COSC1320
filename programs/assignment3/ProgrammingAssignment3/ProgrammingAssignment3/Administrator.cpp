// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 3
// This is my own work; I will not post

#pragma once
#include <string>
#include "Administrator.h"
#include "HospitalEmployee.h"
using namespace std;

Administrator::~Administrator(void)
{
}
Administrator::Administrator() : HospitalEmployee('a' , "none" , 0){
	department = "none";
}
Administrator::Administrator(char newRole, string newName, int newID, string newDept) : HospitalEmployee(newRole , newName , newID){
	department = newDept;
}
void Administrator::setDept(string newDept){
	department = newDept;
}
string Administrator::getDept(){
	return department;
}
string Administrator::toString(){
	string str = " ";
	str += department;
	return (HospitalEmployee::toString() + str);
}
bool Administrator::equals(HospitalEmployee obj){
	if(obj.getID() == getID() && obj.getName() == getName() && obj.getRole() == getRole()){
		return true;
	} else {
		return false;
	}
}