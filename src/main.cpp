  #include <Arduino.h>
  #include <WiFi.h>
  #include <ESPAsyncWebServer.h>
  #include <SPIFFS.h>

  #include <allData.h>

// TODO: OTA
// TODO: painlessMesh

// BIBLIOTECAS


  #ifdef defined(ESP32)
    #include <WiFi.h>
    #include <WiFiMulti.h>
    WiFiMulti wifiMulti;

  #elif defined(esp32cam)
    #include <WiFi.h>
    #include <WiFiMulti.h>
    WiFiMulti wifiMulti;

  // TODO: Agregar bibliotecas de Sensores de Estacion Meteorologica
  // TODO: WebServer  (esp32)
  // TODO: SPIFFS     (esp32)

  #elif defined(esp01)
  // De momento sin información.

  #endif
// FIN BIBLIOTECAS

   uint8_t ledBuiltIn = 4;
   
// VARIABLES
  #ifdef defined(ESP32)


  #elif defined(espressif32)
  uint8_t ledBuiltIn = 4;

  #elif defined(esp01)
  // De momento sin información.

  #endif

// FIN VARIABLES

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
  pinMode(ledBuiltIn, OUTPUT);
  digitalWrite(ledBuiltIn, HIGH);
}

void loop() {
    digitalWrite(ledBuiltIn, HIGH);
    delay(500);
    digitalWrite(ledBuiltIn, HIGH);
  
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}