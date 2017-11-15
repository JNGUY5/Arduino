        /*Simple_PB_LED_V1   */

const byte LEDpin = 3;
const byte SWITCHpin = 2;

byte LEDstate = LOW;

void setup() {
  // put your setup code here, to run once:
pinMode(LEDpin, OUTPUT);
pinMode(SWITCHpin, INPUT);
digitalWrite(SWITCHpin, HIGH);
}


void loop() {
  // put your main code here, to run repeatedly:
LEDstate = digitalRead(SWITCHpin);
digitalWrite(LEDpin, LEDstate);
}
