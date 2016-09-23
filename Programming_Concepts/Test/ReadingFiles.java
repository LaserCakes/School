import java.util.Arrays;
import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;

public class ReadingFiles
{
    public static void main(String[] args) 
		throws FileNotFoundException //need this if reading a file.
    {
		System.out.println("This is program FileDemo.");
		
		// Get filename from the user
		System.out.print("Please enter file name: ");
		Scanner keyboardScanner = new Scanner(System.in);
		String filename = keyboardScanner.nextLine();
		
		/*File favs = new File (filename);
		Scanner fileScanner = new Scanner(favs);
		
		System.out.println();
		while (fileScanner.hasNext())      // Test for end of file
		{
			// Read next line from file
			String line = fileScanner.nextLine(); 
			System.out.println(line); //Prints line just read
		}
		System.out.println();*/
		
		try
		{
			File file = new File(filename);
			Scanner fileScanner = new Scanner(file);

			System.out.println();
			while (fileScanner.hasNext())      // Test for end of file
			{
				// Read next line from file
				String line = fileScanner.nextLine(); 
				System.out.println(line);
			}
		}
		catch (FileNotFoundException ex)
		{
			System.out.println("File " + filename + " was not found.");
		}
		
		System.out.println("Program complete.");
	}
}
