#define _CRT_SECURE_NO_WARNINGS
#pragma warning (once:4996)
#pragma warning (once:6031)
//#define MAX 10
#include <stdio.h>
//int main()
//{
//	//Ѱ�ҵ���
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
#define MAX 8
void bit_print(char bit_array[])
{
	int i = 0;
	for (i = 0; i < MAX; i++)
	{
		printf("%c ",bit_array[i]);
	}
	printf("\n");
}
void IntBit_array(char bit_array[])
{
	int i = 0;
	char c;
	for (i = 0; i < MAX; i++)
	{
		bit_array[i] = getchar();
		c=getchar();
	}
	bit_print(bit_array);
}
//ÿ��������1�����������ڴ洢���е�λ
//��2����������ʶ��Ҫ���ʵ�λ
void set_bit(char bit_array[], unsigned bit_number)
//��1��������ָ����λ����Ϊ1
{

}
void clear_bit(char bit_array[], unsigned bit_number)
//��ָ��λ����
{
	
}
void assign_bit(char bit_array[], unsigned bit_number, int value)
//���value��ֵΪ0����3��������ָ��λ���㣬��������Ϊ1
{
	if (value == 0)
		bit_array[bit_number - 1] = '0';
	else
		bit_array[bit_number - 1] = '1';
	printf("after assign:\n");
	bit_print(bit_array);
}
int test_bit(char bit_array[], unsigned bit_number)
//���������ָ����λ����0�����������棬���򷵻ؼ�
{
	if (bit_array[bit_number/MAX]&(1<<) != '0')
		return 1;
	else
		return 0;
}

int main()
{
	char bit_array[MAX] = { 0 };
	printf("intitial bit_array:\n");
	IntBit_array(bit_array);
}