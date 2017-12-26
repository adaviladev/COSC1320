// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 1
// This is my own work; I will not post


package programmingassignment1;
import java.util.Scanner;
/**
 * 
 * @author Adrian Davila
 */
public class View {
    private Scanner keyboard = new Scanner(System.in);
    public void showMenu(){
        System.out.println("hit");
        String[] optArr = {"Add an employee" , "Delete an employee" , "Display all employees" , "Read from a file" , "Save to file" , "Exit"};
        int choice = 0;
        do{
            System.out.println("Please select an action: ");
            for(int i = 0; i < optArr.length; i++){
                System.out.println((i+1) + ": " + optArr[i]);                
            }
            choice = keyboard.nextInt();
            keyboard.nextLine();
            switch(choice-1){
                case 0:
                    enterEmployeeData();
                    break;
                case 1:
                    deleteEmployeeData();
                    break;
                case 2:
                    displayEmployeeData();
                    break;
                case 3:
                    readDataFromFile();
                    break;
                case 4:
                    writeDataToFile();
                    break;
                case 5:
                    System.out.println("System will now close.");
                    System.exit(0);
                    break;
                default:
                    System.out.println("Input not recognized.");
            }
        }while(choice != 5);
        
    }
    public void enterEmployeeData(){
        System.out.println("Enter a role:");
        char newRole = keyboard.next().charAt(0);
        System.out.println("Enter employee's name:");
        String newName = keyboard.next();
        System.out.println("Enter employee's ID number:");
        int newID = keyboard.nextInt();
        String newSpec;
        String newDept;
        int ptCnt;
        char working;
        // asks for role and calls corresponding class constructor after asking for appropriate data
        switch(newRole){
            case 'h':
                HospitalEmployee hosEmp = new HospitalEmployee(newRole , newName , newID);
                break;
            case 'd':
                System.out.println("Enter Doctor's specialty: ");
                newSpec = keyboard.next();
                Doctor doc = new Doctor(newRole , newName , newID , newSpec);
                break;
            case 's':
                System.out.println("Enter Surgeon's specialty: ");
                newSpec = keyboard.next();
                System.out.println("Is the Surgeon operating (Y/N)? ");
                working = keyboard.next().charAt(0);
                Surgeon surge = new Surgeon(newRole , newName , newID , newSpec , Character.toUpperCase(working));
                break;
            case 'n':
                System.out.println("Enter Nurse's number of patients: ");
                ptCnt = keyboard.nextInt();
                Nurse nurse = new Nurse(newRole , newName , newID , ptCnt);
                break;
            case 'a':
                System.out.println("Enter Administrator's department: ");
                newDept = keyboard.next();
                Administrator admin = new Administrator(newRole , newName , newID , newDept);
                break;
            case 'r':
                System.out.println("Enter Receptionist's department: ");
                newDept = keyboard.next();
                System.out.println("Is the Receptionist answering calls (Y/N)? ");
                working = keyboard.next().charAt(0);
                Receptionist rec = new Receptionist(newRole , newName , newID , newDept , Character.toUpperCase(working));
                break;
            case 'j':
                System.out.println("Enter Janitor's department: ");
                newDept = keyboard.next();
                System.out.println("Is the Janitor sweeping (Y/N)? ");
                working = keyboard.next().charAt(0);
                Janitor jan = new Janitor(newRole , newName , newID , newDept , Character.toUpperCase(working));
                break;
            default:
                System.out.println("Role not found");
                break;
        }
    }

    public void deleteEmployeeData(){
        System.out.println("Enter Employee's role that you would like to delete:");
        char empRole = keyboard.next().charAt(0);
        System.out.println("Enter Employee's name that you would like to delete:");
        String empName = keyboard.next();
        Employee.deleteEmployee(empName, empRole);
    }

    public void displayEmployeeData(){
        //I'm not sure why the Name isn't being displayed properly
        //It spits out "programmingassignment1.Class@hexCode"
        Employee.displayEmployees(true);
    }
    public void readDataFromFile(){
        System.out.println("Enter the file path: ");

        //String file = keyboard.nextLine();
        String file = "Programming Assignment 1 Data.txt";
        Employee.readFile(file);
    }
    public void writeDataToFile(){
        System.out.println("Enter the file path: ");
        //String file = keyboard.nextLine();
        String file = "Programming Assignment 1 Data.txt";
        Employee.writeFile(file);
    }
}
