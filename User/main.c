#include "stm32f10x.h"   // �൱��51��Ƭ���е�  #include <reg51.h>
#include "sdio.h"
#include "usart.h"

int main(void)
{
	// ���������ʱ��ϵͳ��ʱ���Ѿ������ó�72M��
	
	int status = SD_OK;
	status = SD_Init();
	if (status != SD_OK)
	{
		printf("SD��ʼ��ʧ��\n");
	}
	else
	{
		printf("SD��ʼ���ɹ���");
	}
	
}


