package Pattern.HeadFirstPattern.chapter1DesignPuzzle;

public class Queen extends Character {
    public Queen(){
        weaponBehavior = new KnifeBehavior();
    }

    public void fight(){
        System.out.println("저는 퀸입니다.");
    }
}
