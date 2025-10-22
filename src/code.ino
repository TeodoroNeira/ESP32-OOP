int red_RGB = 21;
int green_RGB = 22;
int blue_RGB = 23;


void setup() {
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
  pinMode(red_RGB, OUTPUT);
  pinMode(green_RGB, OUTPUT);
  pinMode(blue_RGB, OUTPUT);

}

class LED_RGB{
  public: 
    int red_light;
    int green_light;
    int blue_light;
    LED_RGB(int red, int green, int blue): red_light(red), green_light(green), blue_light(blue) {}

    void purpleColor(){
      digitalWrite(red_light, HIGH);
      digitalWrite(green_light, LOW);
      digitalWrite(blue_light, HIGH);
    }
    void cyanColor(){
      digitalWrite(red_light, LOW);
      digitalWrite(green_light, HIGH);
      digitalWrite(blue_light, HIGH);
    }
};

void loop() {
  LED_RGB led(red_RGB, green_RGB, blue_RGB);
  led.purpleColor();
  delay(500); 
  led.cyanColor();
  delay(500);

}
