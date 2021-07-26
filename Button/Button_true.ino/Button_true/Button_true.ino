

void setup() {
  Serial.begin(9600);
  pinMode (2 , INPUT_PULLUP) ;
  pinMode (7 , OUTPUT );
}

void loop() {
  int ss = digitalRead (7);
  ss = !ss ; 
  int buttonState = digitalRead(2);
  Serial.println(buttonState);
  delay(50);
  if (buttonState == 0 ){
  
    digitalWrite (7 ,ss);
   
    }
}
