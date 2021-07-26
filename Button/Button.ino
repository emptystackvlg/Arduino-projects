void setup() {
  pinMode(0, INPUT_PULLUP);
  pinMode (10 , OUTPUT ) ;
}

void loop() {
  int ss = digitalRead (10);
  ss = !ss ;
  
  int bs = digitalRead (0) ; 
  delay(20);
  
  int bf = digitalRead (0) ;
  
  if (bs == 0 and bs != bf ) 
  {
   
    digitalWrite (10 , ss);
  } 
}
