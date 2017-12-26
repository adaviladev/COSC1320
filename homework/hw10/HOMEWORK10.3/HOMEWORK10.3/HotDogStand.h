// COSC 1320 Summer 2015
// Name: Adrian
// Homework 10
// This is my own work; I will not post
#pragma once
class HotDogStand{
	private:
		int id;
		int soldToday;
		static int soldAllStands;
	public:
		HotDogStand();
		HotDogStand(int , int);
		void JustSold();
		int getNumSold();
		static int getNumSoldAllStands();
};

