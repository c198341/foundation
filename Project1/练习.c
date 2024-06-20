#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num=6;
	int count = 0;
	while (num)
	{
		if (num % 2 == 1)
		{
			count++;
			num = num / 2;
		}
	}
	printf("%d", count);
	return 0;
}