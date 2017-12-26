// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 1
// This is my own work; I will not post

package programmingassignment1;

/**
 * 
 * @author Adrian Davila
 */
public class Doctor extends Employee{
    String specialty;

    Doctor(){
        specialty = "";
    }
    Doctor(char newRole , String newName , int newID , String newSpec){
        super(newRole , newName , newID);
        specialty = newSpec;
        addEmployee((Employee)this);
    }
    // Mutators
    public void deleteEmployee(){
        deleteEmployee(getName() , getRole());
    }
    public void setSpec(String newSpec){
        specialty = newSpec;
    }
    // Accessors
    public String getSpec(){
        return specialty;
    }
    @Override
    public String toString(){
        return (super.toString() + " " + specialty);
    }
    @Override
    public String toString(boolean t){
        return (super.toString() + " Specialty: " + specialty);
    }
    @Override
    public boolean equals(Employee obj){
        if(obj == null){
            return false;
        }else if(getClass() != obj.getClass()){
            return false;
        }else{
            Doctor otherDoc = (Doctor)obj;
            return (getName().equals(otherDoc.getName()) && getRole() == otherDoc.getRole());
        }
    }
}
