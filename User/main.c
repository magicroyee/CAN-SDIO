#include "stm32f10x.h"   // 相当于51单片机中的  #include <reg51.h>
#include "sdio.h"
#include "usart.h"

int main(void)
{
	// 来到这里的时候，系统的时钟已经被配置成72M。
	
	int status = SD_OK;
	status = SD_Init();
	if (status != SD_OK)
	{
		printf("SD初始化失败\n");
	}
	else
	{
		printf("SD初始化成功！");
	}
	
}


