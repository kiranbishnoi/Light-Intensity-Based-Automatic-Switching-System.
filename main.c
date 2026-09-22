#include <xc.h>
#define _XTAL_FREQ 16000000
#pragma config FOSC = HS
#pragma config WDTE = OFF
#pragma config PWRTE = ON
#pragma config BOREN = ON
#pragma config LVP = OFF
#pragma config CPD = OFF
#pragma config WRT = OFF
#pragma config CP = OFF
void main()
{
TRISB = 0x03;       // RB0, RB1 input
TRISD = 0x00;       // PORTD output
OPTION_REGbits.nRBPU = 0;   // Enable PORTB internal pull-ups
PORTD = 0x00;
while(1)
{
if((RB0 == 0))
{
RD0 = 1;
}
else
{
RD0 = 0;
}
}
}
