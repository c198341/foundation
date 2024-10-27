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
//void to_luoji(int* a)
//{
//	*a = ((*a)>>1)^(1<<31);
//}
//void to_suanshu(int* a)
//{
//	*a= ((*a)>>1) | (1 << 31);
//}
//int main()
//{
//	int a = -1;
//	printf("%d\n", a);
//	printf("%d\n", (a >> 1));
//	if ((a>>1) ==-1)
//	{
//		printf("ËãÊõÓÒÒÆ\n");
//		to_luoji(&a); 
//		printf("%d\n", a);
//	}
//	else
//	{
//		printf("Âß¼­ÓÒÒÆ\n");
//		to_suanshu(&a);
//		printf("%d\n", a);
//	}
//	return 0;
//}
//unsigned  int move(unsigned int value, int n)
//{
//	unsigned  int a, b;
//	if (n >= 0)
//	{
//		a = value << (32 - n);
//		b = value >> n;
//		return (a|b);
//	}
//	else
//	{
//		a = value >> (32 - (-n));
//		b = value << (-n);
//		return (a | b);
//	}
//}
//int main()
//{
//	unsigned  int value;
//	int n;
//	//printf("%d\n", sizeof(unsigned short int));
//	scanf("%u %d",&value,&n);
//	value=move(value, n);
//	printf("%u\n", value);
//	return 0;
//}
void ToFanMa(int a)
{
	int i,j=0;
	int b[32];
	if (a >= 0)
	{
		i = 31;
		for (i = 31; i >= 0; i--)
		{
			b[i] = a % 2;
			a = a / 2;
		}
		for (i = 0; i < 32; i++)
		{
			if (j % 4==0&&j!=0)
			{
				printf(" ");
				printf("%d", b[i]);
				j++;
			}
			else
			{
				printf("%d", b[i]);
				j++;
			}
		}
		printf("\n");
	}
	else
	{
		b[0] = 1;
		i = 31;
		for (i = 31; i >= 1; i--)
		{
			b[i] = a % 2;
			a = a / 2;
		}
		for (i = 1; i <= 31; i++)
		{
			if (b[i] == 0)
				b[i] = 1;
			else
				b[i] = 0;
		}
		b[31] = b[31] + 1;
		if (b[31] == 2)
		{
			for (i = 31; i >= 2; i--)
			{
				if (b[i] == 2)
				{
					b[i] = 0;
					b[i - 1] = b[i - 1] + 1;
				}
			}
		}
		if (b[1] == 2)
			b[1] = 0;
		for (i = 0; i < 32; i++)
		{
			if (j % 4 == 0 && j != 0)
			{
				printf(" ");
				printf("%d", b[i]);
				j++;
			}
			else
			{
				printf("%d", b[i]);
				j++;
			}
		}
		printf("\n");
	}
}
void ToFanMa1(int a)
{
	int i,j=0;
	if (a >= 0)
	{
		for (i = 31; i >= 0; i--)
		{
			if (j % 4 == 0 && j != 0)
			{
				printf(" ");
				printf("%d", (a >> i) &1);
				j++;
			}
		}
		printf("\n");
	}
	else
	{
		
	}
}
int main()
{
	int a;
	scanf("%d", &a);
	ToFanMa(a);
	ToFanMa1(a);
	return 0;
}