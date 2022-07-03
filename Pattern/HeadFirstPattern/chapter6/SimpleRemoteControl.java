package Pattern.HeadFirstPattern.chapter6;

public class SimpleRemoteControl {
    Command slot;
    public SimpleRemoteControl() {}
    public void setCommand(Command command){
        slot = command;
    }
    public void buttonWasPressed(){
        slot.execute();
    }
    public void setCommand(int i, Object object, Object object2) {
    }
}
