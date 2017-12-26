// COSC 1320 Summer 2015
// Name: Adrian
// Homework 6
// This is my own work; I will not post

package homework6.a;

import homework6.MyException;

public class Main {

    public static void main(String[] args) {
        // TODO code application logic here
        int number;
        try{
            System.out.println("try block entered:");
            number = 42;
            if(number > 0){
                throw new MyException("Hi Mom!");
            }
            System.out.println("Leaving try block.");
        }catch(MyException exceptionObject){
            System.out.println(exceptionObject.getMessage());
        }
    }

}
