// Traffic Lights 1 & 3 are opposite and 2 & 4 are opposite

int t1r = 2;  // Traffic Light 1 - RED
int t1y = 3;  // Traffic Light 1 - YELLOW
int t1g = 4;  // Traffic Light 1 - GREEN

int t2r = 5;  // Traffic Light 2 - RED
int t2y = 6;  // Traffic Light 2 - YELLOW
int t2g = 7;  // Traffic Light 2 - GREEN

int t3r = 8;  // Traffic Light 3 - RED
int t3y = 9;  // Traffic Light 3 - YELLOW
int t3g = 10; // Traffic Light 3 - GREEN

int t4r = 11; // Traffic Light 4 - RED
int t4y = 12; // Traffic Light 4 - YELLOW
int t4g = 13; // Traffic Light 4 - GREEN

int greenDelay = 4000;  // MilliSeconds for which it will be GREEN LIGHT
int yellowDelay = 2000; // MilliSeconds for which it wiil be YELLOW LIGHT

void setup() {
  pinMode(t1r, OUTPUT);  // Setting up all the pins as OUTPUT
  pinMode(t1y, OUTPUT);
  pinMode(t1g, OUTPUT);
  pinMode(t2r, OUTPUT);
  pinMode(t2y, OUTPUT);
  pinMode(t2g, OUTPUT);
  pinMode(t3r, OUTPUT);
  pinMode(t3y, OUTPUT);
  pinMode(t3g, OUTPUT);
  pinMode(t4r, OUTPUT);
  pinMode(t4y, OUTPUT);
  pinMode(t4g, OUTPUT);
}

void loop() {
  digitalWrite(t1r, HIGH);  // At first, 1 and 3 will be RED
  digitalWrite(t3r, HIGH);
  digitalWrite(t2g, HIGH);  // And, 2 and 4 will be GREEN
  digitalWrite(t4g, HIGH);
  delay(greenDelay);        // I am adding a delay of 4 seconds
                            // but it can be of any desired time(say 40 seconds)
  digitalWrite(t2g, LOW);   
  digitalWrite(t4g, LOW);   // Turning off GREEN LIGHT for 2 and 4
  digitalWrite(t2y, HIGH);  // And, turning on YELLOW Light
  digitalWrite(t4y, HIGH);
  delay(yellowDelay);       // Adding 2 second delay for Yellow Light
                            // But it can be of any desired time(say 5 seconds)
  digitalWrite(t1r, LOW);
  digitalWrite(t3r, LOW);   // Turning off RED Light for 1 and 3
  digitalWrite(t2y, LOW);   // Turning off YELLOW Light for 2 and 4
  digitalWrite(t4y, LOW);

  digitalWrite(t1g, HIGH);  // Turning on GREEN Light for 1 and 3
  digitalWrite(t3g, HIGH);
  digitalWrite(t2r, HIGH);  // Turning on RED Light for 2 and 4
  digitalWrite(t4r, HIGH);
  delay(greenDelay);        // Now, 1 and 3 will be GREEN for 4 seconds
                            // but it can be of any desired time(say 40 seconds)
  digitalWrite(t1g, LOW);
  digitalWrite(t3g, LOW);   // Turning off GREEN Light for 1 and 3
  digitalWrite(t1y, HIGH);  // Turning on YELLOW Light for 1 and 3
  digitalWrite(t3y, HIGH);
  delay(yellowDelay);       // Adding 2 second delay for Yellow Light
                            // But it can be of any desired time(say 5 seconds)
  digitalWrite(t1y, LOW);
  digitalWrite(t3y, LOW);   // Turning off YELLOW Light for 1 and 3
  digitalWrite(t2r, LOW);   // Turning off RED Light for 2 and 4
  digitalWrite(t4r, LOW);
}
