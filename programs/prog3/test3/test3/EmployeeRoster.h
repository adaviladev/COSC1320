// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 3
// This is my own work; I will not post
#ifndef __EmployeeRoster__
#define __EmployeeRoster__
#pragma once
#include "HospitalEmployee.h"
#include <fstream>
#include <string>
using namespace std;
class EmployeeRoster
{
private:
    static const int MAX_SIZE = 20;
    HospitalEmployee empArr[MAX_SIZE];
    int EmployeeRosterCtr;
public:
	EmployeeRoster();
	void addEmployee(HospitalEmployee);
    void deleteEmployee(string , char);
    void displayEmployee(bool);
    void readFile();
    void writeFile();
};
#endif