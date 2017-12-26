// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 1
// This is my own work; I will not post

package programmingassignment1;

/**
 * 
 * @author Adrian Davila
 */
public class Janitor extends Employee{
    String department;
    private char sweeping;

    Janitor(){
        department = "";
        sweeping = 'N';
    }
    Janitor(char newRole , String newName , int newID , String dept , char cleaning){
        super(newRole , newName , newID);
        department = dept;
        sweeping = cleaning;
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
        sweeping = workStat;
    }
    // Accessors
    public String getDept(){
        return department;
    }
    public char getworkStat(){
        return sweeping;
    }

    @Override
    public String toString(){
        return (super.toString() + " "  + department + " " + sweeping);
    }
    @Override
    public String toString(boolean t){
        return (super.toString() + " Department: "  + department + " Sweeping: " + sweeping);
    }
    @Override
    public boolean equals(Employee obj){
        if(obj == null){
            return false;
        }else if(getClass() != obj.getClass()){
            return false;
        }else{
            Janitor otherJan = (Janitor)obj;
            return (getName().equals(otherJan.getName()) && getRole() == otherJan.getRole());
        }
    }
}
