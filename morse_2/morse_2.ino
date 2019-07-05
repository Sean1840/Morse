int i;

void setup()

{
  pinMode(13,OUTPUT);
  Serial.begin(9600);

}



void loop()

{
    int income;
  if(Serial.available()>0)
  income=Serial.read();
  switch(income)
  {
        case 'a':
            dot();c_space();dash();c_space();break;
        case 'b':
            dash();c_space();dot();c_space();dot();c_space();dot();c_space();break;
        case 'c':
            dash();c_space();dot();c_space();dash();c_space();dot();c_space();break;      
       case 'd':
            dash();c_space();dot();c_space();dot();c_space();break;
        case 'e':     
            dot();c_space();break;       
        case 'f':
            dot();c_space();dot();c_space();dash();c_space();dot();c_space();break;
        case 'g':
            dash();c_space();dash();c_space();dot();c_space();break;        
        case 'h':
            dot();c_space();dot();c_space();dot();c_space();dot();c_space();break;        
        case 'i':
            dot();c_space();dot();c_space();break;
        case 'j':       
            dot();c_space();dash();c_space();dash();c_space();dash();c_space();break;
        case 'k':
            dash();c_space();dot();c_space();dash();c_space();break;     
        case 'l':
            dot();c_space();dash();c_space();dot();c_space();dot();c_space();break;
        case 'm':
            dash();c_space();dash();c_space();break;        
        case 'n':     
            dash();c_space();dot();c_space();break;       
        case 'o':
            dash();c_space();dash();c_space();dash();c_space();break;
        case 'p':       
            dot();c_space();dash();c_space();dash();c_space();dot();c_space();break;       
        case 'q':       
            dash();c_space();dash();c_space();dot();c_space();dash();c_space();break;        
        case 'r':       
            dot();c_space();dash();c_space();dot();c_space();break;      
        case 's':
            dot();c_space();dot();c_space();dot();c_space();break;
        case 't':
            dash();c_space();break;       
        case 'u':
            dot();c_space();dot();c_space();dash();c_space();break;
        case 'v':
            dot();c_space();dot();c_space();dot();c_space();dash();c_space();break;
        case 'w':
            dot();c_space();dash();c_space();dash();c_space();break;     
        case 'x':     
           dash();c_space();dot();c_space();dot();c_space();dash();c_space();break;
        case 'y':
           dash();c_space();dot();c_space();dash();c_space();dash();c_space();break;
        case 'z':
           dash();c_space();dash();c_space();dot();c_space();dot();c_space();break;
        default:
              w_space(); 
  }          

  

  delay(3000);

}



void dot()

{

  digitalWrite(13,HIGH);

  delay(250);

  digitalWrite(13,LOW);

  delay(250);

}



void dash()

{

  digitalWrite(13,HIGH);

  delay(250*4);

  digitalWrite(13,LOW);

  delay(250);

}



void c_space()

{

  digitalWrite(13,LOW);

  delay(250*3);

}



void  w_space()

{

  digitalWrite(13,LOW);

  delay(250*7);

}
