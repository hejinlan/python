#include <REGX52.H>
#include "Delay.h"
#include "UART.h"

//unsigned char Sec;


void main()
{
	// 串口通信代码
	UART_Init();

		while(1)
		{
		}
}

void UATT_Routine() interrupt 4
{
	if(RI ==1){
	   P2= ~SBUF;
		UART_SendByte(SBUF);
		RI = 0;
	}
	
}