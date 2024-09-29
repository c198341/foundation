#define _CRT_SECURE_NO_WARNINGS;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int* cmp_by_int(const void* e1, const void* e2)
{
	
}
int main()
{
	int i=0;
	int arr[3];
	for (i = 0; i < 3; i++)
	{
		scanf("%d", arr[i]);
	}
	qsort(arr,sizeof(arr),sizeof(arr[0]),cmp_by_int);
	for (i = 0; i < 3; i++)
		printf("%d ",arr[i]);
	printf("\n");
	return 0;
}