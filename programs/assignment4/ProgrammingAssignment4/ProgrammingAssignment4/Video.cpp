// COSC 1320 Summer 2015 
// Name: Adrian Davila
// Programming Assignment 4
// This is my own work; I will not post

#include <sstream>
#include "Video.h"


Video::Video(void)
{
}

Video::Video(string theTitle, string theStar1, string theStar2, string theProd, string theDir, string theCo, int amount){
	title = theTitle;
	star1 = theStar1;
	star2 = theStar2;
	producer = theProd;
	director = theDir;
	prodCo = theCo;
	copies = amount;
}

Video::~Video(void)
{
}

string Video::getTitle(){
	return title;
}
string Video::getStar1(){
	return star1;
}
string Video::getStar2(){
	return star2;
}
string Video::getProducer(){
	return producer;
}
string Video::getDirector(){
	return director;
}
string Video::getCompany(){
	return prodCo;
}
int Video::getQuantity(){
	return copies;
}
void Video::setTitle(string newTitle){
	title = newTitle;
}
void Video::setStar1(string newStar){
	star1 = newStar;
}
void Video::setStar2(string newStar){
	star2 = newStar;
}
void Video::setProducer(string newPro){
	producer = newPro;
}
void Video::setDirector(string newDir){
	director = newDir;
}
void Video::setCompany(string newCo){
	prodCo = newCo;
}
void Video::setQuantity(int amount){
	copies = amount;
}
void Video::incrementCopies(){
	copies++;
}
void Video::decrementCopies(){
	copies--;
}
string Video::toString(){	
	ostringstream oss;
	oss << copies;
	string str = "";
	str += title;
	str += "\n";
	str += star1;
	str += "\n";
	str += star2;
	str += "\n";
	str += producer;
	str += "\n";
	str += director;
	str += "\n";
	str += prodCo;
	str += "\n";
	str += oss.str();
	str += "\n";
	return str;
}