#include <string>
#include "File.h"
using namespace std;

File::File(void)
{
}


File::~File(void)
{
}

File::File(string newPath, string body) : Document(body), pathname(newPath){
}
string File::getPathName(){
	return pathname;
}
void File::setPathName(string newPath){
	pathname = newPath;
}
File& File::operator =(const File& rtSide){
	Document::operator=(rtSide);
	pathname = rtSide.pathname;
	return *this;
}