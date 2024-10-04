#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//int cmp_by_int(const void* p1, const void* p2)
//{
//	return ((*(int*)p1>*(int*)p2)?1:0);
//}
//int cmp_by_char(const void* p1, const void* p2)
//{
//	return (strcmp((char*)p1, (char*)p2));
//}
//int main()
//{
//	int i=0;
//	//int arr[3];
//	char arr[3][10];
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%s", &arr[i]);
//	}
//	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmp_by_char);
//	//qsort(arr,sizeof(arr)/sizeof(arr[0]),sizeof(arr[0]),cmp_by_int);
//	for (i = 0; i < 3; i++)
//		printf("%s\n",&arr[i]);
//	printf("\n");
//	return 0;
//}
//void my_input(int* arr)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//}
//void convert(int* arr)
//{
//	int i = 0;
//	int mix=0;
//	int max =0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[mix] > arr[i])
//			mix = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > arr[max])
//			max = i;
//	}
//	int tmp;
//	tmp = arr[0];
//	arr[0] = arr[mix];
//	arr[mix] = tmp;
//	tmp = arr[9];
//	arr[9] = arr[max];
//	arr[max] = tmp;
//}
//void my_output(int* arr)
//{
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[10];
//	my_input(arr);
//	convert(arr);
//	my_output(arr);
//	return 0;
//}
//void move(int* arr, int n, int m)
//{
//	int tmp[10];
//	int i = 0;
//	for (i = 0; i < m; i++)
//	{
//		tmp[i] = arr[n - m + i];
//	}
//	for (i = 0; i < (n - m); i++)
//	{
//		arr[n - 1 - i] = arr[n - m -1- i];
//	}
//	for (i = 0; i < m; i++)
//	{
//		arr[i] = tmp[i];
//	}
//}
//int main()
//{
//	int arr[10];
//	int n = 0;
//	int m = 0;
//	printf("input n:");
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &(arr[i]));
//	}
//	printf("input m:");
//	scanf("%d", &m);
//	move(arr, n, m);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int findlast(int* peoplenum, int n)
//{
//	int totalnum = n;//总人数
//	int restnum = n;//剩余人数
//	int count=0;//报数
//	int* ppeoplenum = peoplenum;
//	while(restnum!=1)
//	{
//		ppeoplenum = peoplenum;
//		while (ppeoplenum < peoplenum + totalnum)
//		{
//			if (*ppeoplenum != 0)
//			{
//				count++;
//				if (count == 3)
//				{
//					restnum--;
//					*ppeoplenum = 0;
//					count = 0;
//				}
//				ppeoplenum++;
//			}
//			else
//				ppeoplenum++;
//		}
//	}
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		if(peoplenum[i]!=0)
//			return peoplenum[i];
//	}
//}
//int main()
//{
//	int peoplenum[100];
//	int i;
//	int n;
//	printf("input n:");
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		peoplenum[i] = i + 1;
//	}
//	int position=findlast(peoplenum, n);
//	printf("is %d", position);
//	return 0;
////}
//int my_strlen(char* arr)
//{
//	return strlen(arr);
//}
//int main()
//{
//	char arr[] = "ab56654654vc";
//	int length=my_strlen(arr);
//	printf("%d\n", length);
//	return 0;
//}
//
//void my_count(char* arr, int length, int* up, int* low, int* bs, int* num, int* qita)
//{
//	int i = 0;
//	for (i = 0; i < length; i++)
//	{
//		if (isupper(*(arr + i)))
//			(*up)++;
//		else if (islower(*(arr + i)))
//			(*low)++;
//		else if (isspace(*(arr + i)))
//			(*bs)++;
//		else if (isdigit(*(arr + i)))
//			(*num)++;
//		else
//			(*qita)++;
//
//	}
//}
//int main()
//{
//	char arr[10] = {0};
//	gets_s(arr);
//	int up = 0;
//	int low = 0;
//	int bs = 0;
//	int num = 0;
//	int qita = 0;
//	my_count(arr, strlen(arr),&up, &low, &bs, &num, &qita);
//	printf("%d %d %d %d %d", up, low, bs, num, qita);
//	return 0;
//}
//void convert(int arr[][3])
//{
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			int tmp = arr[i][j];
//			arr[i][j] = arr[j][i];
//			arr[j][i] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[3][3];
//	int i,j,n;
//	n = 5;
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 3; j++)
//			arr[i][j] = n++;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	convert(arr);
//	printf("after convert:\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
int main()
{

}