// COSC 1320 Summer 2015
// Name: Adrian Davila
// 1 point credit
// This is my own work; I will not post

package homework25;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        // TODO code application logic here
        Scanner keyboard = new Scanner(System.in);
        System.out.println("Please enter your pet's name: ");
        String name = keyboard.next();
        System.out.println("Please enter your pet's age: ");
        int age = keyboard.nextInt();
        System.out.println("Please enter your pet's weight: ");
        double weight = keyboard.nextDouble();
        
        Pet animal = new Pet(name , age , weight);
        System.out.println("Pet's name: " + animal.getName());
        System.out.println("Pet's age: " + animal.getAge());
        System.out.println("Pet's weight: " + animal.getWeight());
    }

}
