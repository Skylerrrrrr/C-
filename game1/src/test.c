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
	char ret = 0;
	//����-����߳���������Ϣ
	char board[ROW][COL] = {0};//ȫ���ո�
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	//����
	while (1)
	{
		//player:
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ��
		ret = IsWin();
		if(ret != 'C')//���Ǽ��� �Ǿ�ͣ
		{
			break;
		}
		//computer
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ��
		ret = IsWin();
		if(ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ��\n");
	}
	else if(ret == '#')
	{
		printf("����Ӯ��\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
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