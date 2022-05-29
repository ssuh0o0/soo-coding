package Pattern.HeadFirstPattern.chapter1;

// implements는 부모의 메소드를 반드시 오버라이딩(재정의) 해야한다.
public class FlyWithWings implements FlyBehavior {
    public void fly(){
        System.out.println("날고 있어요!!");
    }
}
