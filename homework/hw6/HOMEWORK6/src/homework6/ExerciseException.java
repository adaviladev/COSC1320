// COSC 1320 Summer 2015
// Name: Adrian
// Homework 6
// This is my own work; I will not post

package homework6;

public class ExerciseException extends Exception {
    public ExerciseException(){
        super("Exercise Exception thrown!");
        System.out.println("Exception thrown.");
    }
    public ExerciseException(String message){
        super(message);
        System.out.println("ExerciseException invoked with an argument.");
    }
}
