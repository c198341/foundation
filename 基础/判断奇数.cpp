#include <stdio.h>
int main()
{
	int a=0;
	scanf_s("%d", &a);
	if (a % 2 == 0)
	{
		printf("不是奇数");
	}
	else
	{
		printf("是奇数");
	}
	return 0;
}