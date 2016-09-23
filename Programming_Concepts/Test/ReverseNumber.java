/*
 * ReverseNumber.java
 * 
 * Copyright 2016 Steven <romeiro@my-lappy>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */
import java.util.Scanner;

public class ReverseNumber
{
	public static void main (String args[]) 
	{
		int number, lastDigit, reverse = 0;
		Scanner scan = new Scanner(System.in);
		
		System.out.print("enter a positive integer: ");
		number = scan.nextInt();
		
		do
		{
			lastDigit = number % 10;
			System.out.println("LastDigit is: " + lastDigit);
			reverse = (reverse * 10) + lastDigit;
			System.out.println("Reverse is: " + reverse);
			number = number / 10;
			System.out.println("Number is: " + number);
		}
		while (number > 0);
		
		System.out.println("That number reversed is: " + reverse);
	}
}

