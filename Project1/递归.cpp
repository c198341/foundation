#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
//int jiecheng(int x)
//{
//	while (x > 1)
//	{
//		return x*jiecheng(x - 1);
//	}
//	return 1;
//}
<<<<<<< HEAD
//int qb(int x)
//{
//	if (x<=2)
//		return 1;
//	else
//		return qb(x - 1) + qb(x - 2);
//}
int main()
{
	///*int i=2;
	//int j;
	//j = jiecheng(i);
	//printf("%d\n", j);*/
	//int i = 50;
	//int j;
	//j = qb(i);
	//printf("%d\n", j);
	int a = 10;
	int b = 20;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d b=%d\n", a, b);
=======
int main()
{
	//int i=5;
	//int j;
	//j = jiecheng(i);
	//printf("%d\n", j);
	int i = 5;
	int a[6] = {0};
>>>>>>> 3a1332515d9ec60ed13bea5ad9feacd5961dd259
	return 0;
}