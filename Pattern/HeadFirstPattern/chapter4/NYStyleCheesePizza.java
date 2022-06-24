package Pattern.HeadFirstPattern.chapter4;

public class NYStyleCheesePizza extends Pizza {
    PizzaIngredientFactory ingredientFactory;

    public NYStyleCheesePizza(PizzaIngredientFactory ingredientFactory){
        this.ingredientFactory = ingredientFactory;
    }

    void prepare() {
        System.out.println("준비중 "+name);
        dough = ingredientFactory.createDough();
        sauce = ingredientFactory.createSauce();
        
    }
}

