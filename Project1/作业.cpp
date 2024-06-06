#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
int jiayi(int* p)
{
	*p = *p + 1;
	return *p;
}
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
	///*int i;
	//int j;
	//for (i = 100; i <= 200; i++)
	//{
	//	for (j = 2; j <= (i-1); j++)
	//	{
	//		if (i % j == 0)
	//			break;
	//		
	//	}
	//	if(j==i)
	//		printf("%d ", i);
	//
	//}*/
	///*int i;
	//i = (-4) % 3;
	//printf("%d\n", i);*/
	//int a = 0, b = 0;
	//for (a = 1, b = 1; a <= 100; a++)
	//{
	//	if (b >= 20)
	//		break;
	//	if (b % 3 == 1)
	//	{
	//		b = b + 3;
	//		continue;
	//	}
	//	b = b - 5;
	//}
	//printf("%d\n", a);
	///*int i = 9;
	//int j = 0;
	//for (i = 1; i <= 99; i++)
	//{
	//	if (i % 10 == 9)
	//		j++;
	//	if (i / 10 == 9)
	//		j++;
	//}
	//printf("%d\n", j);*/
 //  /* float sum = 0;
	//int i = 1;
 //   for (i = 1; i <= 100; i++)
 //   {
	//	if (i % 2 == 1)
	//		sum = 1 / (float)i + sum;
	//	else
	//		sum = -1 / (float)i + sum;
	//}
	//printf("%f\n", sum);*/
//int a[10] = { 1,5,4,9,4,3,-12,3,6,8 };
//int max=a[0],i;
//for (i = 1; i < 10; i++)
//{
//	if (a[i] > max)
//		max = a[i];
//}
//printf("the max is %d\n", max);
//int i, j;
//    for (i = 1; i <= 9; i++)
//    {
//        for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d  ",j, i, j * i);
//		}
//		printf("\n");
//	}
  ///*   srand(time(NULL));
  //   int t =rand() % 100;
	 //printf("%d\n", t);
	 //int i=0;
	 //while (1)
	 //{
		// scanf("%d", &i);
		// if (i == t)
		// {
		//	 printf("right,the num. is %d\n", t);
		//	 break;
		// }
		// else if (i < t)
		// {
		//	 printf("more\n");
		//	 continue;
		// }
		// else
		// {
		//	 printf("less\n");
		//	 continue;
		// }
	 //}*/
//for (j; j <= sqrt(n); j++)
//{
//	if (n % j == 0)
//	{
//		return 0;
//	}
//		return 1;
//}
//int num = 0;
//int i = 1;
//for (i = 1; i <= 3000; i++)
//{
//    num=jiayi(&num);
//}
//printf("%d\n", num);
int l;
printf("%d\n", l=strlen("abc"));
     return 0;

}