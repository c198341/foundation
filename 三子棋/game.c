void initboard(char a[row][col],int row,int col)
{
	int i, j;
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
			a[i][j] = ' ';
}
void displayboard(char a[row][col], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c |", a[i][j]);
			if (j == (col - 1))
			{
				printf("\n");
			}
		}
		if (i != (row - 1))
			printf("-----------\n");
	}
}
void playermove(char a[row][col], int row, int col)
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
			a[i - 1][j - 1] = "*";
			displayboard(a[row][col], row, col);
		}
	}
}
void computermove(char a[row][col], int row, int col)
{
	int i=srand(unsigned int time(NULL))%3;
	int j = srand(unsigned int time(NULL)) % 3;
	if (i > row || j > col)
	{
		printf("wrong position,input again:");
		continue;
	}
	else
	{
		a[i - 1][j - 1] = "*";
		displayboard(a[row][col], row, col);
	}
}
int isfull()
char iswin()