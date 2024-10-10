int ledazul=11;
int ledverde=10;
int ledlaranja=9;
int ledvermelho=6;
//int tempo=100;

void setup() {
 pinMode(11, OUTPUT);
 pinMode(10, OUTPUT);
 pinMode(9, OUTPUT);
 pinMode(6, OUTPUT);
}

void loop() {

for (int pinos = 11; pinos >= 6; pinos--){
  
 for (int degrau = 0; degrau <= 255; degrau++) {
  analogWrite(pinos, degrau);
  delay(1);
  }
 for (int degrau = 255; degrau >= 0; degrau--) {
  analogWrite(pinos, degrau);
  delay(1);
  }
 
 }

}
