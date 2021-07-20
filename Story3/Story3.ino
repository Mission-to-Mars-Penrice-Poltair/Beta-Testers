int const FWD_R = 7;
int const RIGHT_REV = 8;
int const RIGHT_ENABLE = 9;
int const LEFT_ENABLE = 10;
int const LEFT_FWD = 11;
int const LEFT_REV = 12;

void setup()
{
  pinMode(FWD_R, OUTPUT);
  pinMode(RIGHT_REV, OUTPUT);
  pinMode(RIGHT_ENABLE, OUTPUT);
  pinMode(LEFT_ENABLE, OUTPUT);
  pinMode(LEFT_FWD, OUTPUT);
  pinMode(LEFT_REV, OUTPUT);
}
void loop()
{
  // You need to have an enable and a direction on 
  // HIGH to rotate a motor
  digitalWrite(RIGHT_ENABLE,HIGH);
  digitalWrite(LEFT_ENABLE,HIGH);
  digitalWrite(FWD_R,HIGH);
  digitalWrite(LEFT_FWD,HIGH);
  delay (5000);
  digitalWrite(FWD_R,LOW);
  digitalWrite(LEFT_FWD,LOW);
  delay (1000);
  digitalWrite(LEFT_REV,HIGH);
  digitalWrite(RIGHT_REV,HIGH);
  delay (2000);
  digitalWrite(LEFT_REV,LOW);
  digitalWrite(RIGHT_REV,LOW);
  digitalWrite(RIGHT_ENABLE,LOW);
  digitalWrite(LEFT_ENABLE,LOW);
  delay (2000);
}
