// Ejemplo 2 string
// 2022 04 04
// Gabriel López

int x = 0 ;

void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

Serial.println(x);

x = x + 1;

x = x % 4;

delay(100);

}
