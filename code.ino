#include <Ultrasonic.h>
#include <Servo.h>

#define servomotor 10

Servo servo;

Ultrasonic ultrasonic(13, 12);
int leitura;

void setup() {

  Serial.begin(9600);

  servo.attach(servomotor);
}
void loop() {

 leitura = ultrasonic.read();
 Serial.println(leitura);

  if (leitura < 10) {
    servo.write(90);
    delay(1500);

  } else {
    servo.write(0);
  }
}