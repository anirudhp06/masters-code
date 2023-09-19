/*
 * Program 2
 * Producer Consumer using Threads
 */

class Shop{
    private static int materials;
    private boolean available = false;
    public synchronized void put(int value){
        while(available == true){
            try{
                wait();
            }catch(InterruptedException e){
                e.printStackTrace();
            }
        }
        materials = value;
        available = true;
        notifyAll();
        System.out.println("Produced val: "+materials);
    }
    public synchronized int get(){
        while(available == false){
            try{
                wait();
            }catch(InterruptedException e){
                e.printStackTrace();
            }
        }
        available = false;
        notifyAll();
        System.out.println("Consumed val: "+materials);
        return materials;
    }
}

class Producer extends Thread{
    private Shop shop;
    public Producer(Shop shop){
        this.shop = shop;
    }
    public void run(){
        for(int i=0;i<10;i++){
            shop.put(i);
        }
    }
}
class Consumer extends Thread{
    private Shop s;
    public Consumer(Shop s){
        this.s = s;
    }
    public void run(){
        for(int i=0;i<10;i++){
            s.get();
        }
    }
}
public class ProdCons {
    public static void main(String[] args){
        Shop c = new Shop();
        Producer p1=new Producer(c);
        Consumer c1=new Consumer(c);
        p1.start();
        c1.start();
    }
}
