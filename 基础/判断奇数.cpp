#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main()
{
	int a=0;
	scanf("%d", &a);
	if (a % 2 == 0)
	{
		printf("is not a odd number ");
	}
	else
	{
		printf("is a odd number");
	}
	return 0;
}
