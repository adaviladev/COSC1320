// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 3
// This is my own work; I will not post

#ifndef __JANITOR__
#define __JANITOR__
#pragma once
#include <string>
using namespace std;

class Janitor : public Administrator
{
private:
	char sweeping;
public:
	Janitor(void);
	~Janitor(void);
	Janitor(char , string , int , string , char);
	char getSweeping();
	void setSweeping(char);
	string toString();
};

#endif
