//==============================================================================
// Steven Romeiro
// Project ProjectCountingIntegers.java
//
// Purpose: Write a program that reads an arbitrary number of integers in the 
// range 1 to 50 from the keyboard and then outputs how many of each value were 
// read.
//==============================================================================

import java.util.Scanner;

public class ProjectCountingIntegers
{
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		
		int input;
		int[] countingArray = new int[51]; //Array for storing counts
		int[] storeArray = new int[51]; //Array for storing user inputs
		
		// Loop initializing countingArray to zero for proper counting
		for (int i=0; i < countingArray.length; i++)
		{
			countingArray[i] = 0;
		}
		
		System.out.println("\nEnter integers in the range of 1 - 50 to be " + 
							"counted. \nEnter 0 to stop inputs and show the" +
							" count.");
		System.out.print("\nFirst input: ");
		input = scan.nextInt();
		
		// Range checker for first input
		while (input > 50 || input < 0)
		{
			System.out.println ("You entered a value outside of the range");
			System.out.print("New input: ");
			input = scan.nextInt();
			continue;
		}
		
		//Exits the program before the entering the main loop if no valid values
		//were entered
		if (input == 0) 
		{
			System.out.println("\nYou entered no values\n");
			System.exit(0);
		}
		
		while (input != 0) // Main loop after first entry was validated
		{
			if (input > 50 || input < 0) //Range checker
			{
				System.out.println ("You entered a value outside of the range");
				System.out.print("New input: ");
				input = scan.nextInt();
				continue;
			}
			storeArray[input] = input;
			countingArray[input]++;
			System.out.print("Next input: ");
			input = scan.nextInt();
		}
		
		System.out.println("\nValue" + "\tCount");
		
		// Outputs all non-zero entries
		for (int i = 0; i < countingArray.length; i++) 
		{
			if ((storeArray[i] != 0) && (countingArray[i] != 0))
			{
				System.out.println(storeArray[i] + "\t" + countingArray[i]);
			}
		}
		System.out.println();
	}
}
