// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 3
// This is my own work; I will not post
#pragma once
#include "EmployeeRoster.h"
#include <iostream>
#include <string>
using namespace std;

EmployeeRoster::EmployeeRoster(){
	EmployeeRosterCtr = 0;
}

void EmployeeRoster::addEmployee(HospitalEmployee obj){
    empArr[EmployeeRosterCtr] = obj;
    //cout << obj.toString() << endl;
    EmployeeRosterCtr++;        
}
void EmployeeRoster::deleteEmployee(string empName , char empRole){
    int h = 0;
    for(int i = 0; i < EmployeeRosterCtr; i++){
        HospitalEmployee curObj = empArr[i];
        empArr[i-h] = curObj;
        if(empName == curObj.getName() && curObj.getRole() == empRole){
            h = 1;
            cout << "Delete match" << endl;
        }
        if(h == 1 && i == EmployeeRosterCtr-1){
            EmployeeRosterCtr--;
            cout << "hit" << endl;
        }
        if(h == 0 && i == EmployeeRosterCtr-1){
            cout << "EmployeeRoster not found. " + empName + " " + empRole << endl;
        }
    }
}

void EmployeeRoster::displayEmployee(bool t){
    char roleArr[] = {'h' , 'd' , 's' , 'n' , 'a' , 'r' , 'j'};
    string classArr[] = {"Hospital EmployeeRosters" , "Doctors" , "Surgeons" , "Nurses" , "Administrators" , " Receptionists" , " Janitors" };

    cout << "The hospital has the following EmployeeRosters:";
	int roleLength = (sizeof(roleArr) / sizeof(roleArr[0]));
    /*for(int i = 0; i < roleLength; i++){
        cout << classArr[i]);
        for(int j = 0; j < EmployeeRosterCtr; j++){
            if(empArr[j].getRole() == roleArr[i]){
                if(t){
                    cout << empArr[j].toString(true));
                }else{
                    cout << empArr[j].toString());
                }
            }
        }
    }*/
}

void EmployeeRoster::readFile(){
    ifstream fin;

    try{
        //Attempt to open the file
        fin.open("Programming Assignment 3 Data.txt");
                char newRole;
				string newName;
				int newID;
                /*string newSpec;
                string newDept;
                int ptCnt;
                char working;*/
		while(!fin.eof()){
			if(fin.peek()){
				fin >> newRole;
				fin >> newName;
				fin >> newID;
                // reads role and calls corresponding class constructor after reading appropriate data
                if(newRole == 'h'){
                    //cout << fin.nextInt());
                    HospitalEmployee hosEmp(newRole , newName , newID);
				} else {
                    cout << "Role not found";
                    //break;
                }
				/*} else if(newRole == 'd'){
                    fin >> newSpec;
                    Doctor doc = Doctor(newRole , newName , newID , newSpec);
				} else if(newRole == 's'){
                    fin >> newSpec;
                    fin >> working;
                    Surgeon surge = Surgeon(newRole , newName , newID , newSpec , working);
				} else if(newRole == 'n'){
                    ptCnt = fin.nextInt();
                    Nurse nurse = new Nurse(newRole , newName , newID , ptCnt);
				} else if(newRole == 'a'){
                    newDept = fin.next();
                    Administrator admin = new Administrator(newRole , newName , newID , newDept);
				} else if(newRole == 'r'){
                    newDept = fin.next();
                    working = fin.next().charAt(0);
                    Receptionist rec = new Receptionist(newRole , newName , newID , newDept , working);
				} else if(newRole == 'j'){
                    newDept = fin.next();
                    working = fin.next().charAt(0);
                    Janitor jan = new Janitor(newRole , newName , newID , newDept , working);*/
            }
        }
        fin.close();
    } catch(exception e){
        //Executed if the file is not found
        cout << "File not found.";
        exit(0);
    }
}

void EmployeeRoster::writeFile(){
	ofstream fout;
    try{
        //Attempt to open the file
        fout.open("Programming Assignment 3 Data.txt");
        cout << "Start writing";
        for(int i = 0; i < EmployeeRosterCtr; i++){
            //cout << i + ": " + empArr[i].toString());
			//fout << empArr[i].toString(true);
            //fout.println("halt");
        }
    } catch(exception e){
        //Executed if the file is not found
        cout << "File not found.";
        exit(0);
    }
    fout.close();
}
