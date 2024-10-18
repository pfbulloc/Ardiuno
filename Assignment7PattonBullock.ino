

int ledPin = 4;

void setup() {
    pinMode(ledPin, OUTPUT);
}

void loop() {
   digitalWrite(ledPin, HIGH); //dot 
   delay(500);
   digitalWrite(ledPin, LOW);
   delay(500);

   digitalWrite(ledPin, HIGH); //dash
   delay(1500);
   digitalWrite(ledPin, LOW);
   delay(500);

   digitalWrite(ledPin, HIGH); //dash
   delay(1500);
   digitalWrite(ledPin, LOW);
   delay(500);                 //First P

   delay(1000);

   digitalWrite(ledPin, HIGH); //dot 
   delay(500);
   digitalWrite(ledPin, LOW);
   delay(500);

   digitalWrite(ledPin, HIGH); //dash
   delay(1500);
   digitalWrite(ledPin, LOW);
   delay(500);                 //Second A

   delay(1000);

   digitalWrite(ledPin, HIGH); //dash
   delay(1500);
   digitalWrite(ledPin, LOW);
   delay(500);                 //Third T

   delay(1000);

   digitalWrite(ledPin, HIGH); //dash
   delay(1500);
   digitalWrite(ledPin, LOW);
   delay(500);                 //Fourth T

   delay(1000);

   digitalWrite(ledPin, HIGH); //dash
   delay(1500);
   digitalWrite(ledPin, LOW);
   delay(500);

   digitalWrite(ledPin, HIGH); //dash
   delay(1500);
   digitalWrite(ledPin, LOW);
   delay(500);

   digitalWrite(ledPin, HIGH); //dash
   delay(1500);
   digitalWrite(ledPin, LOW);
   delay(500);

   delay(1000);              //Fifth O

   digitalWrite(ledPin, HIGH); //dash
   delay(1500);
   digitalWrite(ledPin, LOW);
   delay(500);

   digitalWrite(ledPin, HIGH); //dot 
   delay(500);
   digitalWrite(ledPin, LOW);
   delay(500);               //Sixth N

   delay(3000);
}

