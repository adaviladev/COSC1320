// COSC 1320 Summer 2015
// Name: Adrian
// Homework 6
// This is my own work; I will not post

package homework62;

/**
 * 
 * @author Adrian Davila
 */
public class Account{
    private double balance;

    public Account()
   {
        balance = 0;
    }

    public Account( double initialDeposit)
   {
       balance = initialDeposit;
   }

   public double getBalance()
   {
        return balance;
   } // returns new balance or - 1 if error

   public double deposit( double amount) throws NonPositiveNumberException
   {
       if ( amount > 0)
          balance += amount;
       else
           throw new NonPositiveNumberException();
          //return - 1; // Code indicating error

      return balance;
   } // returns new balance or - 1 if invalid amount

   public double withdraw( double amount) throws InsufficientFundsException
   {
       if (( amount > balance) || ( amount < 0))
           throw new InsufficientFundsException();
           //return - 1;
       else balance -= amount;
    return balance; }
}
