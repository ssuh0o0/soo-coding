package Pattern.HeadFirstPattern.chapter1DesignPuzzle;

public class Troll extends Character {
    public Troll(){
        weaponBehavior = new AxeBehavior();
    }

    public void fight(){
        System.out.println("저는 트롤입니다");
    }
}
