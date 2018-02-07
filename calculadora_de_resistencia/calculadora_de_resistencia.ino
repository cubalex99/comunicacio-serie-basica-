//********** Variables ********************************************************
float r2;
float r3;
char r1;
//********** Setup ************************************************************
void setup() { 
  Serial.begin(9600);        // initialize serial
  Serial.println("Entra el valor de r1,r2 i r3 (separats per una coma)");
}
//********** Loop *************************************************************
void loop() {
  while (Serial.available() > 0) {  // if there's any serial available, read it
    r1 = Serial.read();// look for valid int the incoming serial stream
    Serial.println(r1); 
    r2 = Serial.parseInt();
    Serial.println(r2); 
    r3 = Serial.parseInt();
    Serial.println(r3);
    if (Serial.read() == '\n') { 
      if (r1=='s'){
        r2=r2+r3;
        Serial.print(r2);
      }
      else if (r1=='p'){
        r2=(r2*r3)/(r2+r3);
        Serial.print(r2);
      }
      else{
        Serial.print("no s'ha introduit la manera de posicionar la recistencies ");
      }
    }
  }
}

