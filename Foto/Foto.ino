#define PIN_LED 10
#define PIN_PHOTO_SENSOR A0

void setup() {
  Serial.begin(9600);
  pinMode(PIN_LED, OUTPUT);
}

void loop() {
  int val = analogRead(PIN_PHOTO_SENSOR);
  Serial.println(val);

  int ledPower = map(val, 0, 1023, 0, 255); // Преобразуем полученное значение в уровень PWM-сигнала. Чем меньше значение освещенности, тем меньше мощности мы должны подавать на светодиод через ШИМ.

  ledPower -= 10 ;
  analogWrite(PIN_LED, ledPower); // Меняем яркость

}
