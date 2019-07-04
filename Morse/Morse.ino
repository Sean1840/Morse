#include <Morse.h>

Morse morse(13);
char a[100];
int i;
void setup()
{
    gets(a);
}

void loop()
{
    for(i=0;a[i]!='/0';i++)
    {
        if(a[i]=='a')
        {
            morse.dot();morse.c_space();morse.dash();morse.c_space();
        }
        else if(a[i]=='b')
        {
            morse.dash();morse.c_space();morse.dot();morse.c_space();morse.dot();morse.c_space();morse.dot();morse.c_space();
        }
        else if(a[i]=='c')
        {
            morse.dash();morse.c_space();morse.dot();morse.c_space();morse.dash();morse.c_space();morse.dot();morse.c_space();
        }
        else if(a[i]=='d')
        {
            morse.dash();morse.c_space();morse.dot();morse.c_space();morse.dot();morse.c_space();
        }
        else if(a[i]=='e')
        {
            morse.dot();morse.c_space();
        }
        else if(a[i]=='f')
        {
            morse.dot();morse.c_space();morse.dot();morse.c_space();morse.dash();morse.c_space();morse.dot();morse.c_space();
        }
        else if(a[i]=='g')
        {
            morse.dash();morse.c_space();morse.dash();morse.c_space();morse.dot();morse.c_space();
        }
        else if(a[i]=='h')
        {
            morse.dot();morse.c_space();morse.dot();morse.c_space();morse.dot();morse.c_space();morse.dot();morse.c_space();
        }
        else if(a[i]=='i')
        {
            morse.dot();morse.c_space();morse.dot();morse.c_space();
        }
        else if(a[i]=='j')
        {
            morse.dot();morse.c_space();morse.dash();morse.c_space();morse.dash();morse.c_space();morse.dash();morse.c_space();
        }
        else if(a[i]=='k')
        {
            morse.dash();morse.c_space();morse.dot();morse.c_space();morse.dash();morse.c_space();
        }
        else if(a[i]=='l')
        {
            morse.dot();morse.c_space();morse.dash();morse.c_space();morse.dot();morse.c_space();morse.dot();morse.c_space();
        }
        else if(a[i]=='m')
        {
            morse.dash();morse.c_space();morse.dash();morse.c_space();
        }
        else if(a[i]=='n')
        {
            morse.dash();morse.c_space();morse.dot();morse.c_space();
        }
        else if(a[i]=='o')
        {
            morse.dash();morse.c_space();morse.dash();morse.c_space();morse.dash();morse.c_space();
        }
        else if(a[i]=='p')
        {
            morse.dot();morse.c_space();morse.dash();morse.c_space();morse.dash();morse.c_space();morse.dot();morse.c_space();
        }
        else if(a[i]=='q')
        {
            morse.dash();morse.c_space();morse.dash();morse.c_space();morse.dot();morse.c_space();morse.dash();morse.c_space();
        }
        else if(a[i]=='r')
        {
            morse.dot();morse.c_space();morse.dash();morse.c_space();morse.dot();morse.c_space();
        }
        else if(a[i]=='s')
        {
            morse.dot();morse.c_space();morse.dot();morse.c_space();morse.dot();morse.c_space();
        }
        else if(a[i]=='t')
        {
            morse.dash();morse.c_space();
        }
        else if(a[i]=='u')
        {
            morse.dot();morse.c_space();morse.dot();morse.c_space();morse.dash();morse.c_space();
        }
        else if(a[i]=='v')
        {
            morse.dot();morse.c_space();morse.dot();morse.c_space();morse.dot();morse.c_space();morse.dash();morse.c_space();
        }
        else if(a[i]=='w')
        {
            morse.dot();morse.c_space();morse.dash();morse.c_space();morse.dash();morse.c_space();
        }
        else if(a[i]=='x')
        {
            morse.dash();morse.c_space();morse.dot();morse.c_space();morse.dot();morse.c_space();morse.dash();morse.c_space();
        }
        else if(a[i]=='y')
        {
            morse.dash();morse.c_space();morse.dot();morse.c_space();morse.dash();morse.c_space();morse.dash();morse.c_space();
        }
        else if(a[i]=='z')
        {
            morse.dash();morse.c_space();morse.dash();morse.c_space();morse.dot();morse.c_space();morse.dot();morse.c_space();
        }
        else if(a[i]==' ')
            {
              morse.w_space();
            }
    }
  
  delay(3000);
}
