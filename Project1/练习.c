#define _CRT_SECURE_NO_WARNINGS
#define NUM 5
#include <stdio.h>
//struct stu
//{
//	char name[20];
//	int age;
//	char id[10];
//};
//void reverse(int arr[10],int mount)
//{
//	int i = 0;
//	int j = mount-1;
//	int count = 0;
//	int r= 0;
//	for (count = 0; count <mount / 2;count++ )
//	{
//		r = arr[i];
//		arr[i] = arr[j];
//		arr[j] = r;
//		i++;
//		j--;
//	}
//}
void print(int* pa)
{
	int i = 0;
	for (i = 0; i < 6; i++)
	{
		printf("%d ", *(pa + i));
	}
}
int main()
{
	///*int num=-1;
	//int count = 0;
	//while (num)
	//{
	//	if (num % 2 == 1)
	//	{
	//		count++;
	//	}
	//	num = num / 2;
	//}
	//printf("%d\n", count);*/
	///*int num =15;
	//int i = 0;
	//int j = 0;
	//for (i = 0; i < 32; i++)
	//{
	//	if (1 == (num & 1) % 2)
	//	{
	//		j++;
	//	}
	//	num = num >> 1;
	//}
	//printf("%d", j);*/
	///*struct stu s1 = { "zhang",20,"20240110" };
	//struct stu* ps = &s1;
	//printf("%s\n", s1.name);
	//printf("%d\n", s1.age);
	//printf("%s\n", s1.id);
	//printf("%s\n", (*ps).name);
	//printf("%d\n", (*ps).age);
	//printf("%s\n", (*ps).id);
	//printf("%s\n", ps->name);*/
	///*int a[3] = {1,2,100};
	//int* pa = &a[0];
	//int* ceshi = NULL;
	//int** ppa = &pa;
	//printf("%d\n", **ppa);
	//ceshi= &a[2];
	//**ppa = *ceshi;
	//printf("%d\n", *pa);*/
	///*int c = 1;
	//int b = c + --c;
	//printf("%d", b);*/
	//int a =0x11223344;
	//int* pa = &a;
	//*pa = 0;
	//int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	//int i = 0;
	//int mount = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ", arr[i]);
	//}
	//printf("\n");
	//mount = sizeof(arr) / sizeof(arr[0]);
	//reverse(arr,mount);
	//for (i = 0; i < mount; i++)
	//{
	//	printf("%d ", arr[i]);
	////}
	//int a[NUM] = { 1,2,3,4,5 };
	//int b[NUM] = { 6,7,8,9,10 };
	//int i = 0;
	//int tmp = 0;
	//for (i = 0; i < NUM; i++)
	//{
	//	tmp = a[i];
	//	a[i] = b[i];
	//	b[i] = tmp;
	//}
	//for (i = 0; i < NUM; i++)
	//	printf("%d ", a[i]);
	//printf("\n");
	//for (i = 0; i < NUM; i++)
	//	printf("%d ", b[i]);
	//int i = 1999;
	//int j = 2299;
	//int c =i^j;
	//int count = 0;
	//int num = 0;
	//for (count = 0; count < 32; count++)
	//{
	//	if (c % 2 == 1)
	//	{
	//		num++;
	//	}
	//	c=c >> 1;
	//}
	//printf("num=%d\n", num);
	//int i = 13;
	//int j = 0;
	//int num = 0;
	////scanf("%d", &i);
	//for (j = 0; j < 32; j++)
	//{
	//	if ((unsigned)i % 2 == 1)
	//		num++;
	//	i = i >> 1;
	//}
	//printf("num=%d\n", num);
 //   /*int i = 1;
	//unsigned int j;
	//scanf("%d", &j);
	//for (i = 1; i <= 32; i=i+2)
	//{
	//	printf("%d ", (j>>(i-1)) % 2);
	//}
	//printf("\n");
	//for (i = 2; i <= 32; i = i + 2)
	//{
	//	printf("%d ", (j >> (i - 1)) % 2);
	//}
	//printf("\n");*/
    int arr[6] = { 1,2,3,4,5 ,5};
	int* pa = &arr[0];
	print(pa);
	printf("\n");
	return 0;
}