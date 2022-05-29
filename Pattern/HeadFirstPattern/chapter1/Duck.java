package Pattern.HeadFirstPattern.chapter1;
public abstract class Duck{

    // 오리 중에는 날 수 있/없고, 짖을 수 있/없는 오리가 있다.
    // 따라서 행동을 인터페이스화 해서 선언한다.
    // 그리고 레퍼런스 변수로 선언한다.
    FlyBehavior flyBehavior;
    QuackBehavior quackBehavior;

    public Duck() {}
    public abstract void display();


    // 행동 클래스에 위임한다.
    public void  performFly(){
        flyBehavior.fly();  
    }

    public void performQuack(){
        quackBehavior.quack();
    }

    public void swim(){
        System.out.println("모든 오리는 물에 뜹니다. 가짜 오리도 뜨죠");
    }

    public void setFlyBehavior(FlyBehavior fb){
        flyBehavior = fb;
    }

    public void setQuackBehavior(QuackBehavior qb){
        quackBehavior = qb;
    }

}