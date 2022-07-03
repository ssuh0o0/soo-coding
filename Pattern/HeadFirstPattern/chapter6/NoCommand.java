package Pattern.HeadFirstPattern.chapter6;

public class NoCommand implements Command {

    @Override
    public void execute() {
        // TODO Auto-generated method stub
        System.out.println("no command");
    }

    public void undo() {
        System.out.println("no command");
    }
    
}
