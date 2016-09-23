// Test template for in class programming excercises

import java.util.Scanner;
public class TestMathClass
{
		public static void main(String[] args)
		{
			int a, b, c;
			double discriminant, root1, root2;
			Scanner scan = new Scanner (System.in);
			System.out.print ("Enter the coefficiant of x squared: ");
			a = scan.nextInt();
			System.out.print ("Enter the coefficiant of x: ");
			b = scan.nextInt();
			System.out.print ("Enter the constant: ");
			c = scan.nextInt();
			
			discriminant = Math.pow(b,2) - (4*a*c);
			root1 = ((-1*b)+Math.sqrt(discriminant)) / (2*a);
			root2 = ((-1*b)-Math.sqrt(discriminant)) / (2*a);
			
			System.out.println(root1);
			System.out.println(root2);
		}
}
