#define _CRT_SECURE_NO_WARNINGS
#pragma warning (once:4996)
#pragma warning (once:6031)
//#define MAX 10
#include <stdio.h>
//int main()
//{
//	//寻找单身狗
//	int dogs[MAX] = { 1,2,3,4,7,1,2,3,4,6 };
//	int dog_0[MAX], dog_1[MAX];
//	int i = 0;
//	int j = 0, k = 0;
//	for (i = 0; i < MAX; i++)
//	{
//		if ((dogs[i] & 1) == 0)
//			dog_1[j++] = dogs[i];
//		else
//			dog_0[k++] = dogs[i];
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ",dog_1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < k; i++)
//	{
//		printf("%d ", dog_0[i]);
//	}
//	printf("\n");
//	int a=dog_1[0];
//	for (i = 1; i < j; i++)
//	{
//		a= a^ dog_1[i];
//	}
//	printf("%d\n", a);
//	a= dog_0[0];
//	for (i = 1; i < k; i++)
//	{
//		a = a ^ dog_0[i];
//	}
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	char c;	
//	scanf("%c", &c);
//	while(c!='!')
//	{
//		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
//		{
//			if (c>='A'&&c <= 'M' ||c>='a'&& c <='m')
//				printf("%c", c + 13);
//			else
//				printf("%c", c - 13);
//		}
//		else
//			printf("%c", c);
//		scanf("%c", &c);
//	}
//	return 0;
//}
//unsigned int reverse_bits(unsigned int value)
//{
//	void* p=0;
//	int i = sizeof(p)*8;
//	printf("i=%d\n", i);
//	int j;
//	unsigned int a=0;
//	unsigned int b=0;
//	for (j = 1; j <= i; j++)
//	{
//		a = (value>>(j-1))& 1;
//		a=a << (i - j);
//		b = a + b;
//	}
//	return b;
//}
//int main()
//{
//	unsigned int a;
//	scanf("%d", &a);
//	a=reverse_bits(a);
//	printf("a=%u\n", a);
//	return 0;
//}
void IntBit_array(char bit_array[])
{

}
//每个函数第1个参数，用于存储所有的位
//第2个参数，标识需要访问的位
void set_bit(char bit_array[], unsigned bit_number)
//第1个函数把指定的位设置为1
{

}
void clear_bit(char bit_array[],unsigned bit_number)
void 
int main()
{
	char bit_array[8] = { 0 };
	printf("intitial bit_array\n");
	IntBit_array(bit_array);
}