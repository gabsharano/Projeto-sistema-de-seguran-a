const int pinoPIR1 = 12; 
const int pinoLED1 = 10; 

const int pinoPIR2 = 3; 
const int pinoLED2 = 7; 
 
void setup(){
  pinMode(pinoLED1, OUTPUT); 
  pinMode(pinoPIR1, INPUT); 

  pinMode(pinoLED2, OUTPUT); 
  pinMode(pinoPIR2, INPUT);
  Serial.begin (9600);
}

void loop(){
  
  if (digitalRead(pinoPIR1) == HIGH) { 
    digitalWrite(pinoLED1, HIGH);     
    Serial.println("DETECTADO PIR1");
    } else { 
      digitalWrite(pinoLED1, LOW); 
      Serial.println("----");
      }
      
   if (digitalRead(pinoPIR2) == HIGH) {
    digitalWrite(pinoLED2, HIGH); 
    Serial.println("DETECTADO PIR2");
    } else { 
      digitalWrite(pinoLED2, LOW); 
      Serial.println("----");
      }
}
