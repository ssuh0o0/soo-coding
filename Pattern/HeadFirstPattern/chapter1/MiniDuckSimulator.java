package Pattern.HeadFirstPattern.chapter1;

public class MiniDuckSimulator {
    public static void main(String[] args) {
        Duck mallard = new MallardDuck();
        mallard.performQuack();
        mallard.performFly();

        // 서브 클래스에서 세터 메소드를 호출한다.
        // 오리의 행동을 동적으로 바꾼다.
        Duck model = new ModelDuck();
        model.performFly();
        model.setFlyBehavior(new FlyRocketPowered());
        model.performFly();
    }
}
