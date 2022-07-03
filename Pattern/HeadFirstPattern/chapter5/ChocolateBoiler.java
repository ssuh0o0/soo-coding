package Pattern.HeadFirstPattern.chapter5;

public class ChocolateBoiler {
    private boolean empty;
    private boolean boiled;
    private static ChocolateBoiler uniqueInstance;

    private ChocolateBoiler() {
        empty = true;
        boiled = false;
    }
    public static ChocolateBoiler getInstance(){
        if(uniqueInstance == null){
            uniqueInstance = new ChocolateBoiler();
        }
        return uniqueInstance;
    }
    public boolean isEmpty(){
        return empty;
    }

    public void fill(){
        if (isEmpty()){
            empty = false;
            boiled = false;
        }
    }
}
