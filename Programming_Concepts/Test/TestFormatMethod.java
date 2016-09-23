
import java.util.Scanner;
import java.text.NumberFormat;

public class TestFormatMethod
{

public static void main (String[] args)
{
	final double TAX_RATE = 0.06;  
	// 6% sales tax
	int quantity;
	double subtotal, tax, totalCost, unitPrice;
	Scanner scan = new Scanner (System.in);
	NumberFormat fmtCur = NumberFormat.getCurrencyInstance();
      NumberFormat fmtPct = NumberFormat.getPercentInstance();

      System.out.print ("Enter the quantity: ");
      quantity = scan.nextInt();

      System.out.print ("Enter the unit price: ");
      unitPrice = scan.nextDouble();

      subtotal = quantity * unitPrice;
      tax = subtotal * TAX_RATE;
      totalCost = subtotal + tax;

      // Print output with appropriate formatting
      System.out.println ("Subtotal: " + fmtCur.format(subtotal));
      System.out.println ("Tax: " + fmtCur.format(tax) + " at "
                          + fmtPct.format(TAX_RATE));
      System.out.println ("Total: " + fmtCur.format(totalCost));
}
}



