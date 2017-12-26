// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 1
// This is my own work; I will not post

package programmingassignment1;

/**
 * 
 * @author Adrian Davila
 */
public class Surgeon extends Employee{
    String specialty;
    char operating;

    Surgeon(){
        operating = 'N';
    }
    Surgeon(char newRole , String newName , int newID , String spec , char inOp){
        super(newRole , newName , newID);
        specialty = spec;
        operating = inOp;
        addEmployee((Employee)this);
    }
    public void deleteEmployee(){
        deleteEmployee(getName() , getRole());
    }

    // Mutators
    public void setSpec(String newSpec){
        specialty = newSpec;
    }
    public void setOpStat(char opStat){
        operating = opStat;
    }
    // Accessors
    public String getSpec(){
        return specialty;
    }
    public char getOpStat(){
        return operating;
    }

    @Override
    public String toString(){
        return (super.toString() + " " + specialty + " " + operating);
    }
    @Override
    public String toString(boolean t){
        return (super.toString() + " Specialty: " + specialty + " Operating: " + operating);
    }
    @Override
    public boolean equals(Employee obj){
        if(obj == null){
            return false;
        }else if(getClass() != obj.getClass()){
            return false;
        }else{
            Surgeon otherSurge = (Surgeon)obj;
            return (getName().equals(otherSurge.getName()) && getRole() == otherSurge.getRole());
        }
    }
}
