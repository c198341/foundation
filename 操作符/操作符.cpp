#define _CRT_SECURE_NO_WARNINGS
#pragma warning (once:4996)
#pragma warning (once:6031)
//#define MAX 10
#include <stdio.h>
#include <stdlib.h>
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
//#define MAX 8
//unsigned character_offset(unsigned bit_number)
//{
//	return bit_number / MAX;
//}
//unsigned bit_offset(unsigned bit_number)
//{
//	return bit_number % MAX;
//}
//void bit_print(char bit_array[])
//{
//	int i = 0;
//	for (i = 0; i < MAX; i++)
//	{
//		printf("%c ",bit_array[i]);
//	}
//	printf("\n");
//}
////每个函数第1个参数，用于存储所有的位
////第2个参数，标识需要访问的位
//void set_bit(char bit_array[], unsigned bit_number)
////第1个函数把指定的位设置为1
//{
//	bit_array[character_offset(bit_number)] |= 1 << bit_offset(bit_number);
//}
//void clear_bit(char bit_array[], unsigned bit_number)
////把指定位清零
//{
//	bit_array[character_offset(bit_number)] &= ~(1 << bit_offset(bit_number));
//}
//void assign_bit(char bit_array[], unsigned bit_number, int value)
////如果value的值为0，第3个函数把指定位清零，否则设置为1
//{
//	if (value != 0)
//		set_bit(bit_array, bit_number);
//	else
//		clear_bit(bit_array, bit_number);
//	printf("after assign:\n");
//	bit_print(bit_array);
//}
//int test_bit(char bit_array[], unsigned bit_number)
////如果参数中指定的位不是0，函数返回真，否则返回假
//{
//	if((bit_array[character_offset(bit_number)]&(1<<bit_offset(bit_number)))!= 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	char bit_array[MAX] = { '0' };
//	int value;
//	unsigned bit_number;
//	printf("input bit_number:\n");
//	scanf("%u", &bit_number);
//	value=test_bit(bit_array, bit_number);
//	assign_bit(bit_array, bit_number, value);
//}
char* my_calloc(size_t n_elements, size_t element_size)
{
	char* new_memory;
	n_elements *= element_size;
	new_memory=(char*)malloc(n_elements);
	if (new_memory != NULL)
	{
		char* ptr;
		ptr =new_memory;
		while (--n_elements >= 0)
		{
			*ptr++ = '\0';
		}	
	}
	return new_memory;
}
int main()
{
	size_t num_elements;
	size_t element_size;
	scanf("%u %u", &num_elements, &element_size);
	char* p=my_calloc(num_elements, element_size);
	return 0;
}