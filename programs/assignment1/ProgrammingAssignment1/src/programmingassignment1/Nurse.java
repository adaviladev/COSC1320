// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 1
// This is my own work; I will not post

package programmingassignment1;

/**
 * 
 * @author Adrian Davila
 */
public class Nurse extends Employee{
    int numPatients;

    Nurse(){
        numPatients = 0;
    }
    
    Nurse(char newRole , String newName , int newID , int ptCnt){
        super(newRole , newName , newID);
        numPatients = ptCnt;
        addEmployee((Employee)this);
    }

    public void deleteEmployee(){
        deleteEmployee(getName() , getRole());
    }

    // Mutators
    public void setPtCnt(int ptCnt){
        numPatients = ptCnt;
    }
    // Accessors
    public int getPtCnt(){
        return numPatients;
    }

    @Override
    public String toString(){
        return (super.toString() + " " + numPatients);
    }
    @Override
    public String toString(boolean t){
        return (super.toString() + " Number of Patients: " + numPatients);
    }
    @Override
    public boolean equals(Employee obj){
        if(obj == null){
            return false;
        }else if(getClass() != obj.getClass()){
            return false;
        }else{
            Nurse otherNurse = (Nurse)obj;
            return (getName().equals(otherNurse.getName()) && getRole() == otherNurse.getRole());
        }
    }
}
