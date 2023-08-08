/* C. Demonstration of Command Line Based Java Programming – Identify suitable application to do the following 
i. Illustrate the local variable, instance variable and scope of class objects. 
 */
public class pgm2c {
    // Instance variable
    private int instanceVar;

    public void setInstanceVar(int value) {
        instanceVar = value;
    }

    public void printInstanceVar() {
        System.out.println("Instance variable value: " + instanceVar);
    }

    public static void main(String[] args) {
        // Local variable
        int localVar = 5;

        pgm2c obj1 = new pgm2c();
        obj1.setInstanceVar(10);
        obj1.printInstanceVar();

        pgm2c obj2 = new pgm2c();
        obj2.setInstanceVar(20);
        obj2.printInstanceVar();

        System.out.println("Local variable value: " + localVar);

        // Uncommenting the line below will result in a compilation error
        // System.out.println("Instance variable value: " + instanceVar);
    }
}
