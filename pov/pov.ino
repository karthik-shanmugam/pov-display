/*
  Blink
  The basic Energia example.
  Turns on an LED on for one second, then off for one second, repeatedly.
  Change the LED define to blink other LEDs.
  
  Hardware Required:
  * LaunchPad with an LED
  
  This example code is in the public domain.
*/






// most launchpads have a red LED
#define LED RED_LED

//see pins_energia.h for more LED definitions
//#define LED GREEN_LED
  
// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  for (int i = 0; i < 17; i ++){}
    pinMode(i, OUTPUT);  
  }   
}

// the loop routine runs over and over again forever:
void loop() {
  myValues = {HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH};
  update();
  delay(500);               // wait for a second
  myValues = {HIGH, LOW, HIGH, LOW, HIGH, LOW, HIGH, LOW, HIGH, LOW, HIGH, LOW, HIGH, LOW, HIGH, LOW};
  update();
  delay(500);               // wait for a second
  myValues = {LOW, HIGH, LOW, HIGH, LOW, HIGH, LOW, HIGH, LOW, HIGH, LOW, HIGH, LOW, HIGH, LOW, HIGH};
  update();
  delay(500);  
  myValues = {LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH};
  update();
  delay(500); 
  myValues = {HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, LOW, LOW, LOW, LOW, LOW, LOW, LOW, LOW};
  update();
  delay(500); 

}
int myPins[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 18, 19};
int myValues[16];

void update() {
  for (int i = 0; i < 17; i ++){
    digitalWrite(myPins[i], myValues[i]);
  }
}