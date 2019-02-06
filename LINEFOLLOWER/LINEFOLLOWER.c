#define F_APU 8000000UL
#include<avr/io.h>
#include<util/delay.h>

void main()
{
DDRC=0B11111111;
DDRA=0B11111000;
_delay_ms(10);
while(1)
{


if(PINA==0B00000010)
{
PORTC=0B00000101;
_delay_ms(70);

}
else if(PINA==0B00000011)
{
PORTC=0B00000110;
_delay_ms(70);
}
else if(PINA==0B00000110)
{
PORTC=0B00001001;
_delay_ms(70);
}

else if(PINA==0B00000000)
{
PORTC=0B00000000;
_delay_ms(70);
}
else if(PINA==0B00000111)
{
PORTC=0B00000000;
_delay_ms(1000);
}

}
}


