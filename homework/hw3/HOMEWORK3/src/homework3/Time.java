// COSC 1320 Summer 2015
// Name: Adrian Davila
// 1 point credit
// This is my own work; I will not post

package homework3;

public class Time {
    int seconds = 0;
    int minutes = 0;
    int hours = 0;
    final int SECONDS_PER_MINUTE = 60;
    final int MINUTES_PER_HOUR = 60;

    Time(int givenSeconds){
        seconds = givenSeconds % SECONDS_PER_MINUTE;
        int totMinutes = givenSeconds / SECONDS_PER_MINUTE;
        minutes = totMinutes % MINUTES_PER_HOUR;
        hours = totMinutes / SECONDS_PER_MINUTE;
    }
    public int getSeconds(){
        return seconds;
    }
    public int getMinutes(){
        return minutes;
    }
    public int getHours(){
        return hours;
    }

}
