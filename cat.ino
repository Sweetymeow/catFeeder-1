int motor = 9;

void setup()                      // run once, when the sketch starts
{
  
  pinMode(motor, OUTPUT);        // sets the digital pin as output
    
  digitalWrite(motor, HIGH);     // turn motor on 
  
  delay(4000);                   // wait for tenth second
  
  digitalWrite(motor, LOW);    // turn motor off
  
}

void loop()                     
{
   
}
