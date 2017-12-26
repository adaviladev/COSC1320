// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 3
// This is my own work; I will not post

#pragma once
#include <string>
#include "Administrator.h"
#include "Janitor.h"
using namespace std;

Janitor::Janitor() : Administrator('j' , "none" , 0 , "Maintenance"){
	sweeping = 'N';
}


Janitor::~Janitor(void)
{
}
Janitor::Janitor(char newRole, string newName, int newID, string newDept, char busyState):Administrator(newRole , newName , newID , newDept){
	sweeping = busyState;
}
char Janitor::getSweeping(){
	return sweeping;
}
void Janitor::setSweeping(char busyState){
	sweeping = busyState;
}
string Janitor::toString(){
	string str = " ";
	str += sweeping;
	return (Administrator::toString() + str);
}
bool Janitor::equals(HospitalEmployee obj){
	if(obj.getID() == getID() && obj.getName() == getName() && obj.getRole() == getRole()){
		return true;
	} else {
		return false;
	}
}