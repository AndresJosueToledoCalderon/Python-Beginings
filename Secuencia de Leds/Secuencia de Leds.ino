int pinLed1 = 12, pinLed2 = 11, pinLed3 = 10, pinLed4 = 9; //pines de los leds
int pinLed5 = 8, pinLed6 = 7, pinLed7 = 6, pinLed8 = 5;
String valor; // Variable que almacena el string
int valLeds = 0; // 1 = HIGH; 0 = LOW

void setup() {
  Serial.begin(9600); // Velocidad de comunicacion serial
  delay(30); // tiempo opcional para establecer la comunicacion serie
  pinMode(pinLed1, OUTPUT); // Funcion del pin escogido, "Salida"
  pinMode(pinLed3, OUTPUT);
  pinMode(pinLed4, OUTPUT);
  pinMode(pinLed5, OUTPUT);
  pinMode(pinLed6, OUTPUT);
  pinMode(pinLed7, OUTPUT);
  pinMode(pinLed8, OUTPUT);
}

void loop() {
  if (Serial.available()) { // Lee que la comunicacion serie este disponible
    valor = Serial.readString(); // Lee y guarda el string recibido en la comunicacion serie
    valLeds = valor.toInt(); // Convierte el string en un int
    //Serial.println("String = " + valor); // permite ver el dato envido y recibido
    Serial.println("Comunicacion establecidad!");
  }
  if (valLeds == 0) { //Enciede la led segun el caso
    digitalWrite(pinLed1, 0);//HIGH
    digitalWrite(pinLed2, 0);//LOW
    digitalWrite(pinLed3, 0);//HIGH
    digitalWrite(pinLed4, 0);//LOW
    digitalWrite(pinLed5, 0);//HIGH
    digitalWrite(pinLed6, 0);//LOW
    digitalWrite(pinLed7, 0);//HIGH
    digitalWrite(pinLed8, 0);//LOW
    Serial.println("LEDs Apagados.");
  }
  else if (valLeds == 1) {
    digitalWrite(pinLed1, 1);//HIGH
    digitalWrite(pinLed2, 0);//LOW
    digitalWrite(pinLed3, 0);//HIGH
    digitalWrite(pinLed4, 0);//LOW
    digitalWrite(pinLed5, 0);//HIGH
    digitalWrite(pinLed6, 0);//LOW
    digitalWrite(pinLed7, 0);//HIGH
    digitalWrite(pinLed8, 0);//LOW
    Serial.println("LED 1");
  }
    else if (valLeds == 2) {
    digitalWrite(pinLed1, 0);//HIGH
    digitalWrite(pinLed2, 1);//LOW
    digitalWrite(pinLed3, 0);//HIGH
    digitalWrite(pinLed4, 0);//LOW
    digitalWrite(pinLed5, 0);//HIGH
    digitalWrite(pinLed6, 0);//LOW
    digitalWrite(pinLed7, 0);//HIGH
    digitalWrite(pinLed8, 0);//LOW
    Serial.println("LED 2");
  }
    else if (valLeds == 3) {
    digitalWrite(pinLed1, 0);//HIGH
    digitalWrite(pinLed2, 0);//LOW
    digitalWrite(pinLed3, 1);//HIGH
    digitalWrite(pinLed4, 0);//LOW
    digitalWrite(pinLed5, 0);//HIGH
    digitalWrite(pinLed6, 0);//LOW
    digitalWrite(pinLed7, 0);//HIGH
    digitalWrite(pinLed8, 0);//LOW
    Serial.println("LED 3");
  }
    else if (valLeds == 4) {
    digitalWrite(pinLed1, 0);//HIGH
    digitalWrite(pinLed2, 0);//LOW
    digitalWrite(pinLed3, 0);//HIGH
    digitalWrite(pinLed4, 1);//LOW
    digitalWrite(pinLed5, 0);//HIGH
    digitalWrite(pinLed6, 0);//LOW
    digitalWrite(pinLed7, 0);//HIGH
    digitalWrite(pinLed8, 0);//LOW
    Serial.println("LED 4");
  }
    else if (valLeds == 5) {
    digitalWrite(pinLed1, 0);//HIGH
    digitalWrite(pinLed2, 0);//LOW
    digitalWrite(pinLed3, 0);//HIGH
    digitalWrite(pinLed4, 0);//LOW
    digitalWrite(pinLed5, 1);//HIGH
    digitalWrite(pinLed6, 0);//LOW
    digitalWrite(pinLed7, 0);//HIGH
    digitalWrite(pinLed8, 0);//LOW
    Serial.println("LED 5");
  }
    else if (valLeds == 6) {
    digitalWrite(pinLed1, 0);//HIGH
    digitalWrite(pinLed2, 0);//LOW
    digitalWrite(pinLed3, 0);//HIGH
    digitalWrite(pinLed4, 0);//LOW
    digitalWrite(pinLed5, 0);//HIGH
    digitalWrite(pinLed6, 1);//LOW
    digitalWrite(pinLed7, 0);//HIGH
    digitalWrite(pinLed8, 0);//LOW
    Serial.println("LED 6");
  }
    else if (valLeds == 7) {
    digitalWrite(pinLed1, 0);//HIGH
    digitalWrite(pinLed2, 0);//LOW
    digitalWrite(pinLed3, 0);//HIGH
    digitalWrite(pinLed4, 0);//LOW
    digitalWrite(pinLed5, 0);//HIGH
    digitalWrite(pinLed6, 0);//LOW
    digitalWrite(pinLed7, 1);//HIGH
    digitalWrite(pinLed8, 0);//LOW
    Serial.println("LED 7");
  }
    else if (valLeds == 8) {
    digitalWrite(pinLed1, 0);//HIGH
    digitalWrite(pinLed2, 0);//LOW
    digitalWrite(pinLed3, 0);//HIGH
    digitalWrite(pinLed4, 0);//LOW
    digitalWrite(pinLed5, 0);//HIGH
    digitalWrite(pinLed6, 0);//LOW
    digitalWrite(pinLed7, 0);//HIGH
    digitalWrite(pinLed8, 1);//LOW
    Serial.println("LED 8");
  }
}
