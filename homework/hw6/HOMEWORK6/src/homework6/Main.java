// COSC 1320 Summer 2015
// Name: Adrian
// Homework 6
// This is my own work; I will not post

package homework6;

import homework62.Account;

public class Main {

    public static void main(String[] args) {
        // TODO code application logic here
        Account savings = new Account(100);
        savings.withdraw(50);
        System.out.println(savings.getBalance());
        savings.withdraw(60);
        savings.deposit(-100);
        System.out.println(savings.getBalance());
    }

}
