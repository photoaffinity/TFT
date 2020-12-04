#ifndef _SERIAL_H_
#define _SERIAL_H_

#include "uart.h"

typedef struct
{
  char *cache;
  uint16_t wIndex;
  uint16_t rIndex;
}DMA_CIRCULAR_BUFFER;

extern DMA_CIRCULAR_BUFFER dmaL1Data[_UART_CNT];
extern uint16_t bufferDMA[_UART_CNT];

void Serial_Init(u32 baud);
void Serial_DeInit(void);
void Serial_Puts(uint8_t port, char *s);

#endif
