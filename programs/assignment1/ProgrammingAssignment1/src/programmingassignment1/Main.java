// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 1
// This is my own work; I will not post

package programmingassignment1;

/**
 *
 * @author Adrian Davila
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        View view = new View();
        Employee.readFile("Programming Assignment 1 Data.txt");
        view.showMenu();
        Employee.writeFile("Programming Assignment 1 Data.txt");

        System.out.println("Hello World");
    }

}
