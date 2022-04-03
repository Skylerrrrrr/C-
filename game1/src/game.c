#include "game.h"


//for the function : InitBoard
void InitBoard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            board[i][j] = ' ';
        }
    }
}



// void DisplayBoard(char board[ROW][COL], int row, int col)
// {
//     int i = 0;
//     for (i = 0; i < row; i++)
//     {
//         //1.打印一行的数据
//         printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//         //2.打印分割行
//         if(i < row - 1)
//         {
//             printf("---|---|---\n");

//         }
//     }
// }

//optimized version:
void DisplayBoard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    for (i = 0; i < row; i++)
    { 

        int j = 0;
        for (j = 0; j < col; j++)
        {
        //1.打印一行的数据
            printf(" %c ", board[i][j]);//注意有空格
            if (j < col - 1)//for不打印最后
                printf("|");
        }
        printf("\n");
        //2.打印分割行
        if (i < row - 1)
        {
            for (j = 0; j < col; j++)
            {
                printf("---");
                if(j < col - 1)//for不打印最后的
                    printf("|");
            }
            printf("\n");
        }
    }
}





void PlayerMove(char board[ROW][COL], int row, int col)
{
    int x = 0;
    int y = 0;
    printf("玩家走:>\n");
    while (1)
    {
        printf("请输入要下的坐标:>");
        scanf("%d%d", &x, &y);
    //判断xy的合法性(输入了才开始判断)
        if (x>=1 && x<=row && y>=1 && y<=col)
        {
            //还要判断有没有被下过
            if (board[x-1][y-1] == ' ')// -1是为了符合下标(正常人是从1开始想) ; == ' '表示还没人下那
            {
                board[x-1][y-1] = '*';
                break;
            }
            else
            {
                printf("该坐标被占用\n");
            }
        }
        else
        {
            printf("坐标非法,请重新输入!\n");
            
        }
    }
}



void ComputerMove(char board[ROW][COL], int row, int col)
{
    int x = 0;
    int y = 0;
    printf("电脑走:>\n");
    while (1)
    {
        //生成随机坐标
    x = rand()%row;//%row的结果会是 0 or 1 or 2 刚好符合范围,不会非法
    y = rand()%col;
    if(board[x][y] == ' ')
    {
       board[x][y] = '*';
       break;
    }
    }
    
}
