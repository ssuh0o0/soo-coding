package Pattern.HeadFirstPattern.chapter1DesignPuzzle;

public class King extends Character {
    public King(){
        weaponBehavior = new BowAndArrowBehavior();
    }

    public void fight(){
        System.out.println("저는 킹입니다.");
    }
}
