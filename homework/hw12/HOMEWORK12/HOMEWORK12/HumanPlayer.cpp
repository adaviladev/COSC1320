// COSC 1320 Summer 2015
// Name: Adrian
// Homework 12
// This is my own work; I will not post

#include <iostream>
#include "HumanPlayer.h"

using namespace std;

HumanPlayer::HumanPlayer(void)
{
}


HumanPlayer::~HumanPlayer(void)
{
}

int HumanPlayer::getGuess(){
	int guess;
	cin >> guess;
	return guess;
}