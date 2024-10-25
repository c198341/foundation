#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <math.h>
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
//void getbits(int value, int n1, int n2)
//{
//	if(n1<=n2)
//		printf("%o\n", (value >> (n1)) & (~(~0 << (n2 - n1 + 1))));
//}
//int main()
//{
//	unsigned int value;
//	int n1,n2;
//	scanf("%o", &value);
//	scanf("%d %d", &n1, &n2);
//	getbits(value, n1, n2);
//	return 0;
//}
//unsigned int getodds(unsigned int v)
//{
//	unsigned int result=0, i,a,b;
//	for (i = 0; i < 8; i++)
//	{
//		a= 1<<(1+2*i);
//		b = a & v;
//		result = result + (b>>(1+i));
//	}
//	return result;
//}
//int main()
//{
//	unsigned int v;
//	scanf("%o", &v);
//	v=getodds(v);
//	printf("%o\n", v);//https://blog.csdn.net/weixin_30673611/article/details/95099538?ops_request_misc=&request_id=&biz_id=102&utm_term=%E7%BC%96%E5%86%99%E4%B8%80%E4%B8%AA%E5%87%BD%E6%95%B0%EF%BC%8C%E5%AF%B9%E4%B8%80%E4%B8%AA16%E4%BD%8D%E7%9A%84%E4%BA%8C%E8%BF%9B%E5%88%B6%E6%95%B0%E5%8F%96%E5%87%BA%E5%AE%83%E7%9A%84%E5%A5%87%E6%95%B0%E4%BD%8D&utm_medium=distribute.pc_search_result.none-task-blog-2~all~sobaiduweb~default-0-95099538.142^v100^pc_search_result_base7&spm=1018.2226.3001.4187
//	return 0;
//}

int main()
{
	signed int a = -1;
	if (((a >> 15) & 1) == 1)
	{
		printf("À„ ı”““∆\n");
		to_luoji(a);
	}
	else
	{
		printf("¬ﬂº≠”““∆\n");
		to_suanshu(a);
	}
	return 0;
}