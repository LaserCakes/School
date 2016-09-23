//**************************************************
//  Bird_Tester.java
//     A test driver for class Cat.
//**************************************************
import java.util.*;

public class Cat_Tester
{
    public static void main (String[] args)
    {
        String name;
        String owner_name;
        Calendar dob;
        int day, month, year;
        String breed, preferred_catfood;
        
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
            
            System.out.print("Breed: ");
            breed = keyboardScanner.nextLine();
            System.out.print("Preferred catfood: ");
            preferred_catfood = keyboardScanner.nextLine();
            Cat new_cat = 
                new Cat(name, owner_name, dob, breed, preferred_catfood);
            
           System.out.println();
           System.out.println(new_cat);
           System.out.println();
           
           System.out.println("Instance variables:");
           System.out.println("Kind_of_animal: " + new_cat.Kind_of_animal());
           System.out.println("Name: " + new_cat.Name());
           System.out.println("Owner_name: " + new_cat.Owner_name());
           
           Calendar dob2 = new_cat.Date_of_Birth();
           System.out.print("Date_of_Birth: " );
           System.out.print((dob2.get(Calendar.MONTH) + 1 ) + "/");
           System.out.print(dob2.get(Calendar.DATE) + "/" );               
           System.out.println(dob2.get(Calendar.YEAR));  

           System.out.println("Breed:" + new_cat.Breed());
           System.out.println("Preferred_catfood: " + new_cat.Preferred_catfood());
           System.out.println();               
        } 
    }
}
