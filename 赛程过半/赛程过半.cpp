#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
void rarr(char* arr, int sz)
{
	assert(arr);
	char* a = arr + sz - 1;
	char tmp;
	while (arr <= a)
	{
		tmp = *a;
		*a = *arr;
		*arr = tmp;
		arr++;
		a--;
	}
}
int main()
{
	char arr[10] = { 0 };
	scanf("%s", arr);
	int sz = strlen(arr);
	rarr(arr, sz);
	printf("%s\n", arr);
	return 0;
}