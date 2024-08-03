#define _CRT_SECURE_NO_WARNINGS
比大小游戏
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()                   //菜单
{
	printf("******************************\n");
	printf("********Number guessing*******\n");
	printf("************1.play************\n");
	printf("************0.exit************\n");
	printf("******************************\n");
}

void guess()                             //猜数字游戏主体
{
	int y = rand() % 100 + 1;

	while (1)
	{
		int z = 0;
		scanf_s("%d", &z);
		if (z > y)
		{
			printf("猜大啦\n");
		}
		else if (z < y)
		{
			printf("猜小啦\n");
		}
		else
		{
			printf("猜对啦!\n");
			printf("再玩一次吗?\n");
			break;
		}
	}
	
}
int main()
{
	int x = 0;
	srand((unsigned int)time(NULL));

	do                                        //初始化
	{
		menu();
		scanf_s("%d", &x);
		switch (x)                            //是否进入游戏
		{
		case 1:
			system("cls");
			printf("请输入一个1-100的数字\n");
			guess();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			system("cls");
			printf("请重新输入\n");
			break;
		}

	} while (x);
	return 0;
}