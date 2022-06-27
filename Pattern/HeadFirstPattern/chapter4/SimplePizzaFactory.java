package Pattern.HeadFirstPattern.chapter4;

public class SimplePizzaFactory {

	public Pizza createPizza(String item) {
		Pizza pizza = null;
        PizzaIngredientFactory ingredientFactory = new NYPizzaIngredientFactory();
        if(item.equals("cheese")){
            pizza = new CheesePizza(ingredientFactory);
            pizza.setName("뉴욕 스타일 치즈 피자");
        } else if (item.equals("veggie")){
            pizza = new VeggiePizza(ingredientFactory);
        }
        return pizza;
	}
}

