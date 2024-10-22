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
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str=GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}
//struct stu
//{
//	int n;
//	int arr[0];
//};
//int main()
//{
//	struct stu s = {1,0};
//	return 0;
//}
//char* new(int n)
//{
//	return malloc(n);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	char* p= new(n);
//	free(p);
//	p = NULL;
//	return 0;
//}
void bin(int value)
{

}
void getbits(int value, int n1, int n2)
{

}
int main()
{
	int value,n1,n2;
	scanf("%o", &value);
	bin(value);
	scanf("%d %d", &n1, &n2);
	getbits(value, n1, n2);
	return 0;
}