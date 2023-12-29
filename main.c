#include "STD_TYPES.h"
#include <util/delay.h>

#include "DIO_interface.h"
#include "CLCD_interface.h"

void Hamoksha_voidWelcome(void);
void Hamoksha_voidRun(void);
void Hamoksha_voidFootball(void);
void Hamoksha_voidDance(void);
void Hamoksha_voidDie(void);





void main(void)
{

	// Initialize ports and LCD
	DIO_u8SetPortDirection(DIO_u8PORTA,DIO_u8PORT_OUTPUT);
	CLCD_voidInit();

	// Perform different scenes
	Hamoksha_voidWelcome();
	Hamoksha_voidRun();
	Hamoksha_voidFootball();
	Hamoksha_voidDance();
	Hamoksha_voidDie();

}

// Function to display a welcome message with special characters
void Hamoksha_voidWelcome(void)
{
	/* Pattern for Hamoksha! digit Character*/
	uint8 Local_u8Pattern0[8]={
			0b01110,
			0b01110,
			0b00100,
			0b01110,
			0b10101,
			0b01010,
			0b10001,
			0b00000
	};
	/* Pattern for Say HI Character*/
	uint8 Local_u8Pattern1[8]={
			0b01110,
			0b01110,
			0b10100,
			0b01110,
			0b00101,
			0b01010,
			0b10001,
			0b00000
	};
	/*****************Scene One ****************/
	uint8 Local_u8SceneOne;
	CLCD_u8SendString("Hi");
	CLCD_voidGoToXY(0,1);
	CLCD_u8SendString("I'm Hamoksha!");
	Local_u8SceneOne=7;
	while(Local_u8SceneOne)
	{
		CLCD_u8SendSpecialCharacter(0,Local_u8Pattern0,5,0);
		_delay_ms(250);
		CLCD_u8SendSpecialCharacter(1,Local_u8Pattern1,5,0);
		Local_u8SceneOne--;

	}
}

// Function to display a running animation with special characters
void Hamoksha_voidRun(void)
{
	/* Pattern for Run Character*/
	uint8 Local_u8Pattern2[8]={
			0b01110,
			0b01110,
			0b00100,
			0b01110,
			0b10101,
			0b01000,
			0b10000,
			0b00000
	};
	/* Pattern for Run2 Character*/
	uint8 Local_u8Pattern3[8]={
			0b01110,
			0b01110,
			0b00100,
			0b01110,
			0b10101,
			0b00010,
			0b00001,
			0b00000
	};
	uint8  Local_u8Scene2=0;

	/*****************Scene Two****************/
	CLCD_voidSendCmd(1);
	CLCD_u8SendString("I can run");
	_delay_ms(300);
	while(Local_u8Scene2<16)
	{
		CLCD_voidSendCmd(1);
		CLCD_u8SendSpecialCharacter(2,Local_u8Pattern2,Local_u8Scene2,1);
		_delay_ms(20);
		CLCD_u8SendSpecialCharacter(3,Local_u8Pattern3,Local_u8Scene2,1);
		_delay_ms(50);
		Local_u8Scene2++;

	}

}

// Function to display a football-playing animation with special characters
void Hamoksha_voidFootball(void)
{
	/* Pattern for football Character*/
	uint8 Local_u8Pattern4[8]={
			0b00000,
			0b01100,
			0b01100,
			0b11001,
			0b11000,
			0b01100,
			0b01010,
			0b00000
	};


	/* Pattern for football2 Character*/
	uint8 Local_u8Pattern5[8]={
			0b00000,
			0b01100,
			0b01100,
			0b11000,
			0b11000,
			0b01010,
			0b10000,
			0b00000
	};
	uint8 Local_u8Scene3=0;

	/*****************Scene three****************/
	CLCD_voidSendCmd(1);
	CLCD_u8SendString("I can play");
	CLCD_voidGoToXY(0,1);
	CLCD_u8SendString("football");
	_delay_ms(300);
	while(Local_u8Scene3<16)
	{
		CLCD_voidSendCmd(1);
		CLCD_u8SendSpecialCharacter(4,Local_u8Pattern4,Local_u8Scene3,1);
		_delay_ms(40);
		CLCD_u8SendSpecialCharacter(5,Local_u8Pattern5,Local_u8Scene3,1);
		_delay_ms(40);
		Local_u8Scene3++;

	}
}

// Function to display a dancing animation with special characters
void Hamoksha_voidDance(void)
{
	/* Pattern for dance Character*/
	uint8 Local_u8Pattern6[8]={
			0b01110,
			0b01110,
			0b10101,
			0b01110,
			0b00100,
			0b01100,
			0b01000,
			0b00000
	};

	/* Pattern for dance2 Character*/
	uint8 Local_u8Pattern7[8]={
			0b01110,
			0b01110,
			0b00100,
			0b01110,
			0b10101,
			0b00110,
			0b00010,
			0b00000
	};
	uint8 Local_u8Scene4=0;


	/*****************Scene four****************/
	CLCD_voidSendCmd(1);
	CLCD_u8SendString("I can dance");
	_delay_ms(300);
	while(Local_u8Scene4<8)
	{

		CLCD_u8SendSpecialCharacter(6,Local_u8Pattern6,14,0);
		_delay_ms(100);
		CLCD_u8SendSpecialCharacter(7,Local_u8Pattern7,14,0);
		_delay_ms(100);
		Local_u8Scene4++;

	}

}

// Function to display a Die animation with special characters
void Hamoksha_voidDie(void)
{
	/* Pattern for Gun Character*/
	uint8 Local_u8Pattern8[8]={
			0b11111,
			0b11111,
			0b10100,
			0b11100,
			0b10000,
			0b10000,
			0b00000,
			0b00000
	};
	/* Pattern for bulet Character*/
	uint8 Local_u8Pattern9[8]={
			0b00110,
			0b00110,
			0b00000,
			0b00000,
			0b00000,
			0b00000,
			0b00000,
			0b00000
	};

	/* Pattern for Hamoksa! digit Character*/
	uint8 Local_u8Pattern10[8]={
			0b01110,
			0b01110,
			0b10101,
			0b01110,
			0b00100,
			0b01010,
			0b10001,
			0b00000
	};
	/* Pattern for Hamoksa! Die digit Character*/
		uint8 Local_u8Pattern11[8]={
				0b00000,
				0b00000,
				0b00000,
				0b00000,
				0b11010,
				0b11111,
				0b11010,
				0b00000
		};


	uint8 Local_u8Scene5=1;

	/*****************Scene five****************/
	CLCD_voidSendCmd(1);
	CLCD_u8SendString("Don't Kill me (:");
	CLCD_u8SendSpecialCharacter(0,Local_u8Pattern8,0,1);
	CLCD_u8SendSpecialCharacter(3,Local_u8Pattern10,15,1);
	while(Local_u8Scene5<15)
	{


		CLCD_u8SendSpecialCharacter(1,Local_u8Pattern9,Local_u8Scene5,1);
		_delay_ms(100);
		Local_u8Scene5++;

	}
	CLCD_u8SendSpecialCharacter(4,Local_u8Pattern11,15,1);
	_delay_ms(300);
	CLCD_voidSendCmd(1);
	CLCD_voidGoToXY(5,0);
	CLCD_u8SendString("RIP  :)");

}
