#include<avr/io.h>
#include<stdbool.h>
#include<util/delay.h>
int main(void)
{
	int W,X,Y,Z;
	bool F;

	DDRB	|=0b11111111;
	PORTD=0xFC;;
	DDRB=0b00100000;
	
	while(1)
	{
		W=(PIND &(1<<PIND2))==(1<< PIND2);
		X=(PIND &(1<<PIND3))==(1<< PIND3);
		Y=(PIND &(1<<PIND4))==(1<< PIND4);
		Z=(PIND &(1<<PIND4))==(1<< PIND4);

		F=(W&&!Y) || (X&&!Y&&!Z) || (W&&X&&!Z);

		PORTB=(F<<5);

	}
	return 0;
}
