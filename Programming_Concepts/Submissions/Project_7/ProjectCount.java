// *****************************************************************************
//   Author:  Steven Romeiro
// 
//   ProjectCount.java
//
//   This program reads a string (phrase) and counts the 
//   number of space characters and certain other letters
//   in the phrase.
// *****************************************************************************

import java.util.Scanner;

public class ProjectCount
{
    public static void main (String[] args)
    {
        String phrase;    
        int blankCount, length, index, aCount, eCount, sCount, tCount;       
        char char1;          

        Scanner scanner = new Scanner(System.in);
        
        System.out.println();
		System.out.print ("Enter a sentence or phrase: ");
		phrase = scanner.nextLine();
		
		// Begins a loop that repeats the entire program until quit by user.
		while (!phrase.equalsIgnoreCase("quit"))
		{
			// Print a program header
			System.out.println ();
			System.out.println ("Character Counter");
			System.out.println ();

			// Read in a string and find its length
			length = phrase.length();

			// Initialize all counters
			blankCount = 0;
			aCount = 0;
			eCount = 0;
			sCount = 0;
			tCount = 0;

			// A "for" loop to go through the string character by character and 
			// compare each character to the counted characters. Increments 
			// every time a comparisson holds true.
			for (index = 0; index < length; index++)
			{
				char1 = phrase.toLowerCase().charAt(index);
				
				switch (char1)
				{
					case ' ':
						blankCount++;
						break;
					case 'a':
						aCount++;
						break;
					case 'e':
						eCount++;
						break;
					case 's':
						sCount++;
						break;
					case 't':
						tCount++;
						break;
				}
			}
				
			System.out.println ("Number of space characters: " + blankCount);
			System.out.println ("Number of 'a' characters: " + aCount);
			System.out.println ("Number of 'e' characters: " + eCount);
			System.out.println ("Number of 's' characters: " + sCount);
			System.out.println ("Number of 't' characters: " + tCount);
			System.out.println ();
			System.out.print ("Enter the next phrase or type \"quit\" to end: ");
			phrase = scanner.nextLine();
			
		}
    }
}


