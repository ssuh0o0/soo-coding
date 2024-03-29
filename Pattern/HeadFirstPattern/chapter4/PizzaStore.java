package Pattern.HeadFirstPattern.chapter4;

public abstract class PizzaStore {

    public Pizza orderPizza(String type){
        Pizza pizza;
        pizza = createPizza(type);
        pizza.prepare();
        pizza.bake();
        pizza.cut();
        pizza.bake();

        return pizza;
    }

    abstract Pizza createPizza(String type);
}
