// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 3
// This is my own work; I will not post

#ifndef __RECEPTIONIST__
#define __RECEPTIONIST__
#pragma once
#include <string>
#include "Administrator.h"
#include "HospitalEmployee.h"
using namespace std;


class Receptionist : public Administrator
{
private:
	char answering;
public:
	Receptionist();
	~Receptionist(void);
	Receptionist(char , string , int , string , char);
	char getAnswering();
	void setAnswering(char);
	string toString();
};

#endif