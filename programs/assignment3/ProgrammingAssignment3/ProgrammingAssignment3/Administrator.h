// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 3
// This is my own work; I will not post

#ifndef __ADMINISTRATOR__
#define __ADMINISTRATOR__
#pragma once
#include <string>
#include "HospitalEmployee.h"
using namespace std;
class Administrator : public HospitalEmployee
{
private:
	string department;
public:
	Administrator();
	~Administrator(void);
	Administrator(char , string , int , string);
	void setDept(string);
	string getDept();
	string toString();
	bool equals(HospitalEmployee);
};

#endif