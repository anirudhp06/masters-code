import java.util.Observable;
import java.util.Observer;
public class PriceObserver implements Observer {
    private float Price;
    public PriceObserver(){
        Price=0;
        System.out.println("PriceObserver created!\nPrice is:"+Price);
    }
    public void update(Observable obj,Object arg) {
        if(arg instanceof Float){
            Price=((float)arg);
        }
        else
            System.out.println("PriceObserver:\nPrice changed:"+Price);
    }
}
