// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 2
// This is my own work; I will not post

package programmingassignment2;

import javax.swing.JPanel;
import java.awt.BorderLayout;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.Color;

public class ElectricalCircuit extends JPanel{
    private boolean state = false;

    private int top = 159;
    private int bottom = top + 150;
    private int left = 25;
    private int right = 375;
    private int midX = (right + left)/2+16;
    private int midY = (top + bottom)/2;
    private Graphics wires;

    private String inputFile = "Programming Assignment 2 Data.txt";
    ElectricalCircuit(){
        setLayout(new BorderLayout());
        setVisible(true);
    }
    @Override
    public void paintComponent(Graphics g) {
        System.out.println("paintComponent");
        Graphics2D g2d = (Graphics2D) g;
        wires = g2d;
        drawSocket(g2d);
        g2d.drawLine(left, top, right, top);
        g2d.drawLine(right, top, right, bottom);
        g2d.drawLine(right, bottom, midX+10, bottom);
        g2d.drawLine(midX+10, bottom-20, midX+10, bottom+20);
        g2d.drawLine(midX-10, bottom-10, midX-10, bottom+10);
        g2d.drawLine(midX-10, bottom, left, bottom);
        g2d.drawLine(left, bottom, left, midY+20);
        g2d.drawLine(left, midY-20 , left, top);
        if(state){
//            System.out.println("onPaint: close");
            closeGate();
        } else {
//            System.out.println("onPaint: open");
            openGate();
        }
//        System.out.println("Finished painting.");
    }
    public void drawSocket(Graphics2D g){
        int var = 15;
        g.drawLine(midX-var, top-var, midX+var, top-var);
        g.drawLine(midX+var, top-var, midX+var, top+var);
        g.drawLine(midX+var, top+var, midX-var, top+var);
        g.drawLine(midX-var, top+var, midX-var, top-var);
        g.setBackground(Color.LIGHT_GRAY);
        g.fillRect(midX-var, top-var, 30, 30);
    }
    public void openGate(){
        try{
            state = false;
            wires.drawLine(left, midY+20, left+30, midY-15);
//            System.out.println("Open success: " + state);
        } catch(Exception e){
//            System.out.println("Open exception");
        }
    }
    public void closeGate(){
        try{
            state = true;
//            wires.dispose();
//            System.out.println("Close success: " + state);
            wires.drawLine(left, midY+20, left, midY-20);
        } catch (Exception e){
//            System.out.println("Close exception");
        }
    }
}
