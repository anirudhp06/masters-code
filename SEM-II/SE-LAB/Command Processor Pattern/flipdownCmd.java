public class flipdownCmd implements Cammand{
    public Light theLight;

    public flipdownCmd(Light light){
        this.theLight=light;
    }
    
    public void execute(){
        theLight.turnOff();
    }
}
