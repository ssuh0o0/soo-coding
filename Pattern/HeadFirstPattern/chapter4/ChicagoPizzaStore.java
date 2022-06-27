package Pattern.HeadFirstPattern.chapter4;

public class ChicagoPizzaStore extends PizzaStore {

    protected Pizza createPizza(String item) {
		Pizza pizza = null;
		PizzaIngredientFactory ingredientFactory = new ChicagoPizzaIngredientFactory();

		if(item.equals("cheese")){
			pizza = new CheesePizza(ingredientFactory);
            pizza.setName("시카고 스타일 치즈 피자");
		}

		return pizza;
	}


}
