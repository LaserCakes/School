//==============================================================================
// Steven Romeiro
// ProjectArray.java
//
// Purpose: Write a Java program that accepts a specified number of strings from
// the keyboard and stores them in an array.
//==============================================================================

import java.util.Scanner;

public class ProjectArray
{
	public static void main(String[] args)
	{
		int arrayLength, index;
		Scanner scan = new Scanner(System.in);
		
		System.out.println();
		System.out.println("This program will accept a number of strings, " +
							"will output them in order, then in reverse.");
		System.out.println();
		System.out.print("How many strings would you like to enter? ");
		arrayLength = scan.nextInt();
		scan.nextLine();
		
		//If the array contains anything more than 20 elements, ask user to
		//re-enter.
		while (arrayLength > 20)
		{
			System.out.println();
			System.out.println("That's a lot strings! Consider fewer strings.");
			System.out.print("How many strings would you like to enter? ");
			arrayLength = scan.nextInt();
			scan.nextLine();
		}
		
		//Create the array with the number of elements specified by the user.
		String[] phrase = new String[arrayLength];
		
		//Accept input from user and enter them into the array.
		System.out.println();
		for (index = 0; index < phrase.length; index++)
		{
			System.out.print("Enter a string: ");
			phrase[index] = scan.nextLine();
		}
		
		//Output the array in order.
		System.out.println();
		System.out.println("The array contains: ");
		for (index = 0; index < phrase.length; index++)
		{
			System.out.println(phrase[index]);
		}
		
		//Output the array in reverse order.
		System.out.println();
		System.out.println("The array in reverse order is: ");
		for (index = (phrase.length - 1); index >= 0; index--)
		{
			System.out.println(phrase[index]);
		}
		System.out.println();
	}	
}
