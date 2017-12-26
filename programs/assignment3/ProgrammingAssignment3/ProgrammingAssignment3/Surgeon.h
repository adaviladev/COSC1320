// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 3
// This is my own work; I will not post

#ifndef __SURGEON__
#define __SURGEON__
#pragma once
#include <string>
#include "HospitalEmployee.h"
#include "Doctor.h"
using namespace std;
class Surgeon : public Doctor
{
private:
	char operating;
public:
	Surgeon(void);
	Surgeon(char , string , int , string , char);
	~Surgeon(void);
	void setOpStat(char);
	char getOpStat();
	string toString();
	bool equals(HospitalEmployee);
};

#endif