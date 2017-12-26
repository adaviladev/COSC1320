// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 1
// This is my own work; I will not post

package programmingassignment1;

/**
 * 
 * @author Adrian Davila
 */
public class Receptionist extends Employee{
    String department;
    private char answering;

    Receptionist(){
        department = "";
        answering = 'Y';
    }
    Receptionist(char newRole , String newName , int newID , String dept , char onCall){
        super(newRole , newName , newID);
        department = dept;
        answering = onCall;
        addEmployee((Employee)this);
    }

    public void deleteEmployee(){
        deleteEmployee(getName() , getRole());
    }

    // Mutators
    public void setDept(String newDept){
        department = newDept;
    }
    public void setworkStat(char workStat){
        answering = workStat;
    }
    // Accessors
    public String getDept(){
        return department;
    }
    public char getworkStat(){
        return answering;
    }

    @Override
    public String toString(){
        return (super.toString() + " "  + department + " " + answering);
    }
    @Override
    public String toString(boolean t){
        return (super.toString() + " Department: "  + department + " Answering: " + answering);
    }
    @Override
    public boolean equals(Employee obj){
        if(obj == null){
            return false;
        }else if(getClass() != obj.getClass()){
            return false;
        }else{
            Receptionist otherRec = (Receptionist)obj;
            return (getName().equals(otherRec.getName()) && getRole() == otherRec.getRole());
        }
    }
}
