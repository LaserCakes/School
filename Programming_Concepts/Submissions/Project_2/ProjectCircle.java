//**********************************************************
//  Circle.java
//	Steven Romeiro
//
//  Print the area and circumference of a circle with two 
//	different radii, then compute their growth factor
//**********************************************************

public class ProjectCircle
{
    public static void main(String[] args)
    {
		final double PI = 3.14159;
		int radius1, radius2;
		double area1, area2, circumference1, circumference2, areaChange,
			   circumferenceChange;
		 
		radius1 = 10;
		area1 = PI * radius1 * radius1;
		circumference1 = 2 * PI * radius1;

		System.out.println("The area of a circle with radius " + radius1
							+ " is " + area1);
		System.out.println("The circumference of a circle with radius " 
							+ radius1 + " is " + circumference1);

		radius2 = 20;
		area2 = PI * radius2 * radius2;
		circumference2 = 2 * PI * radius2;

		System.out.println("The area of a circle with radius " + radius2
							+ " is " + area2);
		System.out.println("The circumference of a circle with radius "
							+ radius2 + " is " + circumference2);
								 
		areaChange = radius2 / radius1;
		circumferenceChange = circumference2 / circumference1;
		 
		System.out.println("The area grew by a factor of: " + 
							areaChange);
		System.out.println("The circumference grew by a factor of: " + 
							circumferenceChange);
    }
}
