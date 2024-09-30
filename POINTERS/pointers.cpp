#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
void my_input(int* arr)
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
}
void convert(int* arr)
{
	int i = 0;
	int mix=0;
	int max =0;
	for (i = 0; i < 10; i++)
	{
		if (arr[i] < arr[mix])
			mix = i;
	}
	for (i = 0; i < 10; i++)
	{
		if (arr[i] > arr[max])
			max = i;
	}
	int tmp;
	tmp = arr[1];
	arr[1] = arr[mix];
	arr[mix] = tmp;
	tmp = arr[9];
	arr[9] = arr[max];
	arr[max] = tmp;
}
void my_output(int* arr)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[10];
	my_input(arr);
	convert(arr);
	my_output(arr);
	return 0;
}