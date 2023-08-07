public class flipupCmd implements Cammand {
    public Light theLight;
    public flipupCmd(Light light){
        this.theLight=light;
    }
    public void execute(){
        theLight.turnOn();
    }
}
