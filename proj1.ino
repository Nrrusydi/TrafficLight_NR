int ledDelay = 10000; // delay in between changes
int redPin = 10;
int yellowPin = 9;
int greenPin = 8;
int count=5;
void setup() {
pinMode(redPin, OUTPUT);
pinMode(yellowPin, OUTPUT);
pinMode(greenPin, OUTPUT);
}
void loop() {
// turn the red light on
digitalWrite(redPin, HIGH);
delay(ledDelay); // wait 5 seconds
digitalWrite(redPin, LOW); // turn red off
digitalWrite(yellowPin, HIGH); // turn on yellow
delay(2000); // wait 2 seconds
digitalWrite(greenPin, HIGH); // turn green on
digitalWrite(yellowPin, LOW); // turn yellow off
delay(7000); // wait ledDelay milliseconds
while(count>0){
digitalWrite(greenPin, LOW); // turn green on
delay(500);
digitalWrite(greenPin, HIGH); // turn green on
delay(500);
count =count-1;
}
digitalWrite(yellowPin, HIGH); // turn yellow off
delay(200);
digitalWrite(greenPin, LOW); // turn green off
delay(2000); // wait 2 seconds
digitalWrite(yellowPin, LOW); // turn yellow off
// now our loop repeats
}