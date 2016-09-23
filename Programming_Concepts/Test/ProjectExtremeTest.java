//==============================================================================
// Steven Romeiro
// ProjectExtreme.java
//
// Purpose: Write a program that reads up to ten integer values from the 
// keyboard and outputs their extreme (maximum and minimum) and average values.
//==============================================================================

import java.util.Scanner;
import java.text.DecimalFormat;

public class ProjectExtremeTest
{
	public static void main(String[] args)	
	{
		int count=0, average, total=0, min, max;
		double res;
		
		Scanner scan = new Scanner(System.in);
		DecimalFormat rounded = new DecimalFormat("0.####");
		
		System.out.println();
		System.out.println("Please enter up to 10 integer values");
		System.out.println("To stop before 10 values, enter a zero: ");
	
		min = 1;
		max = 1;
		
		while (count < 10)
		{
			System.out.print("Enter an integer: ");
			int input = scan.nextInt();
			if (input==0)
			{
				break;
			}
			else
			{
				++count;
				total = total + input;
				
				if(count == 1)
				{
					min = max = input;
				}
				else 
				{
					if (input >  max)
						max = input;
						
					if (input < min)
						min = input;
				}
				
				}
			}
		}
		
		System.out.println("Max is: " + max);
		System.out.println("Min is: " + min);
		System.out.println("Average is: " + average);
		System.out.println("Count is: " + (count - 1));
		
	}
}
// create a second variable for the first loop to accept the first value as min
