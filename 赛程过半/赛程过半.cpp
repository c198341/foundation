#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
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
int main()
{
	int i = 0;
	int j = i;
	int n = 0;
	int a[6];
	for (i = 0; i <= 100000; i++)
	{
		j = i;
		n = 0;
		while (n != 6)
		{
			a[n] = (j% 10)*(j % 10)*(j % 10);
			j = j / 10;
			n++;
		}
		if (a[0] + a[1] + a[2] + a[3] + a[4] + a[5] == i)
			printf("%d ", i);
	}
	return 0;
}