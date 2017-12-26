// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 2
// This is my own work; I will not post

package programmingassignment2;

import java.awt.Color;
import java.awt.event.ActionEvent;
import javax.swing.JPanel;
import java.awt.Graphics;

public class LightBulb extends JPanel{
    private int centerX = 0;
    private int centerY = 0;
    private int width = 100;
    private int height = 100;
    private String flag = "Open";
    
    LightBulb(){
        super();
    }

    //@Override
    public void paint(Graphics g){
        if(flag.equals("Open")){
            g.setColor(Color.LIGHT_GRAY);
        } else {
            g.setColor(Color.YELLOW);
        }
        g.fillOval(centerX, centerY, width, height);
    }
    public void flipState(ActionEvent e){
        flag = e.getActionCommand();
        repaint();
    }
    public int getWidth(){
        return width;
    }
    public int getHeight(){
        return height;
    }
}
