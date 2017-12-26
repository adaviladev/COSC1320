// COSC 1320 Summer 2015
// Name: Adrian
// Homework 12
// This is my own work; I will not post
#include <iostream>
#include <cstdlib>
#include "ComputerPlayer.h"

using namespace std;


ComputerPlayer::ComputerPlayer(void)
{
}


ComputerPlayer::~ComputerPlayer(void)
{
}

int ComputerPlayer::getGuess(){
	int guess;
	guess = rand() % 100;
	cout << "The computer guessed " << guess << endl;
	return guess;
}