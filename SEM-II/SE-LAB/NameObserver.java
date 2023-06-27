import java.util.Observer;
import jaba.util.Observable;

public class NameObserver implements Observer {
    private String Name;
    public NameObserver(){
        Name=null;
        System.out.println("Name observer created!");
    }
    public void update(Observable obj,Object arg){
        if(arg instanceof String){
            Name=(String)arg;
        }
    }
}
