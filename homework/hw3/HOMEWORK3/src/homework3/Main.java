// COSC 1320 Summer 2015
// Name: Adrian Davila
// 1 point credit
// This is my own work; I will not post

package homework3;
import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
        // TODO code application logic here
        /*int tokenCtr = 0;
        Time test = new Time(50391);
        System.out.println("hours: "   + test.getHours()   +
                           " minutes: " + test.getMinutes() +
                           " seconds: " + test.getSeconds());
        Time test2 = new Time(301);
        System.out.println("hours: "   + test2.getHours()   +
                           " minutes: " + test2.getMinutes() +
                           " seconds: " + test2.getSeconds());

        Scanner keyboard1 = new Scanner(System.in);
        while(keyboard1.hasNext()){
            if(tokenCtr > 0){
                System.out.print(' ');
            }
            System.out.print(keyboard1.next());
            tokenCtr++;
        }
        int n = 10;
        do
        {
        System. out. println( n);
        n = n - 3; 
        } while ( n > 0);*/

        Time test = new Time(50391);
        System.out.println("hours: "   + test.getHours()   +
                           " minutes: " + test.getMinutes() +
                           " seconds: " + test.getSeconds());
        System.out.println(test.toString());
    }

}
