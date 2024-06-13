void menu()//¥Ú”°±ÌÕ∑
{
	printf("********************\n");
	printf("** 1.play  0.exit **\n");
	printf("********************\n");
}
void game()
{
	char a[row][col] = { 0 };
	intiboard(a[row][col],row,col);
	displayboard(a[row][col], row, col);
}
void test()
{
	menu();
	printf("please input:")
	int input=0;
	scanf("%d",&input);
	do
	{
		switch 0:
		{
            printf("exit the game");
		    break;
		}
		switch 1 :
		{
			printf("welcome");
			game();
		}
		default:
			printf("wrong number,input again!");
	} while (input);
}
int main()
{
	test();
	return 0;
}