//==============================================================================
// Steven Romeiro
// Cat.java
//
// Purpose: Create class Cat as a derived class from class Animal.
//==============================================================================

import java.util.*;

public class Cat extends Animal
{
	//Instance Variables
	private String breed;
	private String preferred_catfood;
	
	//Constructor
	public Cat(String name, String owner_name, Calendar date_of_birth,
				String breed, String preferred_catfood)
	{
		super("Cat", name, owner_name, date_of_birth);
		this.breed = breed;
		this.preferred_catfood = preferred_catfood;
	}
	
	//toString Method - Returns String representations of instance variables
	public String toString()
	{
		return
			super.toString() + " " +
			"Breed: " + breed + " " +
			"Preferred catfood: " + preferred_catfood;
	}
	
	//Accessor Method - Returns breed
	public String Breed()
	{
		return breed;
	}
	
	public String Preferred_catfood()
	{
		return preferred_catfood;
	}
}
