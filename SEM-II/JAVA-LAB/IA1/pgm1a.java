/* A.	Demonstration of Command Line Based Java Programming – Identify suitable application to do the following
i. Declaration of variables and Initialization, 
ii. Conditional and Iterative Statements - If, else, for, while and switch
 */
import java.util.Scanner;
public class pgm1a {
    public static void main(String[] args) {
        int n;//Declaring variables
        Scanner scan=new Scanner(System.in);
        System.out.println("How many numbers:");
        n=scan.nextInt();
        System.out.println("Enter "+n+" numbers");

        //Declare variable
        int[] a=new int[n];
        //Using for loop to initialise array of numbers
        for(int i=0;i<n;i++){
            System.out.println("Enter "+(i+1)+" number:");
            a[i]=scan.nextInt();
        }

        //using while loop print only even numbers
        int j=0;
        System.out.println("Entered elements are:");
        while(j<a.length){
            if(a[j]%2==0){
                System.out.println(a[j]);
            }
            else{
                System.out.println("Encountered odd number at:"+j+" position");
            }
            j++;
        }
        //Switch-case
        System.out.println("Enter choice:1,2,3");
        int ch=scan.nextInt();
        switch(ch){
            case 1:
                System.out.println("hello");
                break;
            case 2:
                System.out.println("Hi");
                break;
            case 3:
                System.out.println("bye");
                break;
            default:
                System.out.println("Invalid Choice");
                break;
        }
    }
}
