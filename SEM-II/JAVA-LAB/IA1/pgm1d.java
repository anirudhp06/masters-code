/* D.	Demonstration of Command Line Based Java Programming - Identify suitable application to do the following
	i. Illustrate, getting user input through Java Stream Classes of all data types of Java. 
 */
import java.util.Scanner;

public class pgm1d {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input for String
        System.out.print("Enter a string: ");
        String inputString = scanner.nextLine();
        System.out.println("You entered: " + inputString);

        // Input for Integer
        System.out.print("Enter an integer: ");
        int inputInt = scanner.nextInt();
        System.out.println("You entered: " + inputInt);

        // Input for Double
        System.out.print("Enter a double: ");
        double inputDouble = scanner.nextDouble();
        System.out.println("You entered: " + inputDouble);

        // Input for Boolean
        System.out.print("Enter a boolean (true/false): ");
        boolean inputBoolean = scanner.nextBoolean();
        System.out.println("You entered: " + inputBoolean);

        // Clear the newline character from the buffer
        scanner.nextLine();

        // Input for Character
        System.out.print("Enter a character: ");
        char inputChar = scanner.nextLine().charAt(0);
        System.out.println("You entered: " + inputChar);

        scanner.close();
    }
}

