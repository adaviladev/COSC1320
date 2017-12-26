// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 3
// This is my own work; I will not post

#include "Nurse.h"
#include <string>
#include <sstream>
using namespace std;

Nurse::Nurse(void)
{
}
Nurse::Nurse(char newRole , string newName , int newID , int ptCnt):HospitalEmployee(newRole , newName , newID){
	numPatients = ptCnt;
}

Nurse::~Nurse(void)
{
}
int Nurse::getPtCnt(){
	return numPatients;
}
void Nurse::setPtCnt(int ptCnt){
	numPatients = ptCnt;
}
string Nurse::toString(){
	ostringstream ss;
	long num = numPatients;
	ss << num;

	string str = " " + ss.str();
	return HospitalEmployee::toString() + str;
}