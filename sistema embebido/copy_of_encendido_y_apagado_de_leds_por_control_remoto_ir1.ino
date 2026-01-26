#include <IRremote.h>     
#define Tecla_1 0xEF10BF00   
#define Tecla_2 0xEE11BF00 
#define Tecla_4 0xEB14BF00
#define Tecla_5 0xEA15BF00 
#define Tecla_7 0xE718BF00
#define Tecla_8 0xE619BF00 
 
int IR = 11;   
int LED = 6;   
int LED2 = 7;  
int LED3 = 8;    
 
void setup() {
  Serial.begin(9600);     
  IrReceiver.begin(IR, DISABLE_LED_FEEDBACK); 
  pinMode(LED, OUTPUT); 
  pinMode(LED2, OUTPUT); 
  pinMode(LED3, OUTPUT); 
} 
 
void loop() {
  if (IrReceiver.decode()) {        
    Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX); 
    if (IrReceiver.decodedIRData.decodedRawData == Tecla_1)   
    digitalWrite(LED, HIGH); 
    if (IrReceiver.decodedIRData.decodedRawData == Tecla_2)   
    digitalWrite(LED, LOW); 
    
    IrReceiver.resume();       
  }
  delay (1); // Tiempo de espera antes de detectar otra señal, considere que en tinkercad esto es bastante tardado            


if (IrReceiver.decode()) {        
    Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX); 
    if (IrReceiver.decodedIRData.decodedRawData == Tecla_4)   
    digitalWrite(LED2, HIGH); 
    if (IrReceiver.decodedIRData.decodedRawData == Tecla_5)   
    digitalWrite(LED2, LOW); 
    
    IrReceiver.resume();       
  }
  delay (1);// Tiempo de espera antes de detectar otra señal, considere que en tinkercad esto es bastante tardado              


if (IrReceiver.decode()) {        
    Serial.println(IrReceiver.decodedIRData.decodedRawData, HEX); 
    if (IrReceiver.decodedIRData.decodedRawData == Tecla_7)   
    digitalWrite(LED3, HIGH); 
    if (IrReceiver.decodedIRData.decodedRawData == Tecla_8)   
    digitalWrite(LED3, LOW); 
    
    IrReceiver.resume();       
  }
  delay (1);// Tiempo de espera antes de detectar otra señal, considere que en tinkercad esto es bastante tardado              
}
