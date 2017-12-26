// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 1
// This is my own work; I will not post

package programmingassignment1;

/**
 * 
 * @author Adrian Davila
 */
public class Administrator extends Employee{
    String department;

    Administrator(){
        department = "";
    }
    Administrator(char newRole , String newName , int newID , String dpt){
        super(newRole , newName , newID);
        department = dpt;
        addEmployee((Employee)this);
    }

    public void deleteEmployee(){
        deleteEmployee(getName() , getRole());
    }

    // Mutators
    public void setDept(String newDept){
        department = newDept;
    }
    // Accessors
    public String getDept(){
        return department;
    }
    @Override
    public String toString(){
        return (super.toString() + " " + department);
    }
    @Override
    public String toString(boolean t){
        return (super.toString() + " Department: " + department);
    }
    @Override
    public boolean equals(Employee obj){
        if(obj == null){
            return false;
        }else if(getClass() != obj.getClass()){
            return false;
        }else{
            Administrator otherAdmin = (Administrator)obj;
            return (getName().equals(otherAdmin.getName()) && getRole() == otherAdmin.getRole());
        }
    }
}
