int pinLed1 = 10;
int pinLed2 = 9; //pines de los leds
String valor; // Variable que almacena el string
int valLeds = 0; // 1 = HIGH; 0 = LOW

void setup() {
  Serial.begin(9600); // Velocidad de comunicacion serial
  delay(30); // tiempo opcional para establecer la comunicacion serie
  pinMode(pinLed1, OUTPUT); // Funcion del pin escogido, "Salida"
  pinMode(pinLed2, OUTPUT);
}

void loop() {
  if (Serial.available()) { // Lee que la comunicacion serie este disponible
    valor = Serial.readString(); // Lee y guarda el string recibido en la comunicacion serie
    valLeds = valor.toInt(); // Convierte el string en un int
    Serial.println("Char = " + valor); // permite ver el dato envido y recibido
  }
  if (valLeds == 0) { //Enciede la led segun el caso
    int a = 1;
    digitalWrite(pinLed1, a);//HIGH
    digitalWrite(pinLed2, 0);//LOW
  }
  if (valLeds == 1) {
    digitalWrite(pinLed1, 0);//LOW
    digitalWrite(pinLed2, valLeds);//HIGH
  }
}
