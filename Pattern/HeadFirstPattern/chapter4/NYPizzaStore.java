package Pattern.HeadFirstPattern.chapter4;

public class NYPizzaStore extends PizzaStore {
    Pizza createPizza(String item){
        if(item.equals("cheese")){
            return new NYStyleCheesePizza();
        } return null;
    }
}
