//======================================================================
// Steven Romeiro
// ProjectString.java
//
// Purpose: Write a program that requests two text inputs from the user 
// and displays the number of characters entered. The program should 
// concatenate the inputs and display them as one phrase.
//======================================================================

import java.util.Scanner;

public class ProjectString
{
		public static void main(String[] args)
		{
			Scanner scan = new Scanner(System.in);
			String stringA, stringB, composite, composite1;
			int count1, count2, count3, position1, position2, position3;
			int position4, position5, position6, position7, position8;
			int position9, position10;
						
			System.out.println();
			System.out.println("You will be asked to enter two phrases"
								+ " in the next few lines:");
			System.out.print("Enter phrase 1: ");
			stringA = scan.nextLine();
			count1 = stringA.length();
			System.out.print("Enter phrase 2: ");
			stringB = scan.nextLine();
			stringB = stringB.toLowerCase();
			count2 = stringB.length();
			composite = stringA.concat(" " + stringB);
			count3 = composite.length();
			composite1 = composite.replaceAll("[aeiouAEIOU]", "*");
			position1 = composite.indexOf("a");
			position2 = composite.indexOf("e");
			position3 = composite.indexOf("i");
			position4 = composite.indexOf("o");
			position5 = composite.indexOf("u");
			position6 = composite.indexOf("A");
			position7 = composite.indexOf("E");
			position8 = composite.indexOf("I");
			position9 = composite.indexOf("O");
			position10 = composite.indexOf("U");
			System.out.println();
			System.out.println("Your combined phrases are: "+composite);
			System.out.println("Your first phrase had " + count1 + 
								" characters in it including spaces");
			System.out.println("Your second phrase had " + count2 +
								" characters in it including spaces");
			System.out.println("Your new combined phrase has " + count3
								+ " characters in it including spaces");
			System.out.println(composite1);
			System.out.println("First vowel at position: " + position1);
								
			System.out.println();
		}
} 
