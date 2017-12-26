// COSC 1320 Summer 2015
// Name: Adrian Davila
// 1 point credit
// This is my own work; I will not post

/**
 * 
 * @author Adrian Davila
 */
public class CableModem extends Modem {
    String method = "cable connection";

    public void connect(){
        System.out.println("Connecting to the Internet ...");
        System.out.println("Using a " + method);
    }
}
