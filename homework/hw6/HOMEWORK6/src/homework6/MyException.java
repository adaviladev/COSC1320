// COSC 1320 Summer 2015
// Name: Adrian
// Homework
// This is my own work; I will not post

package homework6;

public class MyException extends Exception {
    public MyException(){
        super("MyException thrown!");
    }
    public MyException(String message){
        super("MyException: " + message);
    }
}
