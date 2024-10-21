#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
//int main()
//{
//	int* p = (int*)malloc(10000 * sizeof(int));
//	if (p == NULL)
//		printf("%s\n", strerror(errno));
//	free(p);
//	p = NULL;
//	return 0;
//}
char* GetMemory(char* p)
{
	p = (char*)malloc(100);
	return p;
}
void Test(void)
{
	char* str = NULL;
	str=GetMemory(str);
	strcpy(str, "hello world");
	printf(str);
	free(str);
	str = NULL;
}
int main()
{
	Test();
	return 0;
}