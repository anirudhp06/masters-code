import java.io.*;
import java.lang.*;
public class PressSwitch{
    public static void main(String[] args) {
        Light lamp=new Light();
        Cammand switchUp=new flipupCmd(lamp);
        Cammand switchDown=new flipdownCmd(lamp);

        Switch s=new Switch(switchUp,switchDown);

        try{
            if(args[0].equalsIgnoreCase("ON"))
                s.flipUp();
            else if(args[0].equalsIgnoreCase("OFF"))
                s.flipDown();
            else
                System.out.println("Arguments Required");
        }
        catch(Exception e){
            e.printStackTrace();
        }
    }
}