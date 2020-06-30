/*
 * RS485Task.h
 *
 *  Created on: 2020��5��16��
 *      Author: Breuning
 */

#ifndef RS485TASK_H_
#define RS485TASK_H_

typedef struct
{
	uint8_t  PumpState;

	float OutWaterTemp;
	float RetWaterTemp;

	float Electricity1;
	float Electricity2;

}RS485Data_Struct;

typedef enum
{
	RECEIVE = 0,
    TRANSMIT = 1

}RS485_STATE;

//������ʵ��ʮ�������븡������ת
typedef union test_float
{
   float all;
   struct
   {
     uint8_t Byte[4];
   }stByte;

}FLOAT;


extern RS485Data_Struct RS485Data;
extern BOOL RS485DataReadTimerFlag;

extern void RS485_Task();
extern void RS485Uart_RX_TX_Switch(RS485_STATE RS485state);
uint16_t CRC16(uint8_t *puchMsg, uint8_t usDataLen);



#endif /* RS485TASK_H_ */
