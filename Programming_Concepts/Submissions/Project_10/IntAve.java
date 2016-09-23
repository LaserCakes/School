//==============================================================================
// Steven Romeiro
// IntAve.java
//
// Purpose:Write a program, IntAve.java, that reads a text file consisting of 
// integer values and computes the arithmetic mean (average) of the values.
//==============================================================================

import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;

public class IntAve
{
	public static void main(String[] args)
		throws FileNotFoundException
	{
		int count = 0, sum = 0;
		double average = 0; 
		
		Scanner keyScan = new Scanner(System.in);
		
		System.out.println("\nPlease enter the file name: ");
		String filename = keyScan.nextLine(); //Reads file name from user
		
		File integers = new File(filename);
		Scanner fileScan = new Scanner(integers); //Scans file specified by user
		
		while(fileScan.hasNext()) //Scans next line, counts and adds lines
		{
			int lines = fileScan.nextInt();
			sum += lines;
			count++;
		}
		
		average = (double)sum/count;
		
		System.out.println("\nAverage is: " + average + "\n");
		
	}
}
