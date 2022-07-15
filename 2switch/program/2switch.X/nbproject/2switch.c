
#include <xc.h>
//#define _XTAL_FREQ 400000
void main()
{
    TRISB=0X00;
//    TRISD=0X01;
    TRISC=0X01;
    PORTB=0X00;
    
   
    unsigned char arr[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x67};
    unsigned char i=0;

    while(1)
    {
           // PORTB=arr[i];
        if(PORTC & (1<<0))
        {
            PORTB=arr[i];
          
            while(PORTC & (1<<0));
            
            i++;
           
        }
    }   
   
}


