// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 4
// This is my own work; I will not post

#include "Controller.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

Controller::Controller(void)
{
	vidCtr = custCtr = 0;
}


Controller::~Controller(void)
{
}

void Controller::displayInventory(){
	for(int i = 0; i < vidCtr; i++){
		cout << (*vidArr[i]).toString() << endl;
	}
}

void Controller::searchInventory(){
	string query;
	cout << "Which video are you looking for? " << endl;
	cin >> ws;
	getline(cin, query);
	for(int i = 0; i < vidCtr; i++){
		if((*vidArr[i]).getTitle() == query){
			if((*vidArr[i]).getQuantity() > 0){
				cout << "Match found. Would you like to rent this video? (Y/N) ";
				char option;
				cin >> option;
				if(toupper(option)== 'Y'){
					(*vidArr[i]).decrementCopies();
					rentVideo(query);
				} else if(toupper(option) == 'N'){
					return;
				}
			} else {
				cout << "No more copies of " << query << " are left." << endl;
			}
		}
	}
}

void Controller::rentVideo(string query){
	int idNum;
	cout << "Enter customer ID: ";
	cin >> idNum;
	for(int i = 0; i < custCtr; i++){
		if((*custArr[i]).getID() == idNum){
			(*custArr[i]).addRental(query);
		}
	}
}
void Controller::displayCustomers(){
	for(int i = 0; i < custCtr; i++){
		cout << (*custArr[i]).toString();
	}
}
void Controller::displayCustomerInfo(){
	cout << "Enter a last name: ";
	string surname;
	cin >> surname;
	for(int i = 0; i < custCtr; i++){
		if((*custArr[i]).getLastName() == surname){
			cout << (*custArr[i]).toString() << endl;
		}
	}
}
void Controller::displayCustomerRecord(){
	int idNum;
	cout << "Enter Customer's ID: ";
	cin >> idNum;
	for(int i = 0; i < custCtr; i++){
		if((*custArr[i]).getID() == idNum){
			cout << (*custArr[i]).getRentals() << endl;
		}
	}
}
void Controller::readFile(){
	ifstream fin;
    try{
        //Attempt to open the file
		fin.open("Programming Assignment 4 Data.txt");
        string title, star1, star2, producer, director, prodCo;
        int amount;/**/
		fin >> vidCtr;
		char ch;
		//after getting first line, loops that many times to get the inventory
		for(int i = 0; i < vidCtr; i++){
			fin.get(ch);
			getline(fin,title);
			getline(fin,star1);
			getline(fin,star2);
			getline(fin,producer);
			getline(fin,director);
			getline(fin,prodCo);
			fin >> amount;
			vidArr[i] = new Video(title , star1 , star2 , producer , director , prodCo , amount);
        }/**/
		string str, fName, lName, temp[50], token;
		int id, ctr = 0, listCtr = 0, rentalsCtr = 0;
		//gets the remaining lines and either makes a new character or adds details to the rentals array
		fin.get(ch);
		while(!fin.eof()){
			getline(fin , str);
			stringstream ss(str);
			while(getline(ss , token , ',')){
				temp[ctr] = token;
				ctr++;
				listCtr++;
			}
			if(temp[0].length() > 1){
				fName = temp[0];
				lName = temp[1];
				id = stoi(temp[2]);
				custArr[custCtr] = new Customer(fName , lName , id);
				custCtr++;
			} else {
				id = stoi(temp[0]);
				for(int x = 0; x < custCtr; x++){
					if((*custArr[x]).getID() == id){
						for(int a = 0; a < listCtr-1; a++){
							int b = a+1;
							string *tempStr = new string(temp[b]);
							(*custArr[x]).addRental(*tempStr);
						}
					}
				}
				rentalsCtr++;
			}/**/
			ctr = 0;
			listCtr = 0;
		}
        fin.close();
    } catch(exception e){
        //Executed if the file is not found
        cout << "File not found.\n";
		system("pause");
        exit(0);
	}
}

void Controller::writeFile(){
	ofstream fout;
	fout.open("Programming Assignment 4 Data.txt");
	fout << vidCtr << endl;
	for(int i = 0; i < vidCtr; i++){
		fout << (*vidArr[i]).toString();
		//fout << (*vidArr[i]).getQuantity() << endl;
	}
	for(int j = 0; j < custCtr; j++){
		fout << (*custArr[j]).toString();
	}
	for(int k = 0; k < custCtr; k++){
		int cnt = (*custArr[k]).getRentalCount();
		if(cnt > 0){
			fout << (*custArr[k]).getID() << ',';
			for(int m = 0; m < cnt; m++){
				fout << (*custArr[k]).getRentals() << endl;
			}
		}
	}/**/
	fout.close();
}
