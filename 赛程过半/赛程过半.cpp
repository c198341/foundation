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
//int xb(int a[], int sz,int i)
//{
//		while (i<sz)
//		{
//			sz--;
//			if (a[sz] % 2 != 0)
//			{
//				return sz;
//			}
//		}
//}
//int main()
//{
//	int i, k,right;
//	int a[] = {1,3,45,79,1};
//	int sz = sizeof(a)/sizeof(a[0]);
//	for (i = 0; i < sz-1; i++)
//	{
//		if (a[i] % 2 == 0)
//		{
//			right=xb(a, sz,i);
//			k = a[right];
//			a[right] = a[i];
//			a[i] = k;
//		}
//	}
//	for (i = 0; i < sz; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//	return 0;
//}
//int main()
//{
//	int i, j,k;
//	int a[50][50] = {1};
//	scanf("%d", &k);
//	for (i = 0; i < k; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0 || j == i)
//			{
//				a[i][j] = 1;
//				printf(" %5d ", a[i][j]);
//			}
//			else
//			{
//				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//				printf(" %5d ", a[i][j]);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int k = 0;
//	for (k = 'a'; k <= 'd'; k++)
//	{
//		if ((k != 'a') + (k == 'c') + (k == 'd') + (k != 'd') == 3)
//			printf("killer=%c\n", k);
//	}
//	return 0;
//}
//int main()
//{
//	int a, b, c, d, e;
//	for (a = 1; a < 6; a++)
//		for (b = 1; b < 6; b++)
//			for (c = 1; c < 6; c++)
//				for (d = 1; d < 6; d++)
//					for (e = 1; e < 6; e++)
//						if (((b == 2)+ (a == 3)==1) &&((b == 2)+( e == 4)==1) &&((c == 1)+( d == 2)==1)&& ((c == 5)+( d == 3) ==1)&& ((e == 4)+( a == 1) == 1)&&(a*b*c*d*e==120))
//							printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
//	return 0;
//}
//int main()
//{
//	char *arr[] = { "aaaa","dddd","cccc","bbbb" };
//
//	return 0;
//}
//int leftrev(char s1[],char s2[],int length)
//{
//	assert(s2);
//	char arr1[10] = {"\0"};
//	char arr2[10] = { "\0" };
//	int i = 0;
//	int length1 = 0;
//	for (length1 = 0; length1 < length; length1++)
//	{
//		while (i <= length1)
//		{
//			arr2[i] = s1[i];
//			i++;
//		}
//		i = 0;
//		while (*(s1 + length1 + i) != '\0')
//		{
//			*(arr1 + i) = *(s1 + length1 + i);
//			i++;
//		}
//		i = 0;
//		while (*(arr1 + length - length1 + i) != '\0')
//		{
//			*(arr1 + length - length1 + i) = arr2[i];
//			i++;
//		}
//		if (!strcmp(arr1, s2))
//			return 1;
//	}
//	return 0;
//}
//int rightrev(char s1[], char s2[], int length)
//{
//	char tmp;
//	char arr1[10] = {"\0"};
//	char arr2[10] = { "\0" };
//	int i=0;
//	int length1 = 0;
//	for (i = 0; i < length; i++)
//	{
//		{
//			tmp = s1[length - 1];
//			for (length1 = 0; length1 < i; i++)
//			{
//				arr1[length - 1 - i] = s1[length - 2 - i];
//			}
//			arr1[i] = tmp;
//		}
//		if (!strcmp(s2, arr1))
//			return 1;
//	} 
//	return 0;
//}
//int another(char* s1, char* s2)
//{
//	int i = strlen(s1);
//	int j = 0;
//	int ret = 1;
//	int z = 0;
//	for (j = 0; j < i; j++)
//	{
//		s1[j + i] = s1[j];
//	}
//	for (j = 0; j < i; j++)
//	{
//		ret = 1;
//		for (z = 0; z < i; z++)
//		{
//			if (s1[j + z] != s2[z])
//			{
//				ret = 0;
//				ret = ret * 1;
//			}
//		}
//		if (ret == 1)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char s1[20] = "abcdef";
//	char s2[20] = "efab";
//	assert(strlen(s1)==strlen(s2));
//	//int length = strlen(s1);
//	if (another(s1,s2)==1)//&&rightrev(s1,s2,length))
//		printf("is rev\n");
//	else
//		printf("is not rev\n");
//	return 0;
//}
int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int n = 7;
	int i,left,right;
	for (i = 0; i < 3; i++)
	{
		left =0;
		right = 2;
		while (left <= right)
		{
			if (arr[i][((left+right)/2+1)] == n)
				printf("got\n");
			else if (arr[i][(left + right) / 2 + 1] > n)
			{
				right = (left + right)/2+1;
			}
			else
				left = (left + right) / 2 + 1;
		}
	}
	return 0;
}