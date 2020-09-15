int i = 0 ;

void setup() {
  pinMode(11, OUTPUT); 
  
  pinMode(10, OUTPUT); 
  
  pinMode(6, OUTPUT); 

  pinMode (5 , OUTPUT ) ;
  
  pinMode (3 , OUTPUT) ;
  
  pinMode (13 , OUTPUT);

  digitalWrite (13 , LOW);
}

void loop() {
    
    for (i = 0 ; i < 256 ; i = i+1)
    {
      delay (10);
      analogWrite(11,i);
    
      delay (10);
      analogWrite(10,i);
      
      delay (10);
      analogWrite(6,i);

      delay (10) ;
      analogWrite (5 , i ) ;

      delay (10) ;
      analogWrite (3 , i) ;
      
    }
       
        for (i = 255 ; i >= 0 ; i= i-1)
        {
          delay (10);
          analogWrite(11,i);
          
          delay (10);
          analogWrite(10,i);
          
          delay (10);
          analogWrite(6,i);

          delay (10) ;
          analogWrite (5 , i) ;

          delay (10) ;
          analogWrite (3 , i ) ;
          
        }
      
    }
