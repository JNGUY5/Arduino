    /* SimpleToggle_PB_LED */
long interval = 100;
long Beforemillis = 0;
const byte LEDpin = 3;
const byte SWITCHpin = 2;

byte LEDstate = HIGH;
byte SWITCHstate;
byte lastSWITCHstate;

void setup() {
  // put your setup code here, to run once:
pinMode(LEDpin, OUTPUT);
pinMode(SWITCHpin, INPUT);
digitalWrite(SWITCHpin, HIGH);
}


void loop() {
  // put your main code here, to run repeatedly:
 
  SWITCHstate = digitalRead(SWITCHpin);

  if ((lastSWITCHstate == HIGH) && (SWITCHstate == LOW))
  {

   unsigned long currentMillis = millis();
 
    if(currentMillis - Beforemillis > interval){
    Beforemillis = currentMillis;   

      LEDstate = !LEDstate;
      digitalWrite(LEDpin, LEDstate);
    }
    
   
    
    
    
}
lastSWITCHstate = SWITCHstate;
}
