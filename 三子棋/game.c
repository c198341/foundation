#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void initboard(char a[ROW][COL],int row,int col)
{
	int i, j;
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
			a[i][j] = ' ';
}
void displayboard(char a[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{			
			if (j == (col - 1))
			{
				printf(" %c ", a[i][j]);
				printf("\n");
			}
			else
				printf(" %c |", a[i][j]);
		}
		if (i != (row - 1))
			printf("-----------\n");
	}
}
void playermove(char a[ROW][COL], int row, int col)
{
	int i, j;
    while (1)
	{
		printf("input your position:");
		scanf("%d,%d", &i, &j);
		if (i > row || j > col)
		{
			printf("wrong position,input again:");
			continue;
		}
		else
		{
			a[i - 1][j - 1] = '*';
			displayboard(a, row, col);
		}
	}
}
void computermove(char a[ROW][COL], int row, int col)
{
	srand((unsigned int)time(NULL));
	int i = 0;
	int j = 0;
	while (1)
	{
		i = rand() % row;
		j = rand() % col;
		if (a[i][j] != ' ')
		{
			a[i][j] = '#';
			displayboard(a, row, col);
			break;
		}
	}
}
int isfull(char a[ROW][COL], int row, int col)
{
	int i, j;
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			if (a[i][j] != ' ')
			{
				return 0;
			}
	return 1;
}
char iswin(char a[ROW][COL], int row, int col)
{
	//*玩家赢
	//#电脑赢
	//q平局
	//c继续
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
		if (a[i][0] == a[i][1] && a[i][1] == a[i][2] && a[i][0] == '*' )
		{
			return a[i][0];
		}
	for (j = 0; j < col; j++)
		if (a[0][j] == a[1][j] && a[1][j] == a[2][j] && a[0][j] == '*')
			return a[0][j];
	if (a[0][0] == a[1][1] && a[1][1] == a[2][2] && a[0][0] == '*')
		return a[0][0];
	if (a[0][2] == a[1][1] && a[1][1] == a[2][0] && a[0][2] == '*')
		return a[0][2];

	for (i = 0; i < row; i++)
		if (a[i][0] == a[i][1] && a[i][1] == a[i][2] && a[i][0] == '#')
		{
			return a[i][0];
		}
	for (j = 0; j < col; j++)
		if (a[0][j] == a[1][j] && a[1][j] == a[2][j] && a[0][j] == '#')
			return a[0][j];
	if (a[0][0] == a[1][1] && a[1][1] == a[2][2] && a[0][0] == '#')
		return a[0][0];
	if (a[0][2] == a[1][1] && a[1][1] == a[2][0] && a[0][2] == '#')
		return a[0][2];
	if (isfull(a, row, col))
		return 'q';
	else
		return 'c';
}