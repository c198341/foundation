#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void initboard(char a[ROWS][COLS], int row, int col, char set)
{
	int i = 0;
	int j = 0;
	for(i=1;i<=ROW;i++)
		for (j = 1; j <= COL;j++)
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
int get_mine_count(char mine[ROWS][COLS], int i, int j)
{
	return (mine[i - 1][j - 1] + mine[i - 1][j] + mine[i - 1][j + 1] +
		mine[i][j - 1] + mine[i][j + 1] +
		mine[i + 1][j - 1] + mine[i + 1][j] + mine[i + 1][j + 1]-8*'0');	
}
void findmine(char a[ROWS][COLS], char b[ROWS][COLS], int row,int col)
{
	int i = 0;
	int j = 0;
	int count=0;
	while (count<row*col-EASY_COUNT)
	{
		printf("input mine's position:>");
		scanf("%d %d", &i, &j);
		if (i >= 1 && i <= 9 && j >= 1 && j <= 9)
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
				printf("%d\n", count);
				b[i][j] = count + '0';
				showboard(b, ROWS, COLS);
				count++;
			}
		}
		else
			printf("wrong position.input again:>\n");
	}
}