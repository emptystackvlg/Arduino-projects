void setup() {
  Serial.begin(9600);
  pinMode (2 , INPUT_PULLUP) ;
}

void loop() {
  // Получаем состояние кнопки и выводим в мониторе порта
  int buttonState = digitalRead(2);
  if (buttonState == 0 ){
      Serial.println ('e') ;
    }
  else if (buttonState == 1) {
      Serial.println ('d') ;
    }
}
