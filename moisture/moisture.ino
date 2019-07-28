  float b,a;
 // int a,b;
void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

b=analogRead(A0);
a=(100-((b/1023)*100));
Serial.println("moisture value=");
Serial.println(a);
delay(1000);
}
