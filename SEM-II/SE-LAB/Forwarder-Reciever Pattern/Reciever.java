public class Reciever {
    public void recieve(){
        System.out.println("Message Recieved");
    }

    public void unmarshal(){
        System.out.println("Unmarshal Done");
        recieve();
    }
}
