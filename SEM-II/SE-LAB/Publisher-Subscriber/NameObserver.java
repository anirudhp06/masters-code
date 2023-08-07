import java.util.Observer;
import java.util.Observable;

public class NameObserver implements Observer {
    private String Name;
    public NameObserver(){
        Name=null;
        System.out.println("Name observer created!");
    }
    public void update(Observable obj,Object arg){
        if(arg instanceof String){
            Name=(String)arg;
            System.out.println("Name Observer:"+Name);
        }
        else
            System.out.println("Name observer:Some other change to subject");
    }
}
