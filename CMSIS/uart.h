#ifndef uart_H
#define uart_H

#include "mcuhead.h"
#include <stdio.h>

#define u8 unsigned char
#define u16 unsigned short
#define u32 unsigned long

typedef void(*UARTCALLBACK)(u8);

void UART_Init(u8 f_mhz,u32 b,UARTCALLBACK f);
void UART_SetEnable(u8 set);
void UART_SendByte(u8 dat);
void UART_SendString(u8* p);
void UART_ReSetBps(u32 b);

void UART_OnRecv(void(*p)(u8));

#ifdef useprintf

#include<stdio.h>
char putchar(char c){
	UART_SendByte(c);
	return c;
}

#endif

typedef struct{
	void (*Init)(u8 f_MHz,u32 Baud,UARTCALLBACK CallBack);
	void (*SendByte)(u8);
	void (*SendString)(u8*);
	void (*SetBaud)(u32);
	void (*RegisterUartEvent)(void(*)(u8));
}UARTBase;

extern const UARTBase UART;

#endif
