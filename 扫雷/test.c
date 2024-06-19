#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("*********************\n");
	printf("******  1.play ******\n");
	printf("******  0.exit ******\n");
	printf("*********************\n");
}
void game()
{
	char mine[ROWS][COLS] = {0};
	char find[ROWS][COLS] = {0};
	initboard(mine, ROWS, COLS, '0');
	initboard(find, ROWS, COLS, '*');
	showboard(find, ROWS, COLS);
	setmine(mine, ROWS, COLS, EASY_COUNT);
	showboard(mine, ROWS, COLS);//显示无误，则作为说明
	findmine(mine, find, ROW, COL);
}
void test()
{
	int i;
	do
	{
		printf("input:1.play  0.exit\n");
		scanf("%d", &i);
		if (i == 0)
		{
			printf("exit the game\n");
			break;
		}
		else if (i == 1)
		{
			game();
			break;
		}
		else
		{
			printf("wrong input,input again!\n");
		}
	} while (1);
}
int main()
{
	srand((unsigned int)time(NULL));
	menu();
	test();
	return 0;
}