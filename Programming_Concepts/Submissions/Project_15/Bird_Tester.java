//**************************************************
//  Bird_Tester.java
//     A test driver for class Bird.
//**************************************************
import java.util.*;

public class Bird_Tester
{
    public static void main (String[] args)
    {
        String name;
        String owner_name;
        Calendar dob;
        int day, month, year;
        String species;
        double wingspan;
        
        Scanner keyboardScanner = new Scanner(System.in);
        
        while (true)
        {
            System.out.print("Animal's name: ");
            name = keyboardScanner.nextLine();
            
            System.out.print("Owner's name: ");
            owner_name = keyboardScanner.nextLine();
            
            System.out.println("Date of birth: ");
            System.out.print("\tMonth ");
            month = keyboardScanner.nextInt();
            System.out.print("\tDay: ");
            day = keyboardScanner.nextInt();
            System.out.print("\tYear: ");
            year = keyboardScanner.nextInt();
            keyboardScanner.nextLine();         // Clear input buffer
            dob = Calendar.getInstance();
            dob.set(year, month-1, day);
            
            System.out.print("Species: ");
            species = keyboardScanner.nextLine();
            System.out.print("Wingspan: ");
            wingspan = keyboardScanner.nextDouble();
            keyboardScanner.nextLine();
            Bird new_bird = 
                new Bird(name, owner_name, dob, species, wingspan);
            
           System.out.println();
           System.out.println(new_bird);
           System.out.println();
           
           System.out.println("Instance variables:");
           System.out.println("Kind_of_animal: " + new_bird.Kind_of_animal());
           System.out.println("Name: " + new_bird.Name());
           System.out.println("Owner_name: " + new_bird.Owner_name());
           
           Calendar dob2 = new_bird.Date_of_Birth();
           System.out.print("Date_of_Birth: " );
           System.out.print((dob2.get(Calendar.MONTH) + 1 ) + "/");
           System.out.print(dob2.get(Calendar.DATE) + "/" );               
           System.out.println(dob2.get(Calendar.YEAR));  

           System.out.println("Species:" + new_bird.Species());
           System.out.println("Wingspan: " + new_bird.Wingspan());
           System.out.println();               
        } 
    }
}
