// Defining the pin number that the sensor is connected to.
#define sensor_pin 7
int sensor_value;

void setup()
{
    // Setting the baud rate of the serial monitor to 115200.
    Serial.begin(115200);
    // This is a function that prints the text "MQ3 warming up!" to the serial monitor.
    Serial.println("MQ3 warming up!");
    // This is a function that delays the program for 120 seconds.
    delay(120000);
}

void loop()
{
    // This is a function that reads the digital value of the sensor pin.
    sensor_value = digitalRead(sensor_pin);
    // Printing the text "Digital Output: " to the serial monitor.
    Serial.print("Digital Output: ");
    // Printing the value of the sensor to the serial monitor.
    Serial.print(sensor_value);

    // This is a conditional statement that checks if the sensor value is true. If it is true, then the text "Alcohol: Not Detected" is printed to the serial monitor.
    if (sensor_value)
    {
        Serial.println("  |  Alcohol: Not Detected");
    }
    else
    {
        Serial.println("  |  Alcohol: Detected!");
    }

    // Delaying the program for 2 seconds.
    delay(2000);
}