public class Peer {
    public Reciever theReciever;
    public Forwarder forword=new Forwarder();

    public void service(){
        System.out.println("Sending Message");
        forword.marshal();
    }

    public static void main(String[] args) {
        new Peer().service();
    }
}
