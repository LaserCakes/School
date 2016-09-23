//**************************************************
//  Dog_Tester.java
//     A test driver for class Dog.
//**************************************************
import java.util.*;

public class Dog_Tester
{
    public static void main (String[] args)
    {
        //String kind_of_animal;
        String name;
        String owner_name;
        Calendar dob;
        int day, month, year;
        String breed, favorite_treat;
        
        Scanner keyboardScanner = new Scanner(System.in);
        
        while (true)
        {
            // System.out.print("Kind of animal: ");
            // kind_of_animal = keyboardScanner.nextLine();
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
            System.out.print("Favorite treat: ");
            favorite_treat = keyboardScanner.nextLine();
            Dog new_dog = 
                new Dog(name, owner_name, dob, breed, favorite_treat);
            
           System.out.println();
           System.out.println(new_dog);
           System.out.println();
           
           System.out.println("Instance variables:");
           System.out.println("Kind_of_animal: " + new_dog.Kind_of_animal());
           System.out.println("Name: " + new_dog.Name());
           System.out.println("Owner_name: " + new_dog.Owner_name());
           
           Calendar dob2 = new_dog.Date_of_Birth();
           System.out.print("Date_of_Birth: " );
           System.out.print((dob2.get(Calendar.MONTH) + 1 ) + "/");
           System.out.print(dob2.get(Calendar.DATE) + "/" );               
           System.out.println(dob2.get(Calendar.YEAR));  

           System.out.println("Breed:" + new_dog.Breed());
           System.out.println("Favorite treat: " + new_dog.Favorite_treat());
           System.out.println();               
        } 
    }
}
