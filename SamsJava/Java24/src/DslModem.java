// COSC 1320 Summer 2015
// Name: Adrian Davila
// 1 point credit
// This is my own work; I will not post

/**
 * 
 * @author Adrian Davila
 */
public class DslModem extends Modem{
    String method = "DSL phone connection";

    public void connect(){
        System.out.println("connectin to the Internet ...");
        System.out.println("Using a " + method);
    }
}
