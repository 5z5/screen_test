#ifndef _tinyQR_H_
#define _tinyQR_H_

#include "mcuhead.h"

typedef struct {
	void(*Init)(u8*);
	u8(*TextQR)(u8* str,u8* buff);
}tinyQRBase;

extern const tinyQRBase tinyQR;

#endif
