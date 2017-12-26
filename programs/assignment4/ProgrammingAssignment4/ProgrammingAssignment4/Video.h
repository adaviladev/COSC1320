// COSC 1320 Summer 2015 
// Name: Adrian Davila
// Programming Assignment 4
// This is my own work; I will not post

#pragma once
#include <string>
using namespace std;
class Video{
private:
	string title;
	string star1;
	string star2;
	string producer;
	string director;
	string prodCo;
	int copies;
public:
	Video(void);
	Video(string , string , string , string , string , string , int);
	~Video(void);
	
	string getTitle();
	string getStar1();
	string getStar2();
	string getProducer();
	string getDirector();
	string getCompany();
	int getQuantity();
	
	void setTitle(string);
	void setStar1(string);
	void setStar2(string);
	void setProducer(string);
	void setDirector(string);
	void setCompany(string);
	void setQuantity(int);

	void incrementCopies();
	void decrementCopies();

	string toString();
};

