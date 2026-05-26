#include <ESP8266WiFi.h>

const char* ssid = "YOUR_WIFI_NAME";        
const char* password = "YOUR_WIFI_PASSWORD"; 

const char* server = "api.thingspeak.com";
String apiKey = "YOUR_WRITE_API_KEY";      

WiFiClient client;

void setup() {
  Serial.begin(115200);
  delay(10);

  WiFi.begin(ssid, password);
  Serial.println("Connecting to WiFi...");

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nConnected to WiFi");
}

void loop() {
  long rssi = WiFi.RSSI(); 

  Serial.print("RSSI: ");
  Serial.println(rssi);

  if (client.connect(server, 80)) {
    String url = "/update?api_key=" + apiKey + "&field1=" + String(rssi);

    client.print(String("GET ") + url + " HTTP/1.1\r\n" +
                 "Host: " + server + "\r\n" +
                 "Connection: close\r\n\r\n");
  }

  client.stop();

  delay(15000); 
}