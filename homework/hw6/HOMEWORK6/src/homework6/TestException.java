// COSC 1320 Summer 2015
// Name: Adrian
// Homework 6
// This is my own work; I will not post

package homework6;

public class TestException extends Exception{
    public TestException(){
        super("Test Exception thrown!");
        System.out.println("Test exception thrown!");
    }
    public TestException(String message){
        super(message);
        System.out.println("Test exception thrown with an argument!");
    }
    public void testMEthod(){
        System.out.println("Message is " + getMessage());
    }
}
