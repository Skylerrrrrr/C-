//test 三子棋游戏
//#include <stdio.h> -->可放到game.h一起引用
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
	//数组-存放走出的棋盘信息
	char board[ROW][COL] = {0};//全部空格
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	//下棋
	while (1)
	{
		//player:
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢了
		ret = IsWin();
		if(ret != 'C')//不是继续 那就停
		{
			break;
		}
		//computer
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢了
		ret = IsWin();
		if(ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢了\n");
	}
	else if(ret == '#')
	{
		printf("电脑赢了\n");
	}
	else
	{
		printf("平局\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch(input)
		{
			case 1:// 1.Play
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误,请重新选择!\n");
				break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}