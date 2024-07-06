#define _CRT_SECURE_NO_WARNINGS
#define NUM 5
#include <stdio.h>
#include <assert.h>
#include <math.h>
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
//int my_strlen(const char* p)
//{
//	int i = 0;
//	assert(*p !=NULL);
//	while (*p++ != '\0')
//	{
//		i++;
//	}
//	return i;
//}
//int main()
//{
//	char a[] = "\0";
//	printf("%d\n",my_strlen(a));
//	return 0;
//}
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d\n", a, b, c);
//	return 0;
//}
//void gen(double a, double b, double c)
//{
//	double genhao = b * b - 4 * a * c;
//	if (genhao < 0)
//	{
//		printf("you xu gen:\n");
//		if (b == 0)
//		{
//			printf("xu gen=0.00+%lfi,0.00-%lfi", sqrt(-genhao) / (2 * a),  sqrt(-genhao) / (2 * a));
//		}
//		else
//		{
//			printf("xu gen=%lf+%lfi,%lf-%lfi", -b / (2 * a), sqrt(-genhao) / (2 * a), -b / (2 * a), sqrt(-genhao) / (2 * a));
//		}
//	}
//	else 
//	{
//		genhao = sqrt(genhao);
//		printf("shi gen=%lf,%lf", (-b + genhao) / (2 * a), (-b - genhao) / (2 * a));
//	}
//}
//int main()
//{
//	double a, b, c;
//	do
//	{
//		printf("input:\n");
//		scanf("%lf%lf%lf", &a, &b, &c);
//	} while (a == 0);
//	gen(a, b, c);
//	return 0;
//}
//int main()
//{
//	char c1 = 'C', c2 = 'h', c3 = 'i', c4 = 'n', c5 = 'a';
//	c1 = c1 + 4;
//	c2 = c2 + 4;
//	c3 = c3 + 4;
//	c4 = c4 + 4;
//	c5 = c5 + 4;
//	printf("%c%c%c%c%c\n", c1, c2, c3, c4, c5);
//	return 0;
//}
//int main()
//{
//	printf("%5.3s\n", "COMPUTER");
//	return 0;
//}
//int main()
//{
//	float x, y;
//	scanf(" %f %e", &x, &y);
//	printf("%f %f", x, y);
//	return 0;
//}
//int main()
//{
//	float r, h;
//	float pai = 3.141;
//	scanf("%f %f", &r, &h);
//	printf("%.2f//zhou chang\n", 2 * pai * r);
//	printf("%.2f//yuan mian ji\n", pai * r*r);
//	printf("%.2f//圆球表面积\n", 4 * pai * r*r);
//	printf("%.2f//圆球体积\n", 4 * pai * r*r*r/3);
//	printf("%.2f//圆柱体积\n", pai * r*r*h);
//}
//int main()
//{
//	float f=0, c;
//	scanf("%f", &f);
//	c = 5 * (f - 32) / 9;
//	printf("%.2f//c shi she shi du\n", c);
//}
//int main()
//{
//	char c1, c2;
//	c1 = getchar();
//	c2 = getchar();
//	putchar(c1);
//	putchar(c2);
//	printf("%c\n", c2);
//	return 0;
//}
//int main()
//{
//	float x;
//	scanf("%f", &x);
//	if (x < 1)
//		printf("%f\n", x);
//	if (x >= 1 && x < 10)
//		printf("%f\n", 2.0 * x - 1.0);
//	if (x >= 10)
//		printf("%f\n", 3.0 * x - 11.0);
//	return 0;
//}
//int main()
//{
//	unsigned int i;
//	int j = 0,k=0;
//	scanf("%d", &i);
//	while (i > 99999 || i<=0)
//	{
//		printf("不是五位正整数\n");
//		scanf("%d", &i);
//	}
//	if (i / 10000 != 0)
//	{
//		printf("5 wei\n");
//		j = 5;
//	}
//	else if (i / 1000 != 0)
//	{
//		printf("4 wei\n");
//		j = 4;
//	}
//	else if (i / 100 != 0)
//	{
//		printf("3 wei\n");
//		j = 3;
//	}
//	else if (i / 10 != 0)
//	{
//		printf("2 wei\n");
//		j = 2;
//	}
//	else
//	{
//		printf("1 wei\n");
//		j = 1;
//	}
//	for (k = 0; k < j; k++)
//	{
//		printf("%d ", i % 10);
//		i = i / 10;
//	}
//	return 0;
//}
int main()
{
	//i<=100000,0.1*i
	//100000<i<=200000,0.1*100000+(i-100000)*7.5%
	//200000<i<=400000,0.1*100000+(i-100000)*7.5%+(i-200000)*0.05+
	float i = 0;
	scnaf("%f", &i);
	if (i <= 100000.0)
		printf("bonus is %f\n", 0.1 * i);
	if
}