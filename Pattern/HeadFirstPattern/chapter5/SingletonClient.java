package Pattern.HeadFirstPattern.chapter5;

public class SingletonClient {
    public static void main(String[] args) {
        Singleton singleton = Singleton.UNIQUE_INSTANCE;
        System.out.println(singleton.getInstance());
    }
}
