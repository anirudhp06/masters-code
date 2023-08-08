/* B.	Demonstration of Command Line Based Java Programming - Identify suitable application to do the following
	i. Strings handling functions such as – length, concat, equals, isEmpty 
 */

import java.util.Scanner;
public class pgm1b {
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);

        System.out.print("Enter your First name:");
        String name=scan.next();
        System.out.print("Enter your Last name:");
        String last=scan.next();

        //Length function
        int f_length=name.length();
        //concat function
        String full_name=name.concat(last);

        System.out.println("Your first name is of:"+f_length+" characters");
        System.out.println("Concatination of first & last name is:"+full_name);

        //equals() function
        System.out.println(name+"=="+last+"?="+name.equals(last));
        //isEmpty() function
        System.out.println("Is name variable empty?:"+name.isEmpty());
    }
}
