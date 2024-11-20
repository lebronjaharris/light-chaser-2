// Define pin numbers for the RGB LED
const int redPin = 9;       // Pin connected to the red component of the RGB LED
const int greenPin = 10;    // Pin connected to the green component of the RGB LED
const int bluePin = 11;     // Pin connected to the blue component of the RGB LED

// Define the delay time for the chaser effect
const int delayTime = 200;  // Delay time in milliseconds

void setup() {
  // Initialize the RGB LED pins as outputs
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // Chaser effect: Red
  setColor(255, 0, 0);       // Set the LED to red
  delay(delayTime);          // Wait for the specified delay
  setColor(0, 0, 0);         // Turn off the LED
  
  // Chaser effect: Green
  setColor(0, 255, 0);       // Set the LED to green
  delay(delayTime);          // Wait for the specified delay
  setColor(0, 0, 0);         // Turn off the LED
  
  // Chaser effect: Blue
  setColor(0, 0, 255);       // Set the LED to blue
  delay(delayTime);          // Wait for the specified delay
  setColor(0, 0, 0);         // Turn off the LED
  
  // Chaser effect: Yellow
  setColor(255, 255, 0);     // Set the LED to yellow
  delay(delayTime);          // Wait for the specified delay
  setColor(0, 0, 0);         // Turn off the LED
  
  // Chaser effect: Cyan
  setColor(0, 255, 255);     // Set the LED to cyan
  delay(delayTime);          // Wait for the specified delay
  setColor(0, 0, 0);         // Turn off the LED
  
  // Chaser effect: Magenta
  setColor(255, 0, 255);     // Set the LED to magenta
  delay(delayTime);          // Wait for the specified delay
  setColor(0, 0, 0);         // Turn off the LED
  
  // Chaser effect: White
  setColor(255, 255, 255);   // Set the LED to white
  delay(delayTime);          // Wait for the specified delay
  setColor(0, 0, 0);         // Turn off the LED
}

// Function to set the RGB LED color using PWM
void setColor(int red, int green, int blue) {
  analogWrite(redPin, red);   // Set the red component of the RGB LED
  analogWrite(greenPin, green); // Set the green component of the RGB LED
  analogWrite(bluePin, blue);  // Set the blue component of the RGB LED
}


