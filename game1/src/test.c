//test ��������Ϸ
//#include <stdio.h> -->�ɷŵ�game.hһ������
#include "game.h"

void menu()
{
	printf("***********************\n");
	printf("****1.Play   0.Exit****\n");
	printf("***********************\n");
}

void game()
{
	//����-����߳���������Ϣ
	char board[ROW][COL] = {0};//ȫ���ո�
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
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
			case 1:// 1.Play
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����,������ѡ��!\n");
				break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}