// COSC 1320 Summer 2015
// Name: Adrian
// Homework 
// This is my own work; I will not post

package homework62;

public class NonPositiveNumberException extends Exception{
    public NonPositiveNumberException(){
        super("Deposit amount must be positive.");
    }
}
