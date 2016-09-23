//==============================================================================
// Steven Romeiro
// CarFromFile.java
//
// Purpose: Create a test driver called CarsFromFile. Accepts input from the 
// keyboard for a file name. Creates a Scanner object for the file. Repeated 
// invokes the new Car constructor, passing the Scanner object as the only
// parameter value. Adds the resulting Car object to an array. Upon reaching 
// end of file, steps through the array of Cars and outputs the attributes of 
// each car to the screen. This program depends on the Car class that was 
// created in the Car.java program.
//==============================================================================

import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;

public class CarsFromFile
{
	public static void main(String[] args)
		throws FileNotFoundException
	{
		String filename = " ";
		Scanner scan = new Scanner(System.in); //Keyboard scanner
		Boolean pass = true;
		
		while (pass == true) //If file input does not exist, try again.
		{
			try
			{
				System.out.print("\nPlease enter the name of the file to be" +
								" scanned: ");
				filename = scan.nextLine(); //Gets the filename from the user
				File cars = new File(filename); //Creates the file object
				Scanner fileScan = new Scanner(cars);
				
				//Creates an object array of 100 items
				Car[] vehicles = new Car[100]; 
				
				int index = 0;
				int counter = 0;
				while (fileScan.hasNext())
				{
					Car newCar = new Car(fileScan); //Creates a new Car object
					vehicles[index] = newCar; //Assines new object to the Array
					index++;
					counter++;
				}
				System.out.println("\nEnd of file reached.");
				System.out.println(counter + " Cars created.\n");
				
				index = 0;
				do //Prints the objects in the Array as long elements exist.
				{
					System.out.println(vehicles[index]);
					index++;
				} while (vehicles[index] != null);
				
				pass = false; //Breaks out of the loop
			}
			
			catch (FileNotFoundException ex) //Repeat loop if Exception is found
			{
				System.out.println("The file " + "\"" + filename + "\" " + 
									"does not exist. Please try again.");
			}
		}
		System.out.println("\nProgram Complete.\n");
	}
}
