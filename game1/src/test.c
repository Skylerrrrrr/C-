//test��������Ϸ
#include <stdio.h>
#include "game.h"

void menu()
{
	printf("**************************\n");
	printf("*****1.PLAY  0.Exit*******\n");
	printf("**************************\n");
}

//for��Ϸ������ʵ��
void game()
{
	//���� - ����߳���������Ϣ
	char board[ROW][COL] = {0};
	
}

void test()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����,������ѡ��!\n");
				break;
		}

	}while (input);
}
int main()
{
	test();
	return 0;
}