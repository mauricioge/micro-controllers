// Author: mauricioge <mauricioge@gmail.com> Aug/20/2019
// Arduino interacts with Pytho through serial port
// Use prg-serial-port-comm.py in order to turn on/off the built-in LED

char sd; // serial data
int LED = 2;

void setup() {
  pinMode(LED, OUTPUT);
  digitalWrite(LED, HIGH);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0)
  {
    sd = Serial.read();
    Serial.print(sd);

    if (sd == '1') {
      digitalWrite(LED, HIGH);
    } else if (sd == '0') {
      digitalWrite(LED, LOW);
    }
  }
}
