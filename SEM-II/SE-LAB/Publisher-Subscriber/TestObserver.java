import java.util.*;

public class TestObserver{
    public static void main(String[] args) {
        ConcreteSubject s=new ConcreteSubject("corn pop", 1.29f);
        NameObserver nameobs=new NameObserver();
        PriceObserver priceobs=new PriceObserver();
        s.addObserver(nameobs);
        s.addObserver(priceobs);
        s.setName("frostyed flakes");
        s.setPrice(4.57f);
        s.setPrice(9.22f);
        s.setName("sugar crispies");
    }
}