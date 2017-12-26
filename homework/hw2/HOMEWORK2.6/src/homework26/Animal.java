// COSC 1320 Summer 2015
// Name: Adrian Davila
// 1 point credit
// This is my own work; I will not post

package homework26;
public class Animal {
    String name;
    int population;
    double growthRate;

    Animal(){
        name = "";
        population = 0;
        growthRate = 0;
    }
    Animal(String newName , int newPop , double newRate){
        name = newName;
        population = newPop;
        growthRate = newRate;
    }
    public void setName(String newName){
        name = newName;
    }
    public void setPopulation(int newPop){
        population = newPop;
    }
    public void setGrowthRate(double newRate){
        growthRate = newRate;
    }
    public String getName(){
        return name;
    }
    public int getPopulation(){
        return population;
    }
    public double getGrowthRate(){
        return growthRate;
    }

}
