//==============================================================================
// Steven Romeiro
// Car.java
//
// Purpose: Write a class called Car that holds information about an automobile.
//==============================================================================

import java.util.Scanner;
import java.io.File;

public class Car
{
	private String make;
	private String model;
	private int year;
	
	public Car(String newMake, String newModel, int newYear) // Constructor
	{
		make = newMake;
		model = newModel;
		year = newYear;
	}
	
	public Car(Scanner fileScan) //NEW CONSTRUCTOR takes a file object (Scanner)
	{
		make = fileScan.nextLine();
		model = fileScan.nextLine();
		year = fileScan.nextInt();
		fileScan.nextLine();
	}
	
	public String toString()	// Displays variables as Strings when called
	{
		return year + " " + make +
				" " + model;
	}
	
	public Boolean isAntique() // Calculates if the car is an Antique
	{
		if ((2016 - year) > 25)
		{
			return true;
		}
			
		return false;
	}
}
