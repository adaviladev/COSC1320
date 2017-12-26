// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 3
// This is my own work; I will not post
#include <iostream>
#include <fstream>
#include <string>
/*
#include "Janitor.h"
#include "Nurse.h"
#include "Receptionist.h"
#include "Administrator.h"
*/
using namespace std;
void readFile(){
    ifstream fin;
	string hosEmp[60];
	int empCtr = 0;

    try{
        //Attempt to open the file
        fin.open("Programming Assignment 3 Data.txt");
		cout << "file opened" << endl;
                char newRole;
				string newName;
				int newID;
                /*string newSpec;
                string newDept;
                int ptCnt;
                char working;*/
		while(!fin.eof()){
			//cout <<  " reading file " << endl;
			if(fin.good()){
				fin >> newRole;
				fin >> newName;
				fin >> newID;
				//cout << "role: " << newRole << " name: " << newName << " id: " << newID << endl;
                // reads role and calls corresponding class constructor after reading appropriate data
                if(newRole == 'h'){
					//cout << "ID: " << newID << endl;
                    hosEmp[empCtr] = " " + newRole;
					hosEmp[empCtr] += " " + newName;
					hosEmp[empCtr] += " " + newID;
				cout << "role: " << newRole << " name: " << newName << " id: " << newID << endl;
					hosEmp[empCtr] += " .";/**/
					cout << hosEmp[empCtr] << endl;
				} else {
                    //cout << "Role not found";
                    //break;
                }
            }
			empCtr++;
        }
        fin.close();
		system("pause");
    } catch(exception e){
        //Executed if the file is not found
        cout << "File not found.";
        exit(0);
    }
}
int main(){
	readFile();
	//EmployeeRoster list1;
	//list1.readFile();
	return 0;
}