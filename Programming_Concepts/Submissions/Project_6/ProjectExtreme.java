//==============================================================================
// Steven Romeiro
// ProjectExtreme.java
//
// Purpose: Write a program that reads up to ten integer values from the 
// keyboard and outputs their extreme (maximum and minimum) and average values.
//==============================================================================

import java.util.Scanner;
import java.text.DecimalFormat;

public class ProjectExtreme
{
	public static void main(String[] args)	
	{
		double average=0, input=1, count=1, total=0, min=1, max=1;
		
		Scanner scan = new Scanner(System.in);
		DecimalFormat rounded = new DecimalFormat("0.####");
        
		
		System.out.println();
		System.out.println("Please enter up to 10 integer values");
		System.out.println("To stop before 10 values, enter a zero: ");
		
		while (count <= 10)
		{
			System.out.print("Enter an integer: ");
			input = scan.nextDouble();
			//Evaluate if the first input is zero. If so, break the loop.
			if (input==0)
			{
				break;
			}
			//Set the min and max values equal to the first input for later
			//comparisson.
			if (count == 1)
				min = max = input; 
			//Evaluate if the input is less than max and less than min. If the
			//input is less than both max/min set it as the new min. If the 
			//input is greater than max then set it as the new max value.
			if (input < max)
			{
				if (input < min)
				{
				min = input;
				}
			}
			else
			{
				max = input;
			}
			//Adds the new input to the total variable every pass of this loop
			total += input;
			++count;
		}
		//If broken out of the loop in the first iteration then a zero value was
		//entered. Show error message and quit the program.
		if (count==1)
		{
			System.out.println();
			System.out.println("No values were entered");
			System.out.println();
		}
		//If broken out of the loop after a succesfull iteration, or when the
		//loop terminates itself, calculate the average and display all of the
		//information.
		else
		{
			if (count>1)
			{
				average = (double)total/(count-1);
			}
			
			System.out.println();
			System.out.println("Min is: " + (int)min);
			System.out.println("Max is: " + (int)max);
			System.out.println("Average is: " + rounded.format(average));
			System.out.println();
		}	
	}
}
