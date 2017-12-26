// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 3
// This is my own work; I will not post

#pragma once
#include <iostream>
#include <string>
#include "HospitalEmployee.h"
#include "Surgeon.h"
using namespace std;


Surgeon::Surgeon() : Doctor('h' , "none" , 0 , "none"){
	operating = 'N';
}


Surgeon::~Surgeon(void)
{
}

Surgeon::Surgeon(char newRole, string newName, int newID, string newSpec, char inOp) : Doctor(newRole, newName, newID, newSpec){
	operating = inOp;
}
void Surgeon::setOpStat(char inOp){
	operating = inOp;
}
char Surgeon::getOpStat(){
	return operating;
}
string Surgeon::toString(){
	string str = " ";
	str += operating;
	return (Doctor::toString() + str);
}