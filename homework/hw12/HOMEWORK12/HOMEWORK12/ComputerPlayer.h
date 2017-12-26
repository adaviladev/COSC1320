// COSC 1320 Summer 2015
// Name: Adrian
// Homework 12
// This is my own work; I will not post
#pragma once
#include "player.h"
class ComputerPlayer :
	public Player
{
public:
	ComputerPlayer(void);
	~ComputerPlayer(void);
	int getGuess();
};

