/**
 * This lab repo contains code to display a DHT11 to a 16x2 LCD screen
 * First Last - Month Year
 */

#include <DHT.h>
#include <LiquidCrystal.h>

const int dhtPin = 2;
const int rs = 7;
const int en = 8;
const int d4 = 9;
const int d5 = 10;
const int d6 = 11;
const int d7 = 12;

const int pause = 5000;

// set up objects
DHT dht(dhtPin, DHT11);

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

/**
 * @brief Converts a temperature from Celsius to Fahrenheit.
 *
 * @param tempC Temperature in Celsius
 * @return Temperature in Fahrenheit
 */
float celsiusToFahrenheit(float tempC) {
  // TODO: Convert Celsius to Fahrenheit
  return 0.0;
}

void setup() {
  dht.begin();

  // TODO: initialize the 16x2 LCD

  // TODO: Display a short welcome message
  
}

void loop() {
    float tempCelsius = dht.readTemperature();
    float humidity = dht.readHumidity();

    // TODO: Convert the temperature to Fahrenheit
  
    // TODO: position cursor at starter of row 1

    // TODO: Display temp in Fahrenheit
    // format - Temp: xx.x F

    // TODO: position cursor at starter of row 2
    // format - Humidity: xx.x%

    // TODO: wait 5 seconds before updating

}
