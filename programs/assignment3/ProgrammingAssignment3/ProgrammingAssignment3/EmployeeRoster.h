// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 3
// This is my own work; I will not post

#ifndef __EMPLOYEE_ROSTER__
#define __EMPLOYEE_ROSTER__
#pragma once
#include "HospitalEmployee.h"
#include <string>
using namespace std;

const int MAX_SIZE = 20;

class EmployeeRoster
{
private:
	HospitalEmployee *empArr[MAX_SIZE];
	//string empArr[MAX_SIZE];
	int empCtr;
public:
	EmployeeRoster();
	~EmployeeRoster(void);
	void addEmployee();
	void deleteEmployee();
	void displayEmployee();
	void readFile();
	void writeFile();
};

#endif