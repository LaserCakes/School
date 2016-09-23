//**************************************************
//  Test_Address.java
//     A test driver for class Address.
//**************************************************
import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;

public class Test_Address
{
    //-----------------------------------------------
    // Reads a CSV file of addresses and creates
    // Address objects from the contents.
    //-----------------------------------------------
    public static void main (String[] args)
    {
        Address address;
        try
        {
            // Create a scanner for the addresses file.
            File file = new File("Addresses.csv");
            Scanner fileScanner = new Scanner(file);
            System.out.println();
            
            // Read each line of the file and create an
            // Address object from the contents.
            while (fileScanner.hasNext())  // Test for end of file
            {
                // Read next line from file
                String str = fileScanner.nextLine();
                Address adr = new Address(str);
                if (adr.isValid())
                {
					System.out.println(adr);
				}
				else
				{
					System.out.println("Invalid line in input file");
					System.out.println(str);
				}
                System.out.println(adr);
            }
         }
        catch (FileNotFoundException ex)
        {
            System.out.println("File Addresses.csv was not found.");
        }

        System.out.println();
        System.out.println("Program complete.");              
    }
}

