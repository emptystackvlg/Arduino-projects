char inChar;
int i = 0 ;

void setup() {
  pinMode(11, OUTPUT);
   
  pinMode(10, OUTPUT); 
  
  pinMode(6, OUTPUT);
   
  pinMode(5, OUTPUT);
   
  pinMode(3, OUTPUT); 
  
  pinMode (13 , OUTPUT);

  digitalWrite (13 , LOW);
  
  Serial.begin(9600); 
}

void loop() {
  if (Serial.available() > 0)
  {
    inChar = Serial.read();
    if (inChar=='e') 
    {
      while (1){
        if (Serial.read () == 'd') {
          
          digitalWrite (11 , LOW) ;
          
          digitalWrite (10 , LOW) ;
          
          digitalWrite (6 , LOW) ;

          digitalWrite (5 , LOW) ;

          digitalWrite (3 , LOW) ;

          
          break ;
          delay (50);
          }
        

        for (i = 1 ; i < 256 ; i = i+2)
        {
          analogWrite(11,i);
          delay (10);
          
          analogWrite(10,i);
          delay (10);
          
          analogWrite(6,i);
          delay (10);
          
          analogWrite(5,i);
          delay (10);
          
          analogWrite(3,i);
          delay (10);

          }
       
        for (i = 255 ; i >= 0 ; i= i-2)
        {
          analogWrite(11,i);
          delay (10);
          
          analogWrite(10,i);
          delay (10);
          
          analogWrite(6,i);
          delay (10);

          analogWrite (5 , i) ; 
          delay (10) ;

          analogWrite (3 , i ) ;
          delay (10) ;
          
        
        }
   
      }
    }
  }
}
