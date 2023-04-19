#ifndef _test_H_
#define _test_H_

#include "mcuhead.h"

typedef struct {
	void(*Init)(void);
}testBase;

extern u8 drawline(s16 x,s16 y,s16 ex,s16 ey,u16 c);
extern void drawpoint(s16 x,s16 y,u16 c);
extern u8 drawlineAA(s16 x,s16 y,s16 ex,s16 ey);

extern void decode(u8* str);

typedef struct { s16 x,y; } GUI_POINT;

extern const testBase test;

#endif
