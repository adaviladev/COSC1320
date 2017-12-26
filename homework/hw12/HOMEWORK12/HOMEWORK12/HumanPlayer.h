// COSC 1320 Summer 2015
// Name: Adrian
// Homework 12
// This is my own work; I will not post
#pragma once
#include "player.h"
class HumanPlayer : public Player{
public:
	HumanPlayer(void);
	~HumanPlayer(void);
	int getGuess();
};

