#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()//打印表头
{
	printf("********************\n");
	printf("** 1.play  0.exit **\n");
	printf("********************\n");
}
void game()
{
	char ret = 0;
	char a[ROW][COL] = { ' ' };
	initboard(a,ROW,COL);
	displayboard(a,ROW,COL);
	while (1)
	{
		playermove(a, ROW, COL);
		computermove(a, ROW, COL);
		ret = iswin(a, ROW, COL);
		if (ret == '*')
		{
			printf("you win!");
			break;
		}
		else if (ret == '#')
		{
			printf("computer win!");
			break;
		}
			
	}
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("please input:");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
		{
			printf("exit the game\n");
			break;
		}
		case 1:
		{
			printf("welcome\n");
			game();
			break;
		}
		default:
			printf("wrong number,input again!\n");
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}
//为什么playermove程序中不加上computermove？
// https://blog.csdn.net/weixin_74531333/article/details/129906421?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522171844126316800222880617%2522%252C%2522scm%2522%253A%252220140713.130102334..%2522%257D&request_id=171844126316800222880617&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~sobaiduend~default-2-129906421-null-null.142^v100^pc_search_result_base3&utm_term=%E4%B8%89%E5%AD%90%E6%A3%8B%20c%E8%AF%AD%E8%A8%80&spm=1018.2226.3001.4187