#pragma once
#include <string>
#include "Document.h"
using namespace std;
class Email : public Document{
public:
	Email(void);
	Email(string , string , string , string);
	~Email(void);
	string getSender();
	string getRecipient();
	string getTitle();
	void setSender(string);
	void setRecipient(string);
	void setTitle(string);
	Email& operator =(const Email& rtSide);
private:
	string sender , recipient , title;
};