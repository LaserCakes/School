//======================================================================
// Steven Romeiro
// ProjectDistance.java
//
// Purpose: To compute the distance between two user generated points.
//======================================================================

import java.util.Scanner;
import java.text.DecimalFormat;

public class ProjectDistance
{
	public static void main(String[] args)
	{
		double X1, X2, Y1, Y2, deltaX, deltaY, distance;
		
		Scanner scan = new Scanner(System.in);
		DecimalFormat rounded = new DecimalFormat("0.###");
		
		System.out.println();
		System.out.println("This program will compute the distance"
							+ " between two points.");
		System.out.println("Please enter the X/Y coordinates to be "
							+ "calculated:");
		// Store the results to be entered as floating point values
		// to be calculated later
		System.out.print("X1: ");
		X1 = scan.nextDouble();
		System.out.print("Y1: ");
		Y1 = scan.nextDouble();
		System.out.print("X2: ");
		X2 = scan.nextDouble();
		System.out.print("Y2: ");
		Y2 = scan.nextDouble();
		
		System.out.println("Computing the distance between "+"("+X1+
							","+Y1+")"+ " and "+"("+X2+","+Y2+")...");
							
		// Calculates the difference between the X and Y coordinates					
		deltaX = X2 - X1;
		deltaY = Y2 - Y1;
		// Calculates distance by square rooting the sum of the previous 
		// calculation squared.
		distance = Math.sqrt(Math.pow(deltaX,2) + Math.pow(deltaY,2));
		System.out.println();
		System.out.println("The distance is: " + rounded.format(distance));
		System.out.println();
		}
}

