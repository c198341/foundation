#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("*********************\n");
	printf("******  1.play ******\n");
	printf("******  0.exit ******\n");
	printf("*********************\n");
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