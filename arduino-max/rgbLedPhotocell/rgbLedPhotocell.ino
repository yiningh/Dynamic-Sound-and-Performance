int photocellPin1 = A0; 
int photocellPin2 = A1; 
int photocellReading1; 
int photocellReading2; 
int potReading;

const int NUMBER_OF_FIELDS = 2; 
int fieldIndex = 0;            
int values[NUMBER_OF_FIELDS];   

void setup() {
  Serial.begin(9600);
}
 
void loop() {
  photocellReading1 = analogRead(photocellPin1);
  photocellReading2 = analogRead(photocellPin2); 
  potReading = analogRead(A4);
  
  Serial.print(photocellReading1);
  Serial.print(" ");
  Serial.print(photocellReading2);
  Serial.print(" ");
  Serial.println(potReading);
}

