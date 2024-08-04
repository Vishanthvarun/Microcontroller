/**************************************************************/
/* Auther            :Vishanth R			      */
/* Date              :04/10/23				      */
/* File name	     :LED(forword blink led)                  */
/* Description       :using while loop                        */                         */
/**************************************************************/

#include<htc.h>
__CONFIG(0x1f7a);
#define _XTAL_FREQ 20000000
int main()
{
	TRISB =0;
	PORTB =0;
	while(1)
	{
	    PORTB =0b00000001;
	    __delay_ms(500);
	    PORTB =0b00000011;
		__delay_ms(500);
		PORTB =0b00000111;
		__delay_ms(500);
		PORTB =0b00001111;
		__delay_ms(500);
		PORTB =0b00010000;
		__delay_ms(500);
		PORTB =0b00110000;
		__delay_ms(500);
		PORTB =0b01110000;
		__delay_ms(500);
		PORTB =0b11110000;
		__delay_ms(500);
		}
}	
	
