#ifndef _delay_H_
#define _delay_H_

#include "mcuhead.h"

typedef struct {
	void(*Init)(void);
    void(*ms)(u16);
    void(*us)(u16);
}delayBase;

extern const delayBase Sleep;

#endif
