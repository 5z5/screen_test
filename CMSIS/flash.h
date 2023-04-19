#ifndef flash_h
#define flash_h

#include "mcuhead.h"

#define u8 unsigned char
#define u16 unsigned short
#define u32 unsigned long

#define Flash_CS_SET() SETBIT(GPIOA->ODR,FlashSelect)
#define Flash_CS_CLR() CLRBIT(GPIOA->ODR,FlashSelect)

#define Flash_WP_SET() //SETBIT(GPIOA->ODR,BIT3)
#define Flash_WP_CLR() //CLRBIT(GPIOA->ODR,BIT3)

#define Flash_EXCS_SET() //SETBIT(GPIOA->ODR,BIT2)
#define Flash_EXCS_CLR() //CLRBIT(GPIOA->ODR,BIT2)

void Flash_Init(void);
u8 Flash_ReadID(void);
u16 Flash_ReadMID(void);
u8 Flash_ReadWID(void);
void Flash_ReadUniqueID(u8 *buff);
void Flash_WriteStatusReg(u8 dat);
u8 Flash_WaitBusy(void);
void Flash_EraseSector(u32 addr);

void Flash_Enable(void);
void Flash_Disable(void);

void Flash_ReadData(u32 addr,u16 len,u8 *buff);
void Flash_WriteData(u32 addr,u16 len,u8 *buff);

u8 Flash_CmpData(u32 addr,u16 len,u8 *buff);

u8 Flash_GetSelect(void);

extern u16 FlashSelect;

#define Flash_SelectM 0
#define Flash_SelectS 1

void Flash_Select(u8 index);

#endif
