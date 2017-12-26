// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 3
// This is my own work; I will not post

#ifndef __NURSE__
#define __NURSE__
#pragma once
#include <string>
#include "HospitalEmployee.h"
using namespace std;
class Nurse : public HospitalEmployee
{
private:
	int numPatients;
public:
	Nurse();
	Nurse(char , string , int , int);
	~Nurse(void);
	int getPtCnt();
	void setPtCnt(int);
	string toString();
	bool equals(HospitalEmployee);
};

#endif