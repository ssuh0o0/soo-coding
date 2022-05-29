package Pattern.HeadFirstPattern.chapter1DesignPuzzle;

public class ActionSimulator {
    public static void main(String[] args) {
        Character queen = new Queen();
        queen.fight();
        queen.startFight();

        Character king = new King();
        king.fight();
        king.startFight();

        Character troll = new Troll();
        troll.fight();
        troll.startFight();
    
        Character knight = new Knight();
        knight.fight();
        knight.startFight();
    }
}
