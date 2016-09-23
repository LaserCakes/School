//==============================================================================
// Steven Romeiro
// Bird.java
//
// Purpose: Create class Bird as a derived class from class Animal.
//==============================================================================

import java.util.*;

public class Bird extends Animal
{
	//Instance Variables
	private String species;
	private double wingspan;
	
	//Constructor
	public Bird (String name, String owner_name, Calendar dob, String species,
				double wingspan)
	{
		super("Bird", name, owner_name, dob);
		this.species = species;
		this.wingspan = wingspan;
	}
		
	//toString Method - Returns string representations of member variables
	public String toString()
	{
		return
			super.toString() + " " +
			"Species: " + species + " " +
			"Wingspan: " + wingspan;
	}
	
	//Accessor Method - Returns species
	public String Species()
	{
		return species;
	}
	
	//Accessor Method - Returns wingspan
	public double Wingspan()
	{
		return wingspan;
	}
}
