#define led 5
#define ldr A0

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(ldr);  // read LDR value
  Serial.println(value);        // for checking (optional)

  if (value < 500) {   // DARK condition
    digitalWrite(led, HIGH);  // LED ON
  } 
  else {               // BRIGHT condition
    digitalWrite(led, LOW);   // LED OFF
  }

  delay(200);
}