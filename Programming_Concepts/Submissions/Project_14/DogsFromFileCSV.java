//**************************************************
//  DogsFromFileCSV.java
//  Steven Romeiro
//  
//  A test driver for class Dog.
//**************************************************
import java.util.Scanner;
import java.io.*;

public class DogsFromFileCSV
{
//-----------------------------------------------
// Creates a dog object and then calls the 
// ageInPersonyears method.
//-----------------------------------------------
    public static void main (String[] args)
		throws FileNotFoundException
    {
        String fileName = ""; //Initializes the variable needed before loop
        boolean pass = true;
        
        Scanner scan = new Scanner(System.in); //Keyboard scanner
        
        while (pass == true)
        {
			try
			{
				System.out.print("Enter the name of the file to be scanned: ");
				fileName = scan.nextLine();         //Gets filename from user 
				File dogFile = new File(fileName);  //Creates the file object
				Scanner fileScanner = new Scanner(dogFile); //Creates file scanner
				String outputFile = fileName.replace(".csv", "2.csv");
				FileOutputStream fos = new FileOutputStream(outputFile, false);
				PrintWriter pw = new PrintWriter(fos);
				
				
				//Scans the file until it reaches the end
				while (fileScanner.hasNext())
				{
					//Creates a string containing one line of the file
					String str = fileScanner.nextLine();
					Dog newDog = new Dog(str);   //Creates a new dog object
					
					//As long as there is no missing information in the file
					//prints objects to screen.
					if (newDog.isValid())
					{
						System.out.println(newDog);
					}
					//If information is invalid, prints an error and outputs
					//the line with bad information.
					else
					{
						System.out.println(newDog + "\n" + str + "\n");
					}
					
					//Writes information with the Serialize method to the new
					//file.
					pw.print(newDog.Serialize());
				}
				
				pw.close();
				System.out.println("End of file reached.\n");
				pass = false; //Exits the loop when no exceptions are found
			}
			
			catch (FileNotFoundException ex)
			{
				System.out.println("The file " + "\"" + fileName + "\" " + 
									"does not exist. Please try again.");
			}
		}
        System.out.println("\nProgram Complete.\n");
    }
}
