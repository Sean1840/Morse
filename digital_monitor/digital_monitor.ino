void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}
int income=0;
void loop()
{
  if(Serial.available()>0)
  {
    income=Serial.read();
  }
  switch(income)
  {
    case'0':digitalWrite(3,LOW);digitalWrite(4,LOW);digitalWrite(5,LOW);digitalWrite(2,LOW);break;
    case'1':digitalWrite(3,LOW);digitalWrite(4,LOW);digitalWrite(5,LOW);digitalWrite(2,HIGH);break;
    case'2':digitalWrite(3,LOW);digitalWrite(4,LOW);digitalWrite(5,HIGH);digitalWrite(2,LOW);break;
    case'3':digitalWrite(3,LOW);digitalWrite(4,LOW);digitalWrite(5,HIGH);digitalWrite(2,HIGH);break;
    case'4':digitalWrite(3,LOW);digitalWrite(4,HIGH);digitalWrite(5,LOW);digitalWrite(2,LOW);break;
    case'5':digitalWrite(3,LOW);digitalWrite(4,HIGH);digitalWrite(5,LOW);digitalWrite(2,HIGH);break;
    case'6':digitalWrite(3,LOW);digitalWrite(4,HIGH);digitalWrite(5,HIGH);digitalWrite(2,LOW);break;
    case'7':digitalWrite(3,LOW);digitalWrite(4,HIGH);digitalWrite(5,HIGH);digitalWrite(2,HIGH);break;
    case'8':digitalWrite(3,HIGH);digitalWrite(4,LOW);digitalWrite(5,LOW);digitalWrite(2,LOW);break;
    case'9':digitalWrite(3,HIGH);digitalWrite(4,LOW);digitalWrite(5,LOW);digitalWrite(2,HIGH);break;
    default:break;
  }
  delay(10);
}
