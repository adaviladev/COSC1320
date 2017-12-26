// COSC 1320 Summer 2015
// Name: Adrian Davila
// Homework 6
// This is my own work; I will not post

package homework62;

public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        try
        {
            Account savings = new Account(100);
            savings.withdraw(50);
            System.out.println(savings.getBalance());
            //savings.withdraw(60);
            savings.deposit(-100);
            System.out.println(savings.getBalance());
        }
        catch(NonPositiveNumberException e)
        {
            System.out.println("Must deposit a positive amount.");
            System.out.println("Exception: " + e.getMessage());
        }
        catch(InsufficientFundsException e)
        {
            System.out.println("Not enough money!");
            System.out.println("Exception: " + e.getMessage());
        }
        catch(Exception e)
        {
            System.out.println("Exception: " + e.getMessage());
        }
    }

}
