#define _CRT_SECURE_NO_WARNINGS
#define NUM 5
#include <stdio.h>
#include <assert.h>
//void print_table(int i)
//{
//	int j = 0;
//	int row = 0;
//	for (j = 1; j <= i; j++)
//	{
//		for (row = 1; row <= j; row++)
//		{
//			printf("%-d*%-d=%-3d ", row, j, row * j);
//		}
//		printf("\n");
//	}
//		
//}
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
//void print(int* pa)
//{
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%d ", *(pa + i));
//	}
//}
//int main()
//{
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
 //   int arr[6] = { 1,2,3,4,5 ,5};
	//int* pa = &arr[0];
	//print(pa);
	//printf("\n");
//    int i = 0;
//	scanf("%d", &i);
//	print_table(i);
//	return 0;
//}
//void print_a(int i)
//{
//	if (i < 0)
//		i = i * (-1);
//	if (i / 10== 0)
//	{
//		printf("%d ", i % 10); 
//	}
//	else
//	{
//		print_a(i / 10);
//		printf("%d ", i % 10);
//	}
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	print_a(i);
//	return 0;
////}
//void reverse_string(char* string)
//{
	//if (*string=='\0')
	//{
	//	printf("after reverse:"); 
	//}
	//else
	//{
	//	reverse_string((string+1));
	//	printf("%c ", *string);
	//}
	//int i = 0;
	//char tmp = 'a';
	//while ((*string) != '\0')
	//{
	//		i++;
	//		string++;
	//} 
	//string = string - i;
	//if ((*string) != '\0')
	//{
	//	tmp = *string;
	//	*string = *(string + i - 1);
	//	*(string + i - 1) ='\0';
	//	reverse_string(string + 1);
	//	*(string + i - 1) = tmp;
	//}
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//int digitsum(int i)
//{
//	if (i / 10 == 0)
//	{
//		return i % 10;
//	}
//	else
//	{
//		return digitsum(i/10)+i%10;
//	}
//}
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	scanf("%d", &i);
//	sum=digitsum(i);
//	printf("sum=%d\n", sum);
//}
//double fang(int n,int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k < 0)
//	{
//		return 1 / (fang(n, (-k-1)) * n);
//	}
//	if (k == 1)
//		return n;
//	else
//	{
//		return fang(n, k-1)*n;
//	}
//}
//int main()
//{
//	int n,k;
//	scanf("%d %d", &n,&k);
//	double s=fang(n,k);
//	printf("%lf\n", s);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	printf("%p\n", &i);
//	printf("%p\n", &arr);
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
//void my_strcpy(char* dest, char* src)
//{
//	assert (dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = "bit";
//	my_strcpy(arr1, NULL);
//	printf("%s", arr1);
//	return 0;
//}
int my_strlen(const char* p)
{
	int i = 0;
	assert(*p !=NULL);
	while (*p++ != '\0')
	{
		i++;
	}
	return i;
}
int main()
{
	char a[] = "\0";
	printf("%d\n",my_strlen(a));
	return 0;
}