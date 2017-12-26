#pragma once
#include <string>
using namespace std;

class Document{
public:
	Document(void);
	~Document(void);
	Document(string newText);
	string getText() const;
	void setText(string newText);
	Document& operator =(const Document& rtSide);
private:
	string text;
};