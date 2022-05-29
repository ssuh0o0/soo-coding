package Pattern.HeadFirstPattern.chapter1DesignPuzzle;

public class Knight extends Character {
    public Knight(){
        weaponBehavior = new SwordBehavior();
    }

    public void fight(){
        System.out.println("저는 나이트입니다");
    }
}
