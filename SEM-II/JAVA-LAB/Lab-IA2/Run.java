/*
 * 3rd Lab IA 2 Program
 * Implementing threads using Runnable interface
 */

class Thread1 implements Runnable {
    public void run() {
        for (int i = 0; i < 10; i++) {
            System.out.println("Thread 1: " + i);
        }
    }
}
public class Run {
    public static void main(String[] args) {
        Thread1 t1 = new Thread1();
        Thread t = new Thread(t1);
        t.start();
        for (int i = 0; i < 10; i++) {
            System.out.println("Main Thread: " + i);
        }
    }   
}