#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void initboard(char a[ROWS][COLS], int row, int col, char set)
{
	int i = 0;
	int j = 0;
	for(i=0;i<=ROWS;i++)
		for (j = 0; j <= COLS;j++)
		{
			a[i][j] = set;
		}
}
void showboard(char a[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= ROW; i++)
		printf(" %d ", i);
	printf("\n");
	for (i = 1; i <= ROW; i++)
	{
		printf(" %d ", i);
		for (j = 1; j <= COL; j++)
		{
			printf(" %c ", a[i][j]);
		}
		printf("\n");
	}
}
void setmine(char a[ROWS][COLS], int row, int col, int count)
{
	int i = 0;
	int j = 0;
	while (count)
	{
		i = rand() % ROW+ 1;
		j = rand() % COL + 1;
			if (a[i][j] == '0')
			{
				a[i][j] = '1';
				count--;
			}
	}
}
static int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return ((mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] +
		mine[x][y - 1] + mine[x][y + 1] +
		mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1])-(8*'0'));
}
void findmine(char a[ROWS][COLS], char b[ROWS][COLS], int row,int col)
{
	int i = 0;
	int j = 0;
	int win=0;
	int count = 0;
	while (win<row*col-EASY_COUNT)
	{
		printf("input mine's position:>");
		scanf("%d%d", &i, &j);
		if (i >= 1 && i <= ROW && j >= 1 && j <= COL)
		{
			if (a[i][j] == '1')
			{
				printf("mine! you die!\n");
				showboard(a, ROW, COL);
				break;
			}
			else
			{
				count = get_mine_count(a, i, j);
				printf("count=%d\n", count);
				b[i][j] = count + '0';
				showboard(b, ROWS, COLS);
				win++;
			}
		}
		else
			printf("wrong position.input again:>\n");
	}
	if (win == EASY_COUNT)
		printf("find all the mines!\n");
}