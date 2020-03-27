#include "includes.h"
#include "lcd.h"
#include "GPIO_Init.h"

#ifdef STM32_HAS_FSMC
u16 LCD_RD_DATA(void)
{
  vu16 ram;
  ram=LCD->LCD_RAM;
  return ram;
}

void LCD_WriteReg(u8 LCD_Reg, u16 LCD_RegValue)
{
  LCD->LCD_REG = LCD_Reg;
  LCD->LCD_RAM = LCD_RegValue;
}

u16 LCD_ReadReg(u8 LCD_Reg)
{
  LCD_WR_REG(LCD_Reg);
  Delay_us(5);
  return LCD_RD_DATA();
}

void LCD_GPIO_Config(void)
{
  //fsmc 16bit data pins
  GPIO_InitSet(PD0, MGPIO_MODE_AF_PP, GPIO_AF_FSMC);
  GPIO_InitSet(PD1, MGPIO_MODE_AF_PP, GPIO_AF_FSMC);
  GPIO_InitSet(PD8, MGPIO_MODE_AF_PP, GPIO_AF_FSMC);
  GPIO_InitSet(PD9, MGPIO_MODE_AF_PP, GPIO_AF_FSMC);
  GPIO_InitSet(PD10, MGPIO_MODE_AF_PP, GPIO_AF_FSMC);
  GPIO_InitSet(PD14, MGPIO_MODE_AF_PP, GPIO_AF_FSMC);
  GPIO_InitSet(PD15, MGPIO_MODE_AF_PP, GPIO_AF_FSMC);
  GPIO_InitSet(PE7, MGPIO_MODE_AF_PP, GPIO_AF_FSMC);
  GPIO_InitSet(PE8, MGPIO_MODE_AF_PP, GPIO_AF_FSMC);
  GPIO_InitSet(PE9, MGPIO_MODE_AF_PP, GPIO_AF_FSMC);
  GPIO_InitSet(PE10, MGPIO_MODE_AF_PP, GPIO_AF_FSMC);
  GPIO_InitSet(PE11, MGPIO_MODE_AF_PP, GPIO_AF_FSMC);
  GPIO_InitSet(PE12, MGPIO_MODE_AF_PP, GPIO_AF_FSMC);
  GPIO_InitSet(PE13, MGPIO_MODE_AF_PP, GPIO_AF_FSMC);
  GPIO_InitSet(PE14, MGPIO_MODE_AF_PP, GPIO_AF_FSMC);
  GPIO_InitSet(PE15, MGPIO_MODE_AF_PP, GPIO_AF_FSMC);

  /* ����FSMC���Ӧ�Ŀ�����
  * PD4-FSMC_NOE :LCD-RD
  * PD5-FSMC_NWE :LCD-WR
  * PD7-FSMC_NE1 :LCD-CS
  * PE2-FSMC_A23 :LCD-RS   LCD-RS data or cmd
  */
  GPIO_InitSet(PD4, MGPIO_MODE_AF_PP, GPIO_AF_FSMC);
  GPIO_InitSet(PD5, MGPIO_MODE_AF_PP, GPIO_AF_FSMC);
  GPIO_InitSet(PE2, MGPIO_MODE_AF_PP, GPIO_AF_FSMC);
  GPIO_InitSet(PD7, MGPIO_MODE_AF_PP, GPIO_AF_FSMC);
}

