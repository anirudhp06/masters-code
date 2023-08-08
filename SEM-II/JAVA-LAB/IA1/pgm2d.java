/* D. Demonstration of Command Line Based Java Programming – Identify suitable application to do the following
i. Implement the Recursion to find the factorial of a given number
ii. Illustrate Modifiers – Super, final and static
*/

 
//you all can do recursion hence it has been commented
/* public class FactorialCalculator {
    public static int factorial(int n) {
        if (n == 0 || n == 1) {
            return 1;
        } else {
            return n * factorial(n - 1);
        }
    }

    public static void main(String[] args) {
        int number = 5;
        int result = factorial(number);
        System.out.println("Factorial of " + number + " is: " + result);
    }
}
 */

 class Parent {
    int parentVar = 10;

    void display() {
        System.out.println("Parent class method");
    }
}

class Child extends Parent {
    int childVar = 20;

    @Override
    void display() {
        super.display(); // Calling parent class method using super
        System.out.println("Child class method");
    }
}

class Demo {
    final int constantVar = 100; // Final variable

    static int staticVar = 50; // Static variable

    void printConstantAndStatic() {
        System.out.println("Constant variable: " + constantVar);
        System.out.println("Static variable: " + staticVar);
    }
}

public class pgm2d {
    public static void main(String[] args) {
        Child childObj = new Child();
        childObj.display();
        System.out.println("Parent variable: " + childObj.parentVar);
        System.out.println("Child variable: " + childObj.childVar);

        Demo demoObj = new Demo();
        demoObj.printConstantAndStatic();

        Demo.staticVar = 75; // Updating static variable
        demoObj.printConstantAndStatic();
    }
}
