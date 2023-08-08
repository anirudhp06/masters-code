/* C.	Demonstration of Command Line Based Java Programming - Identify suitable application to do the following
	i. Arrays store the value of invoice bill of a restaurant for ex: name of customer, qty, rate, 
	   total (add 5% SGST and 5% CGST) and display grand_total.
 */
import java.util.Scanner;

public class pgm1c {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter customer name: ");
        String customerName = scanner.nextLine();

        System.out.print("Enter quantity: ");
        int quantity = scanner.nextInt();

        System.out.print("Enter rate per item: ");
        double rate = scanner.nextDouble();

        double total = quantity * rate;
        double sgst = total * 0.05; // 5% SGST
        double cgst = total * 0.05; // 5% CGST
        double grandTotal = total + sgst + cgst;

        System.out.println("\nInvoice Details:");
        System.out.println("Customer Name: " + customerName);
        System.out.println("Quantity: " + quantity);
        System.out.println("Rate per Item: " + rate);
        System.out.println("Total: " + total);
        System.out.println("SGST (5%): " + sgst);
        System.out.println("CGST (5%): " + cgst);
        System.out.println("Grand Total: " + grandTotal);

        scanner.close();
    }
}
