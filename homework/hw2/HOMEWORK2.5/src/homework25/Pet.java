package homework25;
// COSC 1320 Summer 2015
// Name: Adrian Davila
// 1 point credit
// This is my own work; I will not post
public class Pet {
    String name;
    int age;
    double weight;
    Pet(){
        name = "";
        age = 0;
        weight = 0;
    }
    Pet(String newName , int newAge , double newWeight){
        name = newName;
        age = newAge;
        weight = newWeight;
    }
    public void setName(String newName){
        name = newName;
    }
    public void setAge(int newAge){
        age = newAge;
    }
    public void setWeight(double newWeight){
        weight = newWeight;
    }
    public String getName(){
        return name;
    }
    public int getAge(){
        return age;
    }
    public double getWeight(){
        return weight;
    }
}