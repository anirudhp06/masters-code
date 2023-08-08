/* Demonstration of Command Line Based Java Programming – Identify suitable application to do the following
i.  Implement the usage of all access specifiers such as public, private, protected and default. 
 */
class AccessDemo {
    public int publicVar = 10;
    private int privateVar = 20;
    protected int protectedVar = 30;
    int defaultVar = 40;

    public void publicMethod() {
        System.out.println("This is a public method.");
    }

    private void privateMethod() {
        System.out.println("This is a private method.");
    }

    protected void protectedMethod() {
        System.out.println("This is a protected method.");
    }

    void defaultMethod() {
        System.out.println("This is a default method.");
    }
}

public class pgm2b {
    public static void main(String[] args) {
        AccessDemo demo = new AccessDemo();

        // Accessing variables
        System.out.println("Public variable: " + demo.publicVar);
        // System.out.println("Private variable: " + demo.privateVar); // Won't compile
        System.out.println("Protected variable: " + demo.protectedVar);
        System.out.println("Default variable: " + demo.defaultVar);

        // Accessing methods
        demo.publicMethod();
        // demo.privateMethod(); // Won't compile
        demo.protectedMethod();
        demo.defaultMethod();
    }
}

