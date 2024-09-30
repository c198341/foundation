#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//int cmp_by_int(const void* p1, const void* p2)
//{
//	return ((*(int*)p1>*(int*)p2)?1:0);
//}
int cmp_by_char(const void* p1, const void* p2)
{
	return (strcmp((char*)p1, (char*)p2));
}
int main()
{
	int i=0;
	//int arr[3];
	char arr[3];
	for (i = 0; i < 3; i++)
	{
		scanf("%s", &arr[i]);
	}
	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmp_by_char);
	//qsort(arr,sizeof(arr)/sizeof(arr[0]),sizeof(arr[0]),cmp_by_int);
	for (i = 0; i < 3; i++)
		printf("%s\n",arr[i]);
	printf("\n");
	return 0;
}