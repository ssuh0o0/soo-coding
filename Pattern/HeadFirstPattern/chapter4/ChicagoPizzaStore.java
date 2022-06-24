package Pattern.HeadFirstPattern.chapter4;

public class ChicagoPizzaStore extends PizzaStore {

    Pizza createPizza(String item){
        if(item.equals("cheese")){
            return new ChicagoCheesePizza();
        } return null;
    }

}
