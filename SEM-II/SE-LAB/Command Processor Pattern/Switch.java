public class Switch {
    private Cammand flipupCmd;
    private Cammand flipdownCmd;
    public Switch(Cammand flipupCmd,Cammand flipdownCmd){
        this.flipdownCmd=flipdownCmd;
        this.flipupCmd=flipupCmd;
    }
    public void flipUp(){
        flipupCmd.execute();
    }
    public void flipDown(){
        flipdownCmd.execute();
    }
}
