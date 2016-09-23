//**************************************************
//  DogsFromFile.java
//  Steven Romeiro
//  
//  A test driver for class Dog.
//**************************************************
import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;

public class DogsFromFile
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
				fileName = scan.nextLine();             //Gets filename from user 
				File dogs = new File(fileName);         //Creates the file object
				Scanner dogScanner = new Scanner(dogs); //Creates the file scanner
				
				Dog[] dog = new Dog[100];
				int index = 0;
				
				//Scans the file until it reaches the end
				while (dogScanner.hasNext())
				{
					Dog newDog = new Dog(dogScanner);   //Creates a new dog object
					dog[index] = newDog;                //Assigns new dog to array
					index++;
				}
				System.out.println("End of file reached.\n");
				
				index = 0; //Resets the index counter for printing
				while (dog[index] != null)
				{
					System.out.println(dog[index]);
					index++;
				}
				
				System.out.println("There are " + Dog.Get_Dog_Count() + " dogs"
									+ " in the system.");
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
