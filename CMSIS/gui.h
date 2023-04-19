#ifndef _gui_H_
#define _gui_H_

#include "mcuhead.h"
#include "ST7789.h"

typedef struct {
	void(*Init)(void);
}guiBase;

extern LCDTFT tft;

extern const guiBase gui;

#endif
