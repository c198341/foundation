#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
int main()
{
	int* p = (int*)malloc(10000 * sizeof(int));
	if (p == NULL)
		printf("%s\n", strerror(errno));
	free(p);
	p = NULL;
	return 0;
}