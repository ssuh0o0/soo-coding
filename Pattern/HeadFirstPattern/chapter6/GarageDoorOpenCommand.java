package Pattern.HeadFirstPattern.chapter6;

public class GarageDoorOpenCommand implements Command {
    GarageDoor door;

    public GarageDoorOpenCommand(GarageDoor door){
        this.door = door;
    }
    @Override
    public void execute() {
        // TODO Auto-generated method stub
        door.up();
        
    }

    @Override
    public void undo() {
        // TODO Auto-generated method stub
        door.down();
    }
    
}
