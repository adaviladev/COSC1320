// COSC 1320 Summer 2015
// Name: Adrian
// Programming Assignment 2
// This is my own work; I will not post

package programmingassignment2;

import java.awt.BorderLayout;

public class Controller {
    private View view;
    private ElectricalCircuit circuit;

    Controller(){
        view = new View();
        circuit = new ElectricalCircuit();
        SwitchBoard buttons = new SwitchBoard();
        buttons.setVisible(true);
//        buttons.add(view);
        circuit.setVisible(true);
        circuit.setSize(400, 350);
        view.add(circuit, BorderLayout.CENTER);
        view.add(buttons , BorderLayout.CENTER);
        view.validate();
        view.setVisible(true);
    }
}
