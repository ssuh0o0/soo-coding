package Pattern.HeadFirstPattern.chapter4;

public class ChicagoCheesePizza extends Pizza{
    PizzaIngredientFactory ingredientFactory;

    public ChicagoCheesePizza(PizzaIngredientFactory ingredientFactory){
        this.ingredientFactory = ingredientFactory;
    }

    void prepare() {
        System.out.println("준비중 "+name);
        dough = ingredientFactory.createDough();
        sauce = ingredientFactory.createSauce();
        
    }
}
