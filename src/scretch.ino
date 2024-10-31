#define green 10
#define yellow 9
#define red 8
unsigned long time;
unsigned long currentTime;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  time = millis();
}
void loop() {
  currentTime = millis() - time;
  if(currentTime <= 6000){
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
  }
  else if(currentTime > 6000 && currentTime <= 8000){
    digitalWrite(red, LOW);
    digitalWrite(yellow, HIGH);
  }
  else if(currentTime > 8000 && currentTime <= 14000){
    digitalWrite(yellow, LOW);
    digitalWrite(green, HIGH);
  }
  else if(currentTime >= 14000 && currentTime <= 16000) {
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
  }
  else {
    time = millis();
  }
}