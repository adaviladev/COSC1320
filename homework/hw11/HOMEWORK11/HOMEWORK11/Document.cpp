#pragma once
#include <string>
#include "Document.h"
using namespace std;

Document::Document(void): text(""){
}
Document::~Document(void){
}
Document::Document(string newText):text(newText){
}
string Document::getText() const{
	return text;
}
void Document::setText(string newText){
	text = newText;
}
Document& Document::operator =(const Document& rtSide){
	text = rtSide.text;
	return *this;
}