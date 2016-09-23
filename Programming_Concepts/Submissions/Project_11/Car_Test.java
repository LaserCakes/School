//==============================================================================
// Steven Romeiro
// Car_Test.java
//
// Purpose: Create a test driver that accepts input from the user and determines
// if the car they entered is an Antique or not. This program depends on the 
// Car class that was created in the Car.java program.
//==============================================================================

import java.util.Scanner;

public class Car_Test
{
	public static void main(String[] args)
	{
		String make, model;
		int year;
		Scanner scan = new Scanner(System.in);
		
		System.out.println("\nThis program will determine if your car is" + 
							" classified as an Antique. Please enter your car" +
							" information.");
		System.out.print("Year: ");
		year = scan.nextInt();
		scan.nextLine();
		System.out.print("Make: ");
		make = scan.nextLine();
		System.out.print("Model: ");
		model = scan.nextLine();
		
		Car vehicle1 = new Car(make, model, year);	//Calls the new constructor
		
		System.out.println("\n" + vehicle1.toString() + "\n");
		
		//Classifies as Antique if the car is over 25 years old. Assumed current
		//year of 2016.
		if (vehicle1.isAntique() == true)
		{
			System.out.println("Your car is an antique.\n");
		}
		else
		{
			System.out.println("Your car is not an antique.\n");
		}
		
	}
}
