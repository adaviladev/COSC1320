// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 3
// This is my own work; I will not post

#ifndef __HOSPITALEMPLOYEE__
#define __HOSPITALEMPLOYEE__
#pragma once
#include <string>
//#include "EmployeeRoster.h"
using namespace std;
class HospitalEmployee
{
private:
	char role;
	string name;
	long int idNumber;
public:
	HospitalEmployee(void);
	HospitalEmployee(char , string , int);
	~HospitalEmployee(void);
	char getRole();
	string getName();
	int getID();
	void setRole(char);
	void setName(string);
	void setID(int);
	string toString();
	bool equals(HospitalEmployee);
};

#endif