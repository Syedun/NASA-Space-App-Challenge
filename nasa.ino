
int C_Value;
int Na_Value;


void setup()
{
Serial.begin(9600);      // sets the serial port to 9600
}
void loop()
{

C_Value = analogRead(0);// reads analog input pin 0
Na_Value = analogRead(1); //reads analog input pin 1

Serial.print("The C ammount is:");

Serial.print(C_Value, DEC);  // prints the value read
Serial.print("qubic meter");
Serial.print(",");
Serial.print('\n');
Serial.print("The Na ammount is:");
Serial.print(Na_Value, DEC); //prints the value read
Serial.print("qubic meter");
Serial.print('\n');

delay(10800);                        


}
