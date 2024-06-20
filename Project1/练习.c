#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	///*int num=-1;
	//int count = 0;
	//while (num)
	//{
	//	if (num % 2 == 1)
	//	{
	//		count++;
	//	}
	//	num = num / 2;
	//}
	//printf("%d\n", count);*/
	int num =15;
	int i = 0;
	int j = 0;
	for (i = 0; i < 32; i++)
	{
		if (1 == (num & 1) % 2)
		{
			j++;
		}
		num = num >> 1;
	}
	printf("%d", j);
	return 0;
}