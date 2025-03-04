// C++ code
//
int sure = 500;
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  digitalWrite(2, HIGH);
  delay(sure);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  delay(sure);

  digitalWrite(3, HIGH);
  delay(sure);
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
  delay(sure);

  digitalWrite(4, HIGH);
  delay(sure);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  delay(sure);
  
}