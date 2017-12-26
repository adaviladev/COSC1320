// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 1
// This is my own work; I will not post

package programmingassignment1;

/**
 * 
 * @author Adrian Davila
 */
public class HospitalEmployee extends Employee {
    HospitalEmployee(){
        super();
    }
    HospitalEmployee(char newRole , String newName , int newID){
        super(newRole , newName , newID);
        addEmployee((Employee)this);
    }

    public void deleteEmployee(){
        deleteEmployee(getName() , getRole());
    }
    @Override
    public String toString(){
        return super.toString();
    }
    @Override
    public boolean equals(Employee obj){
        if(obj == null){
            return false;
        }else if(getClass() != obj.getClass()){
            return false;
        }else{
            HospitalEmployee otherHosEmp = (HospitalEmployee)obj;
            return (getName().equals(otherHosEmp.getName()) && getRole() == otherHosEmp.getRole());
        }
    }
}
