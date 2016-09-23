//======================================================================
// ProjectWeight.java
// Steven Romeiro
//
// Purpose: Write a program to compute the ideal weight for both males
// and females who are over 5 feet tall
//======================================================================

import java.util.Scanner;

public class ProjectWeight
{
		public static void main(String[] args)
		{
			// The following values are the standard weights for males
			// and females that are five feet tall
			final int STANDARDMALE = 106;
			final int STANDARDFEMALE = 100;
			
			int heightFt, heightInch, newHeight, idealWeightMale,
				idealWeightFemale;
				
			Scanner scan = new Scanner(System.in);
			
			System.out.println("How tall are you? __feet and __inches");
			System.out.print("feet: "); 
			heightFt = scan.nextInt();
			System.out.print("inches: "); 
			heightInch = scan.nextInt();
			
			// newHeight variable converts entered height into inches
			newHeight = (heightFt * 12) + heightInch;
			idealWeightMale = ((newHeight - 60)*6) + STANDARDMALE;
			idealWeightFemale = ((newHeight - 60)*5) + STANDARDFEMALE;
			
			System.out.println("The ideal weight for men is: " + 
								idealWeightMale + "lbs");
			System.out.println("The ideal weight for women is: " + 
								idealWeightFemale + "lbs");
		}
}
