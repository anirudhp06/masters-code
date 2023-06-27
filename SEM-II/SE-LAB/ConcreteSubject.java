import java.lang.*;
import java.util.*;

public class ConcreteSubject extends Observable {
    private String Name;
    private float Price;
    public ConcreteSubject(String Name,float Price){
        this.Name=Name;
        this.Price=Price;
    }
    public String getName(){
        return Name;
    }

    public float getPrice(){
        return Price;
    }

    public void setName(String Name){
        this.Name=Name;
        setChanged();
        notifyObservers(Name);
    }

    public void setPrice(float Price){
        this.Price=Price;
        setChanged();
        notifyObservers((float)Price);
    }

}
