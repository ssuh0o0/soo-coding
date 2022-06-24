package Pattern.HeadFirstPattern.chapter2;

public class ForecastDisplay implements Observer, DisplayElement {
    private float currentPressure = 29.2f;
    private float lastPressure = 0.0f;
    private WeatherData weatherData;
    
    public ForecastDisplay(WeatherData weatherData){
        this.weatherData = weatherData;
        weatherData.registerObserver(this);
    }
    public void update(){
        lastPressure = currentPressure;
        currentPressure = weatherData.getPressure();
        display();
    }

    public void display(){
        System.out.println("보여주기");
    }

}
