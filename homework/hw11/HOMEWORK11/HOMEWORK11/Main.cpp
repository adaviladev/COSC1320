#include <iostream>
#include <string>
#include "Document.h"
#include "Email.h"
#include "File.h"
using namespace std;

bool containsKeyword( const Document& docObject, string keyword){ 
	if ( docObject.getText().find( keyword) != string:: npos){
		return true;
	} else {
		return false; 
	}
} 

int main(){
	Email email1("kenrick@acm.org" , "joe@xyz.com" , "Hi there" , "Body text");
	Email email2("kenrick@uaa.alaska.edu" , "bob@xyz.com" , "Programming" , "Time to learn C++ programming");

	File file1("//path//to//file" , "this file contains C++ code");
	File file2("//path//to//otherFile" , "this file contains cooking recipes");
	
	if(containsKeyword(email1 , "C++")){
		cout << "Email 1 contains C++" << endl;
	}
	if(containsKeyword(email2 , "C++")){
		cout << "Email 2 contains C++" << endl;
	}
	if(containsKeyword(file1 , "C++")){
		cout << "File 1 contains C++" << endl;
	}
	if(containsKeyword(file2 , "C++")){
		cout << "File 2 contains C++" << endl;
	}
	cout << "Enter a character to exit." << endl;
	char wait;
	cin >> wait;
	return 0;
}