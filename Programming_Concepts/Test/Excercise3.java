// This is an excercise from the presentation Data and Expressions

import java.util.Scanner;

public class Excercise3
{
	public static void main (String[] args)
	{
			int miles;
			double gallons;
			
			Scanner scan = new Scanner(System.in);
			
			System.out.print("Enter the number of miles driven: ");
			miles = scan.nextInt();
			
			System.out.print("Enter the number of gallons used: ");
			gallons = scan.nextDouble();
			
			double mpg = miles / gallons;
			
			System.out.println("Your miles per gallon is: " + mpg);
	}		
}
