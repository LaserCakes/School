/*********************************************************
* Program OutputDemo.java
*
* Author: Rollins Turner
*
* This program demonstrates how to write a text file.
**********************************************************/
import java.io.PrintWriter;
import java.io.FileOutputStream;
import java.io.FileNotFoundException;
import java.util.Scanner;
public class OutputDemo
{
    public static void main( String[] args)
    {
        System.out.println("This is program OutputDemo.");
        System.out.println();
        try
        {
			// Get filename from the user
            System.out.print("Please enter file name: ");
            Scanner keyboardScanner = new Scanner(System.in);
            String filename = keyboardScanner.nextLine();
            
			//Create the FileOutput object
            FileOutputStream fos = new FileOutputStream(filename, false);
            //Create the Printwrite object and pass the FileOutput into it
			PrintWriter pw = new PrintWriter(fos);
			
			for (int i = 1; i <= 10; i++) //Does the actual writing
            {
                pw.println("Line " + i);
            }
		
			pw.close(); //always needs to close after writer.
        }
        catch (FileNotFoundException ex)
        {
            System.out.println("Failed to create output file.");
        }
        System.out.println("Program complete");
    }
}
