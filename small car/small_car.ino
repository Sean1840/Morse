//w前进，s后退，a左转，d右转，t停止
void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}
int income;
void loop()
{
  if(Serial.available()>0)
  {
    income=Serial.read();
  }
  switch(income)
  {
    case'w':
      forward();
        break;
    case's':
      backward();
      break;
    case'a':
      left();
      break;
    case'd':
      right();
      break;
    case't':
      stop();
      break;
    default:
      break;
  }
  
}

void forward()
{
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
}

void backward()
{
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
}

void left()
{
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
}

void right()
{
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
}

void stop()
{
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
}
  
