/*
 * LED Blinking
 * Code Written by TechMartian
 */
const int ledPin1 = 5;
const int ledPin2 = 18;
const int ledPin3 = 19;
void setup() {
  // setup pin 5 as a digital output pin
  pinMode (ledPin1, OUTPUT);
  pinMode (ledPin2, OUTPUT);
  pinMode (ledPin3, OUTPUT);
}
void loop() {
  digitalWrite (ledPin1, HIGH);  // turn on the LED
  delay(500); // wait for half a second or 500 milliseconds
  digitalWrite (ledPin1, LOW); // turn off the LED
  delay(500); // wait for half a second or 500 milliseconds

  digitalWrite (ledPin2, HIGH);  // turn on the LED
  delay(1000); // wait for half a second or 500 milliseconds
  digitalWrite (ledPin2, LOW); // turn off the LED
  delay(1000); // wait for half a second or 500 milliseconds

  digitalWrite (ledPin3, HIGH);  // turn on the LED
  delay(1500); // wait for half a second or 500 milliseconds
  digitalWrite (ledPin3, LOW); // turn off the LED
  delay(1500); // wait for half a second or 500 milliseconds
}
