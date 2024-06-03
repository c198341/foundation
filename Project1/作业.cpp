#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
int main()
{
	///*int d[3] = { 100,1,8 };
	//int a;
	//if (d[0] < d[1])
	//{
	//	a=d[0];
	//	d[0] = d[1];
	//	d[1] = a;
	//}
	//if (d[0] < d[2])
	//{
	//	a = d[0];
	//	d[0] = d[2];
	//	d[2] = d[0];
	//}
	//if (d[1] < d[2])
	//{
	//	a = d[1];
	//	d[1] = d[2];
	//	d[2] = a;
	//}
	//printf("%d %d %d", d[0], d[1], d[2]);*/
	///*int i = 1;
	//for(i=1;i<=100;i++)
	//	if (i % 3 != 0)
	//	{
	//		continue;
	//	}
	//	else
	//		printf("%d ", i);*/
	///*int a, b;
	//int t,i;
	//scanf("%d %d", &a, &b);
	//if (a > b)
	//{
	//	t = b;
	//}
	//else*/
	///*	t = a;
	//for (i = t; 1<= i; i--)
	//{
	//	if ((a % i == 0) && (b % i == 0))
	//	{
	//		printf("%d", i);
	//		break;
	//	}
	//}*/
	//int i=1000;
	//int c = 0;
	//for (i = 1000; i <= 2000; i++)
	//{
	//	if ((i % 4 == 0) && (i % 100 != 0))
	//	{
	//		printf("%d ", i);
	//		c++;
	//	}
	//	else if ((i % 400 == 0) && (i % 100 == 0))
	//	{
	//		printf("%d ", i);
	//		c++;
	//	}
	//} 
	//printf("%d\n", c);
	int i;
	int j;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j <= (i-1); j++)
		{
			if (i % j == 0)
				break;
			
		}
		if(j==i)
			printf("%d ", i);
	
	}
	return 0;
}