void LCD_FSMC_Config(void)
{
  FSMC_NORSRAMInitTypeDef  FSMC_NORSRAMInitStructure;
  FSMC_NORSRAMTimingInitTypeDef  readWriteTiming,writeTiming;

  RCC_AHB3PeriphClockCmd(RCC_AHB3Periph_FSMC, ENABLE);

  readWriteTiming.FSMC_AddressSetupTime = 0x01;	 //��ַ����ʱ�䣨ADDSET��Ϊ2��HCLK 1/36M=27ns
  readWriteTiming.FSMC_AddressHoldTime = 0x00;
  readWriteTiming.FSMC_DataSetupTime = 0x0f;
  readWriteTiming.FSMC_BusTurnAroundDuration = 0x00;
  readWriteTiming.FSMC_CLKDivision = 0x00;
  readWriteTiming.FSMC_DataLatency = 0x00;
  readWriteTiming.FSMC_AccessMode = FSMC_AccessMode_A;	 //ģʽA

  writeTiming.FSMC_AddressSetupTime = 0x00;	 //��ַ����ʱ�䣨ADDSET��Ϊ1��HCLK
  writeTiming.FSMC_AddressHoldTime = 0x00;
  writeTiming.FSMC_DataSetupTime = 0x03;		 ////���ݱ���ʱ��Ϊ4��HCLK
  writeTiming.FSMC_BusTurnAroundDuration = 0x00;
  writeTiming.FSMC_CLKDivision = 0x00;
  writeTiming.FSMC_DataLatency = 0x00;
  writeTiming.FSMC_AccessMode = FSMC_AccessMode_A;	 //ģʽA

  FSMC_NORSRAMInitStructure.FSMC_Bank = FSMC_Bank1_NORSRAM1;  //ѡ����Ӵ洢����ĵ�ַ
  FSMC_NORSRAMInitStructure.FSMC_DataAddressMux = FSMC_DataAddressMux_Disable;//���������ߺ͵�ַ���Ƿ���
  FSMC_NORSRAMInitStructure.FSMC_MemoryType = FSMC_MemoryType_SRAM;
  FSMC_NORSRAMInitStructure.FSMC_MemoryType = FSMC_MemoryType_NOR;//������Ӵ洢��������
  FSMC_NORSRAMInitStructure.FSMC_MemoryDataWidth = FSMC_MemoryDataWidth_16b;//����FSMC�ӿڵ����ݿ���

  FSMC_NORSRAMInitStructure.FSMC_BurstAccessMode = FSMC_BurstAccessMode_Disable;//���÷���ģʽ
  FSMC_NORSRAMInitStructure.FSMC_WaitSignalPolarity = FSMC_WaitSignalPolarity_Low;//���õȴ��źŵļ���
  FSMC_NORSRAMInitStructure.FSMC_WrapMode = FSMC_WrapMode_Disable;//�����Ƿ�ʹ�÷Ƕ��뷽ʽ
  FSMC_NORSRAMInitStructure.FSMC_AsynchronousWait = FSMC_AsynchronousWait_Disable;
  FSMC_NORSRAMInitStructure.FSMC_WaitSignalActive = FSMC_WaitSignalActive_BeforeWaitState;//���õȴ��ź�ʲôʱ�����
  FSMC_NORSRAMInitStructure.FSMC_WaitSignal = FSMC_WaitSignal_Disable;//�����Ƿ�ʹ�õȴ��ź�
  FSMC_NORSRAMInitStructure.FSMC_WriteBurst = FSMC_WriteBurst_Disable;//�����Ƿ�����ͻ��д����

  FSMC_NORSRAMInitStructure.FSMC_WriteOperation = FSMC_WriteOperation_Enable;//����д����ʹ��
  FSMC_NORSRAMInitStructure.FSMC_ExtendedMode = FSMC_ExtendedMode_Enable ;//�����Ƿ�ʹ����չģʽ

  FSMC_NORSRAMInitStructure.FSMC_ReadWriteTimingStruct = &readWriteTiming;//��ʱ��
  FSMC_NORSRAMInitStructure.FSMC_WriteTimingStruct = &writeTiming;  //дʱ��

  FSMC_NORSRAMInit(&FSMC_NORSRAMInitStructure);
    /* ʹ�� FSMC Bank1_SRAM Bank */
  FSMC_NORSRAMCmd(FSMC_Bank1_NORSRAM1, ENABLE);
}

void LCD_HardwareConfig(void)
{
  LCD_GPIO_Config();
  LCD_FSMC_Config();
}

#else
  #error "don't support LCD-GPIO yet"
#endif
