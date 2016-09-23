//==============================================================================
// Steven Romeiro
// KeyboardToFile.java
//
// Purpose: Write a program, KeyboardToFile.java, that reads an arbitrary number
// of strings from the keyboard and writes them to a text file.
//==============================================================================

import java.util.Scanner;
import java.io.*;

public class KeyboardToFile
{
	public static void main(String[] args)
		throws FileNotFoundException
	{
		String input, filename;
		Scanner keyScan = new Scanner(System.in); //Keyboard input
		
		System.out.println("\nPlease enter a file name to be written: ");
		filename = keyScan.nextLine(); //Read user file name to be used
		File file = new File(filename); //Creates the file with name entered
		
		FileOutputStream fos = new FileOutputStream(filename, false);
		PrintWriter pw = new PrintWriter(fos);
		
		System.out.println("\nEnter strings that are going to be entered into " + 
							"the program.\n" + "Press ENTER with no text to " + 
							"end the program.");
		
		do
		{
			System.out.print("Enter string: ");
			input = keyScan.nextLine();
			pw.println(input); //Write inputs one line at a time until loop ends
		}
		while (input.length() != 0); //Loop ends when no text is entered
		
		pw.close();
		
		System.out.println("\nFile " + filename + " has been written\n");
	}
}
