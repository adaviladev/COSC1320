#pragma once
#include <string>
#include "Document.h"
using namespace std;
class File : public Document{
public:
	File();
	File(string path, string body);
	~File();
	string getPathName();
	void setPathName(string);
	File& operator =(const File& rtSide);
private:
	string pathname;
};

