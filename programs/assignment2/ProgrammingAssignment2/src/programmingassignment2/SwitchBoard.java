// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 2
// This is my own work; I will not post

package programmingassignment2;

import javax.swing.JTextField;
import javax.swing.JPanel;
import javax.swing.JButton;
import java.awt.BorderLayout;
import java.awt.FlowLayout;
import java.awt.Color;
import java.awt.Dimension;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

public class SwitchBoard extends JPanel implements ActionListener{

    private JTextField textField = new JTextField(20);
    private String state = "Circuit is currently open.";
    private LightBulb bulb;
    private ElectricalCircuit circuit;

    SwitchBoard(){
        bulb = new LightBulb();
        circuit = new ElectricalCircuit();
        bulb.setPreferredSize(new Dimension(bulb.getWidth() , bulb.getHeight()));
        JPanel buttonPanel = new JPanel();
        buttonPanel.setBackground(Color.LIGHT_GRAY);
        buttonPanel.setLayout(new FlowLayout());

        JButton openButton = new JButton("Open");
        openButton.addActionListener(this);
        buttonPanel.add(openButton);//, BorderLayout.WEST
        JButton closeButton = new JButton("Closed");
        closeButton.addActionListener(this);
        buttonPanel.add(closeButton);//, BorderLayout.EAST
        bulb.setVisible(true);
        bulb.setVisible(true);
        buttonPanel.setVisible(true);

        textField.setText(state);
        textField.setEditable(false);
        textField.setHorizontalAlignment(JTextField.CENTER);
        buttonPanel.add(textField);//
        
        add(buttonPanel);//, BorderLayout.NORTH
        add(circuit, BorderLayout.CENTER);
        add(bulb , BorderLayout.SOUTH);//
    }
    public void actionPerformed(ActionEvent e) {
        try
        {
            printStatus(e);
        }
        catch (Exception e2)
        {
            textField.setText("Error: Unrecognized action.");
        }
    }

    public void printStatus(ActionEvent e){
        String action = e.getActionCommand();
        if(action.equals("Open")){
            bulb.flipState(e);
            circuit.openGate();
            textField.setText("Circuit is currently open.");
        } else {
            bulb.flipState(e);
            circuit.closeGate();
            textField.setText("Circuit is currently closed.");
        }
    }
}
