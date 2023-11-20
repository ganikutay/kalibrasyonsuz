#include <HX711.h>


 
const int DOUT = A3; 
const int CLK = A2;

 
HX711 scale;
 
float kalibrasyon_faktoru = 10000; // buraya kalibrasyon işleminde bulduğunuz kalibrasyon faktörünü yazınız.
 
void setup() {
Serial.begin(9600);
scale.begin(DOUT, CLK);

scale.set_scale(kalibrasyon_faktoru ); // Kalibrasyon faktörü tanımlama
scale.tare(); // Ölçeği sıfırlama

}
void loop() {
  
Serial.print("Kütle: ");
Serial.print(scale.get_units()); // Okunan kütle değerini yazdırma        scale.set_scale(kalibrasyon_faktoru) yani (10000) gen_units te aynı şekilde bir işe yarıyor ama nedir?
Serial.println(" kg");
delay(70);
} // Birimini belirtme
