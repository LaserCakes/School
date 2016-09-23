//==============================================================================
// Steven Romeiro
// Dog.java
//
// Purpose: Create class Dog as a derived class from class Animal.
//==============================================================================

import java.util.*;

public class Dog extends Animal
{
	//Instance Variables
	private String breed;
	private String favorite_treat;
	
	//Constructor
	public Dog(String name, String owner_name, Calendar date_of_birth,
				String breed, String favorite_treat)
	{
		super("Dog", name, owner_name, date_of_birth);
		this.breed = breed;
		this.favorite_treat = favorite_treat;
	}
	
	//toString Method - Returns a String representation of instance variables
	public String toString()
	{
		return
			super.toString() + " " +
			"Breed: " + breed + " " +
			"Favorite treat: " + favorite_treat;
	}
	
	//Accessor Method - Returns breed
	public String Breed()
	{
		return breed;
	}
	
	//Accessor Method - Returns favorite_treat
	public String Favorite_treat()
	{
		return favorite_treat;
	}
}
