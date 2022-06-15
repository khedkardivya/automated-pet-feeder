#define BLYNK_TEMPLATE_ID "TMPLzJf7YkUj"
#define BLYNK_DEVICE_NAME "Motor controller"
void setup() {
  // put your setup code here, to run once:
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);

}

void loop() {
  
  digitalWrite(9,HIGH);
  digitalWrite(10, LOW);
  delay(1000);
  digitalWrite(10, HIGH);
  digitalWrite(9,LOW);
  delay(1000);
  // put your main code here, to run repeatedly:

}
