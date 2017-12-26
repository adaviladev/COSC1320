// COSC 1320 Summer 2015
// Name: Adrian Davila
// 1 point credit
// This is my own work; I will not post

/**
 * 
 * @author Adrian Davila
 */
public class ModemTester {
    public static void main(String[] args){
        CableModem surfBoard = new CableModem();
        DslModem gateway = new DslModem();
        surfBoard.speed = 500000;
        gateway.speed = 400000;
        System.out.println("Trying the cable modem:");
        surfBoard.displaySpeed();
        surfBoard.connect();
        System.out.println("Trying the DSL modem:");
        gateway.displaySpeed();
        gateway.connect();
    }
}
