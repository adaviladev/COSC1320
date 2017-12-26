// COSC 1320 Summer 2015
// Name: Adrian Davila
// 1 point credit
// This is my own work; I will not post

/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package generic;

/**
 *
 * @author Adrian Davila
 */
public class Circle {
    private double radius;
    static double PI = 3.14;

    public Circle(double r){
        radius = r;
    }
    double getPerimeter(){
        return 2 * PI * radius;
    }
}
