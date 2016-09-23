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
    private boolean isValid;

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
	
	//-----------------------------------------------------------------
	// New Constructor that accepts a String object from within a CSV
	// file.
	//-----------------------------------------------------------------
	public Dog (String csv_dog)
	{
		//Creates an array adding each element split by a ","
		String[] dog_info = csv_dog.split(",");
		
		if(dog_info.length == 3)
		{
			this.name = dog_info[0];
			this.breed = dog_info[1];
			this.age = Integer.parseInt(dog_info[2]);
			this.isValid = true;
		}
		else
		{
			this.isValid = false;
		}
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
		if(this.isValid)
		{
			return
				name + " " +
				breed + " " +
				age;
		}
		else //If array has missing information, return an error
		{
			return 
				"Bad Dog:";
		}
	}
    
    //--------------------------------------------------------
    // Serialize method similar to ToString method but returns
    // the information in one line separated by a comma.
    //--------------------------------------------------------
    public String Serialize()
    {
		if (this.isValid)
		{
			return
				this.name + "," +
				this.breed + "," +
				(this.age + 1) + "\n";
		}
		else
		{
			return "\n";
		}
	}
    
    //---------------------------------------------------------------------
    // Accessor Method - Returns a boolean to say whether dog info is valid
    //---------------------------------------------------------------------
    public boolean isValid()
    {
		return this.isValid;
	}
    
    //------------------------------------------------------
    // Returns count
    //------------------------------------------------------
    public static int Get_Dog_Count()
    {
		return count;
	} 
}
