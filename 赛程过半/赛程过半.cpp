#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>
//void rarr(char* arr, int sz)
//{
//	assert(arr);
//	char* a = arr + sz - 1;
//	char tmp;
//	while (arr <= a)
//	{
//		tmp = *a;
//		*a = *arr;
//		*arr = tmp;
//		arr++;
//		a--;
//	}
//}
//int main()
//{
//	char arr[10] = { 0 };
//	scanf("%s", arr);
//	int sz = strlen(arr);
//	rarr(arr, sz);
//	printf("%s\n", arr);
//	return 0;
//}
//int a(int i,int n)
//{
//	int j = 0;
//	int sum = 0;
//	int ret = 0;
//	for(j=0;j<n;j++)
//	{
//		ret=ret*10+i;
//		//printf("%d\n", a[j]);
//		sum = sum + ret;
//	}
//	return (sum);
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d %d", &i,&n);
//	printf("%d\n", a(i,n));
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = i;
//	int n = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		j = i;
//		n = 1;
//		while ((j / 10) != 0)
//		{
//			j = j / 10;
//			n++;
//		}
//		int sum = 0;
//		j = i;
//		while ((j) != 0)
//		{	
//			sum=sum+ pow((j % 10), n);
//			j = j / 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i, j,k;
//	int line = 0;
//	scanf("%d", &line);
//	for (i = 1; i <= line; i++)
//	{
//		for (j = 1; j <=(line-i) ; j++)
//		{
//			printf(" ");
//		}
//		for (k = 1; k <= (2*i-1); k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 1; i <= line-1; i++)
//	{
//		for (j =1; j <=  i; j++)
//		{
//			printf(" ");
//		}
//		for (k = 1; k <= line*2-1-2*i; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
////}
//int main()
//{
//	int i;
//	int sum = 0;
//	scanf("%d", &i);
//	sum = 2 * i - 1;
//	printf("%d\n", sum);
//	return 0;
//}
int xb(int a[], int sz,int i)
{
		while (i<sz)
		{
			sz--;
			if (a[sz] % 2 != 0)
			{
				return sz;
			}
		}
}
int main()
{
	int i, k,right;
	int a[] = {1,3,45,79,1};
	int sz = sizeof(a)/sizeof(a[0]);
	for (i = 0; i < sz-1; i++)
	{
		if (a[i] % 2 == 0)
		{
			right=xb(a, sz,i);
			k = a[right];
			a[right] = a[i];
			a[i] = k;
		}
	}
	for (i = 0; i < sz; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}