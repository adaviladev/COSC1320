// COSC 1320 Summer 2015
// Name: Adrian
// Homework 10
// This is my own work; I will not post
#include "HotDogStand.h"

HotDogStand::HotDogStand(void) : id(0), soldToday(0){
	/*intentionally left empty*/
}


HotDogStand::HotDogStand(int newID , int sold):id(newID) , soldToday(sold){
	soldAllStands+=sold;
}

int HotDogStand::soldAllStands = 0;

void HotDogStand::JustSold(){
	soldToday++;
	soldAllStands++;
}
int HotDogStand::getNumSold(){
	return soldToday;
}
int HotDogStand::getNumSoldAllStands(){
	return soldAllStands;
}