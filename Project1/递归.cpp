#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
int jiecheng(int x)
{
	while (x > 1)
	{
		return x*jiecheng(x - 1);
	}
	return 1;
}
int main()
{
	int i=1;
	int j;
	j = jiecheng(i);
	printf("%d\n", j);
	return 0;
}