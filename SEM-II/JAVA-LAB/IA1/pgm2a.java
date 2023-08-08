/* Demonstration of Command Line Based Java Programming – Identify suitable application to do the following
i. Java Method Parameters – Method overloading and Method Overriding
 */
class Animal {
    public void makeSound() {
        System.out.println("Animal makes a generic sound");
    }
    
    public void eat() {
        System.out.println("Animal eats food");
    }
}

class Dog extends Animal {
    // Overriding the makeSound method
    @Override
    public void makeSound() {
        System.out.println("Dog barks");
    }
    
    // Overloading the eat method
    public void eat(String food) {
        System.out.println("Dog eats " + food);
    }
}

public class pgm2a {
    public static void main(String[] args) {
        Animal genericAnimal = new Animal();
        genericAnimal.makeSound(); // Output: Animal makes a generic sound
        genericAnimal.eat();       // Output: Animal eats food
        
        Dog myDog = new Dog();
        myDog.makeSound();         // Output: Dog barks
        myDog.eat("bones");        // Output: Dog eats bones
        
        // Polymorphism
        Animal anotherDog = new Dog();
        anotherDog.makeSound();    // Output: Dog barks
        anotherDog.eat();          // Output: Animal eats food (inherited method)
    }
}
