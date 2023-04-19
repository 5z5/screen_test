#ifndef _Packet_H_
#define _Packet_H_

#include "mcuhead.h"

#define CMD_NUM 7


#define RF_OK 		1
#define RF_ERROR 	2

typedef void(*PacketEvent)(u8 cmd,u8* buff,u16 len);

typedef struct {
	void(*Init)(u8*);
	void(*SendCmd)(u8 cmd);
	void(*SendData)(u8 cmd,u8* dat,u16 len);
	void(*Ack)(u8 cmd);
	void(*RecvData)(u8 dat);
	void(*Event)(PacketEvent);
	void(*TimeOutTick)(void);
	void(*Loop)(void);
	
	void(*SetReadBuff)(u8*);
	u8(*ReadByte)(void);
	u16(*ReadWord)(void);
	u32(*ReadDWord)(void);
	u8*(*GetReadAddr)(void);
	void(*WriteByte)(u8);
	void(*WriteWord)(u16);
	void(*WriteDWord)(u32);
	u8*(*GetWriteAddr)(void);
}PacketBase;



extern const PacketBase Packet;

#endif
