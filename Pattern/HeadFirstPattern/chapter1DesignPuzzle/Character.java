package Pattern.HeadFirstPattern.chapter1DesignPuzzle;

public abstract class Character {

    WeaponBehavior weaponBehavior;
    public Character(){}
    public abstract void fight();

    public void startFight(){
        weaponBehavior.useWeapon();
    }
}
