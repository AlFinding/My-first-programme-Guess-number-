#define _CRT_SECURE_NO_WARNINGS
�ȴ�С��Ϸ
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()                   //�˵�
{
	printf("******************************\n");
	printf("********Number guessing*******\n");
	printf("************1.play************\n");
	printf("************0.exit************\n");
	printf("******************************\n");
}

void guess()                             //��������Ϸ����
{
	int y = rand() % 100 + 1;

	while (1)
	{
		int z = 0;
		scanf_s("%d", &z);
		if (z > y)
		{
			printf("�´���\n");
		}
		else if (z < y)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���!\n");
			printf("����һ����?\n");
			break;
		}
	}
	
}
int main()
{
	int x = 0;
	srand((unsigned int)time(NULL));

	do                                        //��ʼ��
	{
		menu();
		scanf_s("%d", &x);
		switch (x)                            //�Ƿ������Ϸ
		{
		case 1:
			system("cls");
			printf("������һ��1-100������\n");
			guess();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			system("cls");
			printf("����������\n");
			break;
		}

	} while (x);
	return 0;
}