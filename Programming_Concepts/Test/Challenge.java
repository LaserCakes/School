/*==============================================================================
Devise a function that takes an input 'n' (integer) and returns a string that is
the decimal representation of the number grouped by commas after every 3 digits.
Do not solve the task using a built-in formatting function that can accomplish
the whole task on its own. 

Assume: 0 <= n < 1000000000 

1 -> "1" 
10 -> "10" 
100 -> "100" 
1000 -> "1,000" 
10000 -> "10,000" 
100000 -> "100,000" 
1000000 -> "1,000,000" 
35235235 -> "35,235,235" 
999999999 -> “999,999,999"
==============================================================================*/

import java.util.Scanner;

public class Challenge
{
	public static void main(String[] args)
	{
		int length, input, count;
		char char1=' ';
		String stringInput;
		
		Scanner scan = new Scanner(System.in);
		
		System.out.println("Enter an integer value: ");
		input = scan.nextInt();
		stringInput = Integer.toString(input);
		length = stringInput.length();
		
		
		System.out.println("Integer input is: " + input);
		System.out.println("String representation is: " + stringInput);
		System.out.println("String length is: " + length);
		
		for (count=(length-1); count >= 0; count--)
		{
			char1 = stringInput.charAt(count);
			//System.out.println("Char1 is: " + char1);
			
			if (count % 3 == 0)
			{
				stringInput = stringInput.substring(0, count) + ",";
			}	
		}
		System.out.println("New string with commas is: " + stringInput);
		
	}
}
