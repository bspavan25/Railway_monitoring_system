#define pingPin 3
#define echoPin 2
#define IN2 12


void setup()

{

Serial.begin (9600);

pinMode(pingPin, OUTPUT);

pinMode(echoPin, INPUT);

pinMode(IN2,OUTPUT);


}

 


void loop()

{

int duration;
digitalWrite(IN2,HIGH);


long  cm;
digitalWrite(pingPin, LOW);
delayMicroseconds(2);
digitalWrite(pingPin, HIGH);
delayMicroseconds(10);
digitalWrite(pingPin, LOW);
duration = pulseIn(echoPin, HIGH);

cm = microsecondsToCentimeters(duration); // calling methodSerial.print(inches);



if (cm > 150 && cm > 0 )

{

digitalWrite(IN2,LOW);
}Serial.println(cm);

delay(100);


}
long microsecondsToCentimeters(long microseconds) // method to covert microsec to centimeters
{
return (microseconds/2) / 29.1 ;
}
