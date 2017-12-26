// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 3
// This is my own work; I will not post

#ifndef __DOCTOR__
#define __DOCTOR__
#pragma once
#include "HospitalEmployee.h"
#include <string>

using namespace std;

class Doctor : public HospitalEmployee
{
private:
	string specialty;
public:
	Doctor();
	Doctor(char , string , int , string);
	~Doctor(void);
	string getSpecialty();
	void setSpecialty(string);
	string toString();
};

#endif