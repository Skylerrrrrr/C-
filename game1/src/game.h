#define ROW 3
#define COL 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//declaration:
void InitBoard(char board[ROW][COL], int row, int col);

void DisplayBoard(char board[ROW][COL], int row, int col);

void PlayerMove(char board[ROW][COL], int row, int col);

void ComputerMove(char board[ROW][COL], int row, int col);



/* 告诉我们四种游戏状态:
1. 玩家赢了 - '*'
2.电脑赢了  - '#'
3.平局      - 'Q'
4.继续      - 'C'
*/
char IsWin();

