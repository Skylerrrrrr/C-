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
//         //1.��ӡһ�е�����
//         printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//         //2.��ӡ�ָ���
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
        //1.��ӡһ�е�����
            printf(" %c ", board[i][j]);//ע���пո�
            if (j < col - 1)//for����ӡ���
                printf("|");
        }
        printf("\n");
        //2.��ӡ�ָ���
        if (i < row - 1)
        {
            for (j = 0; j < col; j++)
            {
                printf("---");
                if(j < col - 1)//for����ӡ����
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
    printf("�����:>\n");
    while (1)
    {
        printf("������Ҫ�µ�����:>");
        scanf("%d%d", &x, &y);
    //�ж�xy�ĺϷ���(�����˲ſ�ʼ�ж�)
        if (x>=1 && x<=row && y>=1 && y<=col)
        {
            //��Ҫ�ж���û�б��¹�
            if (board[x-1][y-1] == ' ')// -1��Ϊ�˷����±�(�������Ǵ�1��ʼ��) ; == ' '��ʾ��û������
            {
                board[x-1][y-1] = '*';
                break;
            }
            else
            {
                printf("�����걻ռ��\n");
            }
        }
        else
        {
            printf("����Ƿ�,����������!\n");
            
        }
    }
}



void ComputerMove(char board[ROW][COL], int row, int col)
{
    int x = 0;
    int y = 0;
    printf("������:>\n");
    while (1)
    {
        //�����������
    x = rand()%row;//%row�Ľ������ 0 or 1 or 2 �պ÷��Ϸ�Χ,����Ƿ�
    y = rand()%col;
    if(board[x][y] == ' ')
    {
       board[x][y] = '*';
       break;
    }
    }
    
}
