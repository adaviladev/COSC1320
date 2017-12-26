#pragma once
#include <string>
#include "Email.h"
using namespace std;
	
Email::Email(void):Document(){

}
Email::Email(string sender, string recipient, string title , string body):Document(body){
	this->sender = sender;
	this->recipient = recipient;
	this->title = title;
}
Email::~Email(void){
}
string Email::getSender(){
	return sender;
}
string Email::getRecipient(){
	return recipient;
}
string Email::getTitle(){
	return title;
}
void Email::setSender(string newSender){
	sender = newSender;
}
void Email::setRecipient(string newRecipient){
	recipient = newRecipient;
}
void Email::setTitle(string newTitle){
	title = newTitle;
}
Email& Email::operator =(const Email& rtSide){
	Document::operator =(rtSide);
	recipient = rtSide.recipient;
	sender = rtSide.sender;
	title = rtSide.title;
	return *this;
}

