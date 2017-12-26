// COSC 1320 Summer 2015
// Name: Adrian
// Homework 10
// This is my own work; I will not post

//Data consists of two items: an amount of money for the account balance
//and a percentage for the interest rate.
#ifndef BANK_ACCOUNT
#define BANK_ACCOUNT
class BankAccount{
	public:
		BankAccount( double balance, double rate);
		//Initializes balance and rate according to arguments.
		BankAccount( int dollars, int cents, double rate);
		//Initializes the account balance to $dollars.cents. For a negative
		//balance both dollars and cents must be negative. Initializes the
		//interest rate to rate percent.
		BankAccount( int dollars, double rate);
		//Initializes the account balance to $dollars.00 and
		//initializes the interest rate to rate percent.
		BankAccount( );
		//Initializes the account balance to $0.00 and the interest rate
		//to 0.0%.
		void update( );
		//Postcondition: One year of simple interest has been added to the
		//account.
		void input( );
		void output( ) const;
		double getBalance( ) const;
		int getDollars( ) const;
		int getCents( ) const;
		double getRate( ) const; //Returns interest rate as a percentage.
		void setBalance( double balance);
		void setBalance( int dollars, int cents);
		//Checks that arguments are both nonnegative or both nonpositive.
		void setRate( double newRate);
		//If newRate is nonnegative, it becomes the new rate. Otherwise,
		//abort program.

	private:
		//A negative amount is represented as negative dollars and negative cents.
		//For example, negative $4.50 sets accountDollars to -4 and accountCents
		//to -50.
		int accountDollars; //of balance
		int accountCents; //of balance
		double rate; //as a percent
		int dollarsPart( double amount) const;
		int centsPart( double amount) const;
		int round( double number) const;
		double fraction( double percent) const;
		//Converts a percentage to a fraction. For example, fraction(50.3)
		//returns 0.503.
};
#endif