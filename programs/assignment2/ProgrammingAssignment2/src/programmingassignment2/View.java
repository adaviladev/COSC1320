// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 2
// This is my own work; I will not post

package programmingassignment2;

import javax.swing.JFrame;
import java.awt.BorderLayout;

public class View extends JFrame{
    private final int WINDOW_WIDTH = 450;
    private final int WINDOW_HEIGHT = 500;
    View(){
        setTitle("Programming Assignment 2");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setSize(WINDOW_WIDTH , WINDOW_HEIGHT);
        setLayout(new BorderLayout());
    }
}
