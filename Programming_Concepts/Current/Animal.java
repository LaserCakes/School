//==============================================================================
// Steven Romeiro
// Animal.java
//
// Purpose: In this project we will create a base class to represent animals of
// various kinds.
//==============================================================================

import java.util.*;

public class Animal
{
	//Instance variables
	private String kind_of_animal;
	private String name;
	private String owner_name;
	private Calendar date_of_birth;
	
	//Constructor
	public Animal(String kind_of_animal, String name, String owner_name,
					Calendar date_of_birth)
	{
		this.kind_of_animal = kind_of_animal;
		this.name = name;
		this.owner_name = owner_name;
		this.date_of_birth = date_of_birth;
	}
	
	//Returns String representation of instance variables
	public String toString()
	{
		return
			kind_of_animal + " Name: " + name + " " +
			"Owner: " + owner_name + " " +
			"Date of birth: " + 
			(date_of_birth.get(Calendar.MONTH)+1) + "/" +
			date_of_birth.get(Calendar.DATE) + "/" + 
			date_of_birth.get(Calendar.YEAR);
	}
	
	//Accessor Method - Returns kind_of_animal
	public String Kind_of_animal()
	{
		return kind_of_animal;
	}
	
	//Accessor Method - Returns name
	public String Name()
	{
		return name;
	}
	
	//Accessor Method - Returns owner_name
	public String Owner_name()
	{
		return owner_name;
	}
	
	//Accessor Method - Returns date_of_birth
	public Calendar Date_of_Birth()
	{
		return date_of_birth;
	}
}
