#include "SerialConnection.h"
#include "includes.h"

// uncomment this line to use inline copy (fast code) instead of memcpy() (less code)
#define USE_INLINE_COPY

#define SERIAL_PORT_RX_QUEUE_SIZE   NOBEYOND(ACK_CACHE_SIZE, RAM_SIZE * 64, 4096)  // ACK messages reading queue from mainboard
#define SERIAL_PORT_2_RX_QUEUE_SIZE 512
#define SERIAL_PORT_3_RX_QUEUE_SIZE 512
#define SERIAL_PORT_4_RX_QUEUE_SIZE 512

#define SERIAL_PORT_TX_QUEUE_SIZE   256  // gcodes writing queue to mainboard
#define SERIAL_PORT_2_TX_QUEUE_SIZE 128
#define SERIAL_PORT_3_TX_QUEUE_SIZE 128
#define SERIAL_PORT_4_TX_QUEUE_SIZE 128

const SERIAL_PORT_INFO serialPort[SERIAL_PORT_COUNT] = {
  {SERIAL_PORT    , SERIAL_PORT_RX_QUEUE_SIZE  , SERIAL_PORT_TX_QUEUE_SIZE  , "" , "1 - Printer"},
  #ifdef SERIAL_PORT_2
    {SERIAL_PORT_2, SERIAL_PORT_2_RX_QUEUE_SIZE, SERIAL_PORT_2_TX_QUEUE_SIZE, "2", "2 - WiFi"},
  #endif
  #ifdef SERIAL_PORT_3
    {SERIAL_PORT_3, SERIAL_PORT_3_RX_QUEUE_SIZE, SERIAL_PORT_3_TX_QUEUE_SIZE, "3", "3 - UART3"},
  #endif
  #ifdef SERIAL_PORT_4
    {SERIAL_PORT_4, SERIAL_PORT_4_RX_QUEUE_SIZE, SERIAL_PORT_4_TX_QUEUE_SIZE, "4", "4 - UART4"}
  #endif
};

const uint32_t baudrateValues[BAUDRATE_COUNT] =    { 0,     2400,   9600,   19200,   38400,   57600,   115200,   250000,   500000,   1000000};
const char * const baudrateNames[BAUDRATE_COUNT] = {"OFF", "2400", "9600", "19200", "38400", "57600", "115200", "250000", "500000", "1000000"};

static inline void Serial_InitPrimary(void)
{
  InfoHost_Init(false);  // initialize infoHost when disconnected

  Serial_Config(serialPort[PORT_1].port, serialPort[PORT_1].cacheSizeRX, serialPort[PORT_1].cacheSizeTX, baudrateValues[infoSettings.serial_port[PORT_1]]);
}

static inline void Serial_DeInitPrimary(void)
{
  Serial_DeConfig(serialPort[PORT_1].port);
}

void Serial_Init(SERIAL_PORT_INDEX portIndex)
{
  if (!WITHIN(portIndex, ALL_PORTS, SERIAL_PORT_COUNT - 1))
    return;

  if (portIndex <= PORT_1)  // if primary, all serial ports or all supplementary serial ports
  {
    if (portIndex != SUP_PORTS)  // if primary or all serial ports, initialize the primary serial port
      Serial_InitPrimary();

    #ifdef SERIAL_PORT_2
      if (portIndex != PORT_1)  // if ALL_PORTS or SUP_PORTS, initialize all the supplementary serial ports
      {
        for (portIndex = PORT_2; portIndex < SERIAL_PORT_COUNT; portIndex++)
        {
          // the supplementary serial ports should be enabled according to config.ini.
          // Disable the serial port when it is not in use and/or not connected to a device (floating) to
          // avoid to receive and process wrong data due to possible electromagnetic interference (EMI).
          if (infoSettings.serial_port[portIndex] > 0)  // if serial port is enabled
            Serial_Config(serialPort[portIndex].port, serialPort[portIndex].cacheSizeRX, serialPort[portIndex].cacheSizeTX,
                          baudrateValues[infoSettings.serial_port[portIndex]]);
        }
      }
    #endif
  }
  #ifdef SERIAL_PORT_2
    else  // if supplementary serial port
    {
      if (infoSettings.serial_port[portIndex] > 0)  // if serial port is enabled
      {
        Serial_Config(serialPort[portIndex].port, serialPort[portIndex].cacheSizeRX, serialPort[portIndex].cacheSizeTX,
                      baudrateValues[infoSettings.serial_port[portIndex]]);
      }
    }
  #endif
}

void Serial_DeInit(SERIAL_PORT_INDEX portIndex)
{
  if (!WITHIN(portIndex, ALL_PORTS, SERIAL_PORT_COUNT - 1))
    return;

  if (portIndex <= PORT_1)  // if primary, all serial ports or all supplementary serial ports
  {
    if (portIndex != SUP_PORTS)  // if primary or all serial ports, deinitialize the primary serial port
      Serial_DeInitPrimary();

    #ifdef SERIAL_PORT_2
      if (portIndex != PORT_1)  // if ALL_PORTS or SUP_PORTS, deinitialize all the supplementary serial ports
      {
        for (portIndex = PORT_2; portIndex < SERIAL_PORT_COUNT; portIndex++)
        {
          Serial_DeConfig(serialPort[portIndex].port);
        }
      }
    #endif
  }
  #ifdef SERIAL_PORT_2
    else  // if supplementary serial port
    {
      Serial_DeConfig(serialPort[portIndex].port);
    }
  #endif
}

