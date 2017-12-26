// COSC 1320 Summer 2015
// Name: Adrian Davila
// 1 point credit
// This is my own work; I will not post

package homework26;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner keyboard = new Scanner(System.in);
        System.out.println("Please enter animal's name: ");
        String name = keyboard.next();
        System.out.println("Please enter animal's population: ");
        int age = keyboard.nextInt();
        System.out.println("Please enter animal's growthRate: ");
        double weight = keyboard.nextDouble();

        Animal animal = new Animal(name , age , weight);
        System.out.println("Animal's name: " + animal.getName());
        System.out.println("Animal's population: " + animal.getPopulation());
        System.out.println("Animal's growthRate: " + animal.getGrowthRate());
    }
}
