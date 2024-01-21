// Light sensor 0.0
// read and output

// general configuration parameters
// where is the light sensor connected
#define LS_PIN 0
// Speed of the serial interface
#define S_MON_SPEED 9600

void setup() {
  // put your setup code here, to run once:
  Serial.begin(S_MON_SPEED);
}

void loop() {
  // put your main code here, to run repeatedly:
  // data / variables representing the state of the system controlled
  int ambient_light=0;

  // read input signals
  ambient_light = analogRead(LS_PIN);

  // generate output signals
  Serial.println(ambient_light);

  // possibly controll the "sampling rate"
  delay(500);
}