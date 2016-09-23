//************************************************
//  Dog.java
//  Steven Romeiro
//
//  Represents a dog.
//************************************************

import java.util.Scanner;
import java.io.File;

public class Dog
{
    // Instance variables
    private String name;
    private String breed;
    private int age;
    private static int count = 0;	

    //-----------------------------------------------------
    // Constructor - sets up a dog object by initializing 
    // the name, the breed, and the age.
    //-----------------------------------------------------
    public Dog(String newName, String newBreed, int newAge)
    {
        name = newName;
        breed = newBreed;
        age = newAge;
    }
    
    //-------------------------------------------------------
    // New Constructor - Sets up dog object by iniitializing
    // the variables using a Scanner object.
    //-------------------------------------------------------
    public Dog (Scanner dogScanner)
    {
		name = dogScanner.nextLine();
		breed = dogScanner.nextLine();
		age = dogScanner.nextInt();
		dogScanner.nextLine();
		count++;
	}
   
    //--------------------------------------------------------------  
    // Method ageInPersonYears that takes no parameter. The method 
    // should compute and return the age of the dog in person years
    // (seven times the dog's age).
    //--------------------------------------------------------------
    public int ageInPersonYears()
    {
        int personAge = age*7; 
        return personAge;
    }
     
    //------------------------------------------------------
    // Returns a string representation of a dog.
    //------------------------------------------------------
    public String toString()
    {
        return name + "\t"+  breed + "\t" + age +
            "  age in person years:" + ageInPersonYears();
    }
    
    //------------------------------------------------------
    // Returns count
    //------------------------------------------------------
    public static int Get_Dog_Count()
    {
		return count;
	} 
}
