import java.lang.*;
import java.io.*;
public class Forwarder {
    public Reciever r=new Reciever();

    public void marshal(){
        System.out.println("Marshal done");
        r.unmarshal();
    }
}