void Serial_Forward(SERIAL_PORT_INDEX portIndex, const char * msg)
{
  if (!WITHIN(portIndex, ALL_PORTS, SERIAL_PORT_COUNT - 1))
    return;

  #if defined(SERIAL_DEBUG_PORT) && defined(DEBUG_SERIAL_COMM)
    // dump serial data sent to debug port
    Serial_Put(SERIAL_DEBUG_PORT, ">>");
    Serial_Put(SERIAL_DEBUG_PORT, msg);
  #endif

  uint8_t portCount = SERIAL_PORT_COUNT;  // by default, select all the serial ports

  if (portIndex == ALL_PORTS)         // if ALL_PORTS, forward the message to all the enabled serial ports
    portIndex = PORT_1;
  #ifdef SERIAL_PORT_2
    else if (portIndex == SUP_PORTS)  // if SUP_PORTS, forward the message to all the enabled supplementary serial ports
      portIndex = PORT_2;
  #endif
  else                                // if specific port, forward the message only to that specific serial port, if enabled
    portCount = portIndex + 1;

  for (; portIndex < portCount; portIndex++)
  {
    // forward data only if serial port is enabled
    if (infoSettings.serial_port[portIndex] > 0
        #ifdef SERIAL_DEBUG_PORT
          && serialPort[portIndex].port != SERIAL_DEBUG_PORT  // do not forward data to serial debug port
        #endif
        )
      Serial_Put(serialPort[portIndex].port, msg);  // pass on the message to the port
  }
}

uint16_t Serial_Get(uint8_t port, char * buf, uint16_t bufSize)
{
  // NOTE: used 32 bit variables for performance reasons (in particular for data copy)

  // wIndex: update L1 cache's writing index (dynamically changed (by L1 cache's interrupt handler) variables/attributes)
  //         and make a static access (32 bit) to it to speedup performance on this function
  //
  uint32_t wIndex = dmaL1DataRX[port].wIndex = Serial_GetWritingIndexRX(port);  // get the latest wIndex
  uint32_t flag = dmaL1DataRX[port].flag;                                       // get the current flag position

  if (flag == wIndex)  // if no data to read from L1 cache, nothing to do
    return 0;

  uint32_t cacheSize = dmaL1DataRX[port].cacheSize;

  while (dmaL1DataRX[port].cache[flag] != '\n' && flag != wIndex)  // check presence of "\n" in available data
  {
    flag = (flag + 1) % cacheSize;
  }

  if (flag == wIndex)  // if "\n" was not found (message incomplete), update flag and exit
  {
    dmaL1DataRX[port].flag = flag;  // update queue's custom flag with flag (also equal to wIndex)

    return 0;
  }

  // rIndex: L1 cache's reading index (not dynamically changed (by L1 cache's interrupt handler) variables/attributes)
  //
  DMA_CIRCULAR_BUFFER * dmaL1Data_ptr = &dmaL1DataRX[port];
  char * cache = dmaL1Data_ptr->cache;
  uint32_t rIndex = dmaL1Data_ptr->rIndex;

  while (cache[rIndex] == ' ' && rIndex != flag)  // remove leading empty space, if any
  {
    rIndex = (rIndex + 1) % cacheSize;
  }

  // msgSize: message size (after updating rIndex removing leading empty spaces). Terminating null character '\0' not included
  uint32_t msgSize = (cacheSize + flag - rIndex) % cacheSize + 1;

  // if buf size is not enough to store the data plus the terminating null character "\0", skip the data copy
  //
  // NOTE: the following check should never be matched if buf has a proper size and there is no reading error.
  //       If so, the check could be commented out just to improve performance. Just keep it to make the code more robust
  //
  if (bufSize < (msgSize + 1))  // +1 is for the terminating null character '\0'
    return 0;

  // if data is one chunk only, retrieve data from upper part of circular cache
  if (rIndex <= flag)
  {
  #ifdef USE_INLINE_COPY
    while (rIndex <= flag)
    {
      *(buf++) = cache[rIndex++];
    }
  #else
    memcpy(buf, &cache[rIndex], msgSize);
    buf += msgSize;
  #endif
  }
  else  // data at end and beginning of cache
  {
  #ifdef USE_INLINE_COPY
    while (rIndex <= cacheSize)
    {
      *(buf++) = cache[rIndex++];
    }

    rIndex = 0;
    uint32_t maxIndex = bufSize - (cacheSize - dmaL1Data_ptr->rIndex);  // used dmaL1Data_ptr->rIndex and not rIndex

    while (rIndex < maxIndex)
    {
      *(buf++) = cache[rIndex++];
    }
  #else
    memcpy(buf, &cache[rIndex], cacheSize - rIndex);
    buf += cacheSize - rIndex;

    memcpy(buf, cache, flag + 1);
    buf += flag;
  #endif
  }

  *buf = '\0';  // end character

  // update queue's custom flag and reading index with next index
  dmaL1Data_ptr->flag = dmaL1Data_ptr->rIndex = (flag + 1) % cacheSize;

  return msgSize;  // return the number of bytes stored in buf
}

#ifdef SERIAL_PORT_2

void Serial_GetFromUART(void)
{
  CMD cmd;

  // scan all the supplementary serial ports
  for (SERIAL_PORT_INDEX portIndex = PORT_2; portIndex < SERIAL_PORT_COUNT; portIndex++)
  {
    // retrieve data only if serial port is enabled
    if (infoSettings.serial_port[portIndex] > 0
        #ifdef SERIAL_DEBUG_PORT
          && serialPort[portIndex].port != SERIAL_DEBUG_PORT  // do not forward data to serial debug port
        #endif
        )
    {
      while (Serial_Get(serialPort[portIndex].port, cmd, CMD_MAX_SIZE) != 0)  // if some data have been retrieved
      {
        handleCmd(cmd, portIndex);
      }
    }
  }
}

#endif
