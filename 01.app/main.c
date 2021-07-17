#include "includes.h"
int main(void){
	/*
	uint8 buf[10] = {0x01,0x02,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0A};
	bool flag= false;
	volatile uint16 crc16 = 0;
	uint8 tmpbuf[10] = {0};
	uint16 crc16tmp=0;
	*/

	if(UpgradeKey_IsOk() == true){
		
		/*1.根据状态条件,解锁内部Flash*/
		FlashInterCtr_Init();
		/*2.初始化升级串口*/
		Bsp_Init();
		/*3.接收bin文件*/
		UpgradePro_Frame();
	}else{
		/*4.跳转至APP区域*/
		Jump_APP_Execute();	
	}

	#if USART_485_Optimization_Debug == 1
		Usart_Debug();
	#endif
		
	while(1){
		/*测试数据*/
		/*Debug_Pin0_ON;*/

		/*说明:测试队列操作*/
		/*
		if(flag == true)
			Usart2_Rcv((uint8 *)&buf[0], 4);
		*/

		/*测试CRC16逻辑*/
		/*
		crc16 = CRC16((uint8 *)&buf[0], 10);

		crc16tmp = CRC16((uint8 *)&buf[0], 5);
		memcpy((uint8*)&tmpbuf[0],(uint8*)&crc16tmp,sizeof(uint16));
		memcpy((uint8*)&tmpbuf[2],(uint8*)&buf[5],5);
		crc16tmp = CRC16((uint8 *)&tmpbuf[0], 7);
		*/
	}
}

