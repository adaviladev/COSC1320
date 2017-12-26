// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 3
// This is my own work; I will not post
//#include "HospitalEmployee.h"
#include "Administrator.h"
#include "Doctor.h"
#include "EmployeeRoster.h"
#include "Janitor.h"
#include "Nurse.h"
#include "Receptionist.h"
#include "Surgeon.h"
#include <iostream>
#include <fstream>
using namespace std;


EmployeeRoster::EmployeeRoster(){
	empCtr = 0;
	HospitalEmployee empArr[MAX_SIZE];
}


EmployeeRoster::~EmployeeRoster(void)
{
}

void EmployeeRoster::addEmployee(){
	char newRole;
	string newName;
	int newID;
	string newSpec;
	int ptCnt;
	string newDept;
	char working;
	cout << "Enter a role: ";
	cin >> newRole;
	cout << "Enter employee's name: ";
	cin >> newName;
	cout << "Enter employee's ID number: ";
	cin >> newID;
	// after getting preliminary data, it enters this flow statement to invoke the appropriate constructor
    if(newRole == 'h'){
        HospitalEmployee *hosEmp = new HospitalEmployee(newRole , newName , newID);
		empArr[empCtr] = hosEmp;
	} else if(newRole == 'd'){
		cout << "Enter the Doctor's specialty: ";
		cin >> newSpec;
		HospitalEmployee *doc = new Doctor(newRole , newName , newID , newSpec);
		empArr[empCtr] = doc;
		empCtr++;
	} else if(newRole == 's'){
		cout << "Enter the Surgeon's specialty: ";
		cin >> newSpec;
		cout << "Is the Surgeon operating? ";
		cin >> working;
		HospitalEmployee *surgeon = new Surgeon(newRole , newName , newID , newSpec , working);
		empArr[empCtr] = surgeon;
		empCtr++;
	} else if(newRole == 'n'){
		cout << "Enter the Nurse's patient count: ";
		cin >> ptCnt;
        HospitalEmployee *nurse = new Nurse(newRole , newName , newID , ptCnt);
        empArr[empCtr] = nurse;
		empCtr++;
	} else if(newRole == 'a'){
		cout << "Enter Administrator's department: ";
        cin >> newDept;
		HospitalEmployee *admin = new Administrator(newRole , newName , newID , newDept);
		empArr[empCtr] = admin;
		empCtr++;
	} else if(newRole == 'r'){
		cout << "Enter the Receptionist's department: ";
		cin >> newDept;
		cout << "Is the Receptionist answering the phone? ";
		cin >> working;
		HospitalEmployee *rec = new Receptionist(newRole , newName , newID , newDept , working);
		empArr[empCtr] = rec;
		empCtr++;
	} else if(newRole == 'j'){
		cout << "Enter the Janitor's department: ";
        cin >> newDept;
		cout << "Is the Janitor sweeping the floor? ";
        cin >> working;
        HospitalEmployee *jan = new Janitor(newRole , newName , newID , newDept , working);
        empArr[empCtr] = jan;
		empCtr++;
	} else {
		cout << "Role not recognized." << endl;
	}
}

void EmployeeRoster::deleteEmployee(){
	string empName;
	char empRole;
	cout << "Enter a role: ";
	cin >> empRole;
	cout << "Enter a name: ";
	cin >> empName;
	int h = 0;
	for(int i = 0; i < empCtr; i++){

		if((*empArr[i]).getName() == empName && (*empArr[i]).getRole() == empRole){
			//if there is a match, the flag (h) is triggered
			h = 1;
			cout << "Match found" << endl;
		}
		//if the flag is triggered, the array is shifted to the left by one
		if(h == 1){
			//delete (*empArr[i]);
			empArr[i-h] = empArr[i];
		} else {
			empArr[i-h] = empArr[i];
		}
		if(h == 0 && i == empCtr-1){
			cout << "No match found." << endl;
		}
		cout << (*empArr[i]).toString() << endl;
	}
	empCtr--;
}

void EmployeeRoster::displayEmployee(){
	cout << endl;
	cout << "The hospital has the following employees:" << endl;
	// just loops through the array and displays the list
	for(int i = 0; i < empCtr; i++){
		cout << (*empArr[i]).toString() << endl;
	}
	cout << endl;
}

void EmployeeRoster::readFile(){
    ifstream fin;
    try{
        //Attempt to open the file
		fin.open("Programming Assignment 3 Data.txt");
        char newRole;
        string newName;
        int newID;
        string newSpec;
        int ptCnt;
        char working;
        string newDept;/**/
		while(!fin.eof()){
			fin >> newRole;
			fin >> newName;
			fin >> newID;
            if(fin.peek()){
                // reads role and calls corresponding class constructor after reading appropriate data
                if(newRole == 'h'){
                    HospitalEmployee *hosEmp = new HospitalEmployee(newRole , newName , newID);
					empArr[empCtr] = hosEmp;
					empCtr++;
				} else if(newRole == 'd'){
					fin >> newSpec;
					Doctor *doc = new Doctor(newRole , newName , newID , newSpec);
					empArr[empCtr] = doc;
					cout << (*empArr[empCtr]).toString() << endl;
					empCtr++;
				} else if(newRole == 'n'){
					fin >> ptCnt;
                    Nurse *nurse = new Nurse(newRole , newName , newID , ptCnt);
                    empArr[empCtr] = nurse;
					empCtr++;
				} else if(newRole == 's'){
					fin >> newSpec;
					fin >> working;
					Surgeon *surgeon = new Surgeon(newRole , newName , newID , newSpec , working);
					empArr[empCtr] = surgeon;
					empCtr++;
				} else if(newRole == 'a'){
                    fin >> newDept;
					Administrator *admin = new Administrator(newRole , newName , newID , newDept);
					empArr[empCtr] = admin;
					empCtr++;
				} else if(newRole == 'r'){
                    fin >> newDept;
                    fin >> working;
                    Receptionist *rec = new Receptionist(newRole , newName , newID , newDept , working);
                    empArr[empCtr] = rec;
					empCtr++;
				} else if(newRole == 'j'){
                    fin >> newDept;
                    fin >> working;
                    Janitor *jan = new Janitor(newRole , newName , newID , newDept , working);
                    empArr[empCtr] = jan;
					empCtr++;
				} else {
                    cout << "Role not found";/**/			
                }
            }
        }
        fin.close();
    } catch(exception e){
        //Executed if the file is not found
        cout << "File not found.";
		system("pause");
        exit(0);
	}
}

void EmployeeRoster::writeFile(){
	ofstream fout;
	fout.open("Programming Assignment 3 Data.txt");
	//opens/creates the above file and writes the data to it by invoking the toString() method
	for(int i = 0; i < empCtr; i++){
		fout << (*empArr[i]).toString() << endl;
	}
	fout.close();
}