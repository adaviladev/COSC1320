// COSC 1320 Summer 2015
// Name: Adrian
// Homework
// This is my own work; I will not post

package homework6;

public class NegativeNumberException extends Exception{
    public NegativeNumberException(){
        super("Negative Number Exception!");
    }
    public NegativeNumberException(String message){
        super(message);
    }
}
