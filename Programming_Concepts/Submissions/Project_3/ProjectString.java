//======================================================================
// Steven Romeiro
// ProjectString.java
//
// Purpose: Write a program that requests two text inputs from the user 
// and displays the number of characters entered. The program should 
// concatenate the inputs and display them as one phrase. The program
// should replace all vowels with the '*' symbol and show the index of
// the first vowel in the concatenated phrase.
//======================================================================

import java.util.Scanner;

public class ProjectString
{
		public static void main(String[] args)
		{
			Scanner scan = new Scanner(System.in);
			String stringA, stringB, composite, composite1;
			int count1, count2, count3, position;
						
			System.out.println();
			System.out.println("You will be asked to enter two phrases"
								+ " in the next lines:");
			System.out.print("Enter phrase 1: ");
			// User entry begins here with variable stringA. User entry
			// is then counted.
			stringA = scan.nextLine();
			count1 = stringA.length();
			System.out.print("Enter phrase 2: ");
			// Second user entry begins here with variable stringB and 
			// is counted.
			stringB = scan.nextLine();
			stringB = stringB.toLowerCase();
			count2 = stringB.length();
			// Both entries are added together and counted. All vowels
			// are replaced by '*' to give the position of the first 
			// vowel.
			composite = stringA.concat(" " + stringB);
			count3 = composite.length();
			composite1 = composite.replaceAll("[aeiouAEIOU]", "*");
			position = composite1.indexOf('*');
			// Phrases are displayed with their counts in the next few
			// lines. The modified concatenated string is displayed and
			// the position of the first vowel is given.
			System.out.println();
			System.out.println("Your combined phrases are: "+composite);
			System.out.println("Your first phrase had " + count1 + 
								" characters in it including spaces");
			System.out.println("Your second phrase had " + count2 +
								" characters in it including spaces");
			System.out.println("Your new combined phrase has " + count3
								+ " characters in it including spaces");
			System.out.println(composite1);
			System.out.println("First vowel at position: " + position);
								
			System.out.println();
		}
} 
