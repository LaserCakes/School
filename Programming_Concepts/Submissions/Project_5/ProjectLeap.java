//==============================================================================
// Steven Romeiro
// ProjectLeap.java
//
// Purpose: Write a program that reads an integer value from the user 
// representing a year and determines if the year is a leap year in the 
// Gregorian calendar (the normal calendar that we use.)
//==============================================================================

import java.util.Scanner;

public class ProjectLeap
{
		public static void main(String[] args)
		{
			int leapYear;
			Scanner scan = new Scanner(System.in);
			
			System.out.println();
			System.out.print("Enter a year greater than 1581: ");
			leapYear = scan.nextInt();
			
			//Evaluates the input to validate that it's greater than 1581.
			while (leapYear < 1582)
			{	
				System.out.print("You entered " + leapYear + " Please enter a"
								+ " year greater than 1581: ");
				leapYear = scan.nextInt();
			}
			//If the input is divisible by 100 it's not a leap year.
			if (leapYear % 100 == 0)
			{
				//Unless it's also divisible by 400.
				if (leapYear % 400 == 0)
					System.out.println(leapYear + " is a leap year.");
				else
					System.out.println(leapYear + " is not a leap year.");
			}
			//If the input is not divisible by 100 then the following is
			//evaluated.
			else
			{
				//It is a leap year if it's divisible by 4. Otherwise it's not.
				if (leapYear % 4 == 0)
				{
				System.out.println(leapYear + " is a leap year.");
				}
				else
				{
				System.out.println(leapYear + " is not a leap year.");
				}
			}	
		}
}
