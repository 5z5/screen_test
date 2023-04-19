#ifndef _VM_H_
#define _VM_H_

#include "mcuhead.h"

typedef struct {
	void(*Init)(u8*);
	void(*Load)(u8*);
	void(*Reset)(void);
	void(*Loop)(void);
}VMBase;

extern const VMBase VM;

#endif
