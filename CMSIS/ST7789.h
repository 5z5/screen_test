#ifndef _ST7789_H_
#define _ST7789_H_

#include "mcuhead.h"

#define PIN_RST_SET() SETBIT(GPIOF->BSRR,BIT0)
#define PIN_RST_CLR() SETBIT(GPIOF->BRR,BIT0)

#define PIN_RS_SET() SETBIT(GPIOA->BSRR,BIT2)
#define PIN_RS_CLR() SETBIT(GPIOA->BRR,BIT2)

#define PIN_CS_SET() SETBIT(GPIOA->BSRR,BIT3)
#define PIN_CS_CLR() SETBIT(GPIOA->BRR,BIT3)

#define ST7789_RS_SET() PIN_RS_SET()
#define ST7789_RS_CLR() PIN_RS_CLR()

#define ST7789_CS_SET() PIN_CS_SET()
#define ST7789_CS_CLR() PIN_CS_CLR()

#define ST7789_RST_SET() PIN_RST_SET()
#define ST7789_RST_CLR() PIN_RST_CLR()

typedef struct {
	void(*Init)(void);
	void(*Clear)(u16);
	void(*SetAddress)(u16,u16);
	void(*SetWindow)(u16,u16,u16,u16);
	void(*Enable)(u8);
}LCDTFT;


typedef struct {
	void(*Init)(void);
	u8(*getInterface)(void**);
}ST7789Base;

extern void ST7789_SETDIR(u8 c);

extern const ST7789Base ST7789;

#endif
