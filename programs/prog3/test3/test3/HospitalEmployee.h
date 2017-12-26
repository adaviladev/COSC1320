// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 3
// This is my own work; I will not post
#ifndef __HospitalEmployee__
#define __HospitalEmployee__
#pragma once
#include <iostream>
#include <string>
using namespace std;
class HospitalEmployee{
private:
	string name;
	int idNumber;
	char role;
public:
	HospitalEmployee();
	HospitalEmployee(char , string , int);
    void deleteEmployee();
    char getRole();
    string getName();
    int getID();
    void setRole(char);
    void setName(string);
    void setID(int);
};/**/
#endif
