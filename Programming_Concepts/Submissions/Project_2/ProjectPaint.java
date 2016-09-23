//***************************************************************
// File: Paint.java
// Steven Romeiro
//
// Purpose: Determine how much paint is needed to paint the walls
// 			of a room, excluding doors and windows, given its length,
//			width, and height
//***************************************************************
import java.util.Scanner;

public class ProjectPaint
{

    public static void main(String[] args)
    {
        final int COVERAGE = 350;  //paint covers 350 sq ft/gal
        final int ONEDOOR = 20;   //Square footage of one door
        final int ONEWINDOW = 15; //Square footage of one window

        //declare integers length, width, height, number of doors,
        //square footage of doors, number of windows and square footage
        //of windows;
        int length, width, height, doors, doorSqFt, windows, windowSqFt;

        //declare double totalSqFt;
        double totalSqFt;

        //declare double paintNeeded;
        double paintNeeded;

	    //declare and initialize Scanner object
	    Scanner scan = new Scanner(System.in);

        //Prompt for and read in the length of the room
        System.out.println("What is the length of your room? ");
        length = scan.nextInt();

        //Prompt for and read in the width of the room
        System.out.println("What is the width of your room? ");
        width = scan.nextInt();

        //Prompt for and read in the height of the room
        System.out.println("What is the height of your room? ");
        height = scan.nextInt();

        //Prompt for and read in the total number of doors in the room
        System.out.println("How many doors are there in your room? ");
        doors = scan.nextInt();

        //Prompt for and read in the total number of windows in the room
        System.out.println("How many windows are there in your room? ");
        windows = scan.nextInt();

        //Compute the square footage of doors and windows in the room
        doorSqFt = ONEDOOR * doors;
        windowSqFt = ONEWINDOW * windows;

        //Compute the total square feet to be painted--think
        //about the dimensions of each wall
        totalSqFt = length * width * height;

        //Compute the amount of paint needed
        paintNeeded = (totalSqFt - doorSqFt - windowSqFt) / COVERAGE;

        //Print the length, width, and height of the room and the
        //number of gallons of paint needed.
        System.out.println("The length of your room is " + length +
							" feet");
        System.out.println("The width of your room is " + width +
							" feet");
        System.out.println("The height of your room is " + height +
							" feet");
        System.out.println("The amount of paint needed for this job is "
							+ paintNeeded + " gallons");
    }
}
