// COSC 1320 Summer 2015
// Name: Adrian Davila
// 1 point credit
// This is my own work; I will not post

/**
 * 
 * @author Adrian Davila
 */

import java.util.*;

public class Name {
    public static void main(String[] args){
        String names[] = { "lauren" , "audrina" , "heidi" , "whitney" , "stephanie" , "stephanie" , "spencer" , "lisa" , "brody" , "frankie" , "holly" , "jordan" , "brian" , "jason" };
        for(int i=0; i < names.length; i++){
            System.out.print(i + ": " + names[i] + " ");
        }
        int[] letterCount = new int[26];
        for(int count = 0; count < names.length; count++){
            String current = names[count];
            char[] letters = current.toCharArray();
            for(int count2 = 0; count2 < letters.length; count2++){
                char lett = letters[count2];
                if( (lett >='a') & (lett <= 'z')){
                    letterCount[lett - 'a']++;
                }
            }
        }
        for(char count = 'a'; count <='z'; count++){
            System.out.print(count + ": " + letterCount[count - 'a'] + " \n" );
        }
       // System.out.println();
    }
}
