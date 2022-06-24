package Pattern.HeadFirstPattern.chapter4;

public class PizzaTestDrive {
    public static void main(String[] args) {
        PizzaStore nyStore = new NYPizzaStore();
        PizzaStore ccStore = new ChicagoPizzaStore();

        Pizza pizza = nyStore.orderPizza("cheese");
        System.out.println(pizza.getName());

        pizza = ccStore.orderPizza("cheese");
        System.out.println(pizza.getName());
    }
}
