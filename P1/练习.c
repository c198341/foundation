#define _CRT_SECURE_NO_WARNINGS
#define NUM 5
#include <stdio.h>
#include <assert.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
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
//int main()
//{
//	//i<=100000,0.1*i
//	//100000<i<=200000,0.1*100000+(i-100000)*7.5%
//	//200000<i<=400000,0.1*100000+(i-100000)*7.5%+(i-200000)*0.05+
//	float i = 0;
//	scanf("%f", &i);
//	if (i <= 100000.0)
//		printf("bonus is %f\n", 0.1 * i);
//	if (i > 100000 && i <= 200000)
//		printf("bonus is %f\n", 0.1 * 100000 + (i - 100000.0) * 0.075);
//	if(i>200000&&i<=400000)
//		printf("bonus is %f\n", 0.1 * 100000 + 100000 * 0.075+(i-200000.0)*0.05);
//	if (i > 400000 && i <= 600000)
//		printf("bonus is %f\n", 0.1 * 100000 + 100000 * 0.075 + 200000* 0.05+(i-400000.0)*0.03);
//	if (i > 600000 && i <= 1000000)
//		printf("bonus is %f\n", 0.1 * 100000 + 100000 * 0.075 + 200000 * 0.05+200000*0.03+(i-600000.0)*0.015);
//	if (i > 1000000)
//		printf("bonus is %f\n", 0.1 * 100000 + 100000 * 0.075 + 200000 * 0.05 + 200000*0.03+400000*0.015+(i-1000000.0)*0.01);
//	return 0;
////}
//int main()
//{
//	double bonus=0, b1, b2, b4, b6, b10;
//	double i;
//	int c;
//	b1 = 0.1 * 100000;
//	b2 = b1 + 100000 * 0.075;
//	b4 = b2 + 200000 * 0.05;
//	b6 = b4 + 200000 * 0.03;
//	b10 = b6 + 400000 * 0.015;
//	scanf("%lf", &i);
//	c = i / 100000.0;
//	if (c>10)
//		c = 10;
//	switch (c)
//	{
//	case 0:bonus = i * 0.1; break;
//	case 1:bonus = b1 + (i - 100000.0) * 0.075; break;
//	case 2:
//	case 3:bonus = b2 + (i - 200000.0) * 0.05; break;
//	case 4:
//	case 5:bonus = b4 + (i - 400000.0) * 0.03; break;
//	case 6:
//	case 7:
//	case 8:
//	case 9:bonus = b6 + (i - 600000.0) * 0.015; break;
//	case 10:bonus = b10 + (i - 1000000.0) * 0.01;
//	}
//	printf("bonus is %.2lf", bonus);
//	return 0;
//}
//int main()
//{
//	int arr[4];
//	int i,j,k;
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for(j=0;j<3;j++)
//		for (i =j+1; i < 4; i++)
//		{
//			if (arr[j] > arr[i])
//			{
//				k = arr[j];
//				arr[j] = arr[i];
//				arr[i] = k;
//			}
//		}
//	for (i = 0; i < 4; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//int main()
//{
//	float x, y;
//	double r;
//	scanf("%f%f", &x, &y);
//	x = fabs(x);
//	y = fabs(y);
//	r = sqrt((x - 2.0) * (x - 2.0) + (y - 2.0) * (y - 2.0));
//	if (r <= 1.0)
//		printf("10m\n");
//	else
//		printf("0m\n");
//	return 0;
//}
//int main()
//{
//	int a=0, b=0;
//	int k = 0,i=0,j=0;
//	while (a == 0 || b == 0)
//	{
//		scanf("%d%d", & a, &b);
//	}
//	if (a > b)
//	{
//		k = a;
//		a = b;
//		b = k;
//	}
//	k = 1;
//	while (k <= a)
//	{
//		if (a % k == 0 && b % k == 0)
//			i = k;
//		k++;
//	}
//	j = a *( b / i);
//	printf("最大公约数为%d，最小公倍数为%d\n", i, j);
//	return 0;
//}
//int main()
//{
//	char arr[] = "t 1 \t";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0,zm=0,kg=0,sx=0,qt=0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == '\0')
//			break;
//		else if(arr[i] >= 'A' && arr[i] <= 'z')
//			zm++;
//		else if (arr[i] == ' ')
//			kg++;
//		else if (arr[i] >= '1' && arr[i] <= '9')
//			sx++;
//		else
//			qt++;
//	}
//	printf("zi mu:%d\nkong ge:%d\nshu zi:%d\nqi ta:%d\n",zm,kg,sx,qt);
//}
//int main()
//{
//	int n,i,a,k;
//	long sn=0;
//	scanf("%d%d", &n,&a);
//	if (n == 1)
//		sn = a;
//	else
//	{
//		sn = a;
//		k = a;
//		for (i = 1; i < n; i++)
//		{
//			a = a * 10 + k;	
//			sn = sn + a;
//		}
//	}
//	printf("%ld", sn);
//}
//int main()
//{
//	int i;
//	double k=0,j,s=1;
//	for (i = 1; i <= 20; i++)
//	{
//		s = i * s;
//		k = k + s;
//	}
//	printf("%lf\n", k);
//	return 0;
//}
//int main()
//{
//	float k = 1.0,sum=0.0;
//	float i = 0;
//	for (i = 1; i <= 100; i++)
//		sum = sum + i;
//	for (i = 1; i <= 50; i++)
//		sum = sum + i * i;
//	for (i = 1.0; i <= 10; i++)
//		sum = sum + 1 / i;
//	printf("%8.2f", sum);
//	return 0;
//}
//int main()
//{
//	int a, b, c, k,j;
//	for (k = 100; k <= 999; k++)
//	{
//		a = k % 10;
//		j = k / 10;
//		b = j % 10;
//		c = j / 10;
//		if (a * a * a + b * b * b + c * c * c == k)
//			printf("%d ", k);
//	}
//	return 0;
//}
//int main()
//{
//	int i, j,k=0;
//	for (i = 1; i <= 1000; i++)
//	{
//		k = 0;
//		for (j = 1; j <= i; j++)
//		{
//			if ((i % j == 0) && (i != j))
//				k = j + k;
//		}
//		if (i == k)
//		{
//			printf("%d its factors are ", i);
//			for (j = 1; j < i; j++)
//				if (i % j == 0)
//				{
//					if(j==1)
//						printf(" %d", j);
//					else
//						printf(",%d", j);
//				}
//					
//				
//		}
//		if (i == k)
//			printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	float j=2, k=1,m=0;
//	float sum = 0;
//	for (i = 1; i <= 20; i++)
//	{
//		if (i == 1)
//		{
//			m = j / k;
//			sum = sum + m;
//			m = j;
//			j = j+k;
//			k = m;
//		}
//		else if (i == 2)
//		{
//			m = j / k;
//			sum = sum + j/k;
//			m = j;
//			j = j + k;
//			k=m;
//		}
//		else
//		{
//			m = j / k;
//			sum = sum + j/k;
//			m = j;
//			j = j + k;
//			k = m;
//		}	
//	}
//	printf("%f", sum);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	float sum=100, gao=100;
//	for (i = 1; i <=10; i++)
//	{
//		gao = gao / 2;
//		sum = sum+gao * 2;
//	}
//	sum = sum - gao * 2;
//	printf("%f %f\n", sum, gao);
//	return 0;
//}
//int main()
//{
//	int i,j=1;
//	for (i = 9; i >= 1; i--)
//	{
//		j = (j + 1) * 2;
//	}
//	printf("%d\n", j);
//	return 0;
//}
//int main()
//{
//	double x=1.0, y,a;
//	scanf("%lf", &a);
//	do
//	{
//		y = x;
//		x = (y + a / y) / 2;
//	} while (fabs(x - y) > 1e-5);
//	printf("%lf", x);
//	return 0;
//}
//int main()
//{
//	double x0, x1=1.5;
//	do
//	{
//		x0 = x1;
//		x1 = x0 - (2 * x0 * x0 * x0 - 4 * x0 * x0 + 3 * x0 - 6) / (6 * x0 * x0 - 8 * x0 + 3);
//	} while (fabs(x1 - x0));
//	printf("%lf", x0);
//}
//int main()
//{
//	double a=-10, b=10, x,y;
//	do
//	{
//		x = (a + b) / 2;
//		y = 2 * x * x * x - 4 * x * x + 3 * x - 6;
//		if (y == 0)
//		{
//			a = b;
//			x = a;
//		}
//		else if (y * (2 * a * a * a - 4 * a * a + 3 * a - 6) < 0)
//		{
//			b = x;
//		}
//		else if (y * (2 * b * b * b - 4 * b * b + 3 * b - 6) < 0)
//		{
//			a = x;
//		} 
//	}while (fabs(b - a) > pow(10,-5));
//	printf("this is root:%lf\n", x);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i, j,k=4;
//	for (i = 1; i <= 4; i++)
//	{
//		for (k = 1; k <=(4-i); k++)
//			printf("  ");
//		for (j = 1; j <=2*i-1; j++)
//		{
//			printf(" *");
//		}
//		printf("\n");
//	}
//	for(i=1;i<=3;i++)
//	{
//		for (k = 1; k <=i; k++)
//			printf("  ");
//		for (j = 1; j <= 7-2 * i; j++)
//		{
//			printf(" *");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	char a, b, c;
//	for (a = 'X'; a <= 'Z'; a++)
//		for (b = 'X'; b <= 'Z'; b++)
//			for (c = 'X'; c <= 'Z'; c++)
//				if (a != 'X' && c != 'X' && c != 'Z'&&a!=c&&a!=b&&b!=c)
//				{
//					printf("A%c\nB%c\nC%c\n", a, b, c);
//				}
//	return 0;
//}
//int ispn(int a)
//{
//	int i;
//	for (i = 2; i <= sqrt(a); i++)
//		if (a % i == 0)
//			return 0;
//	return 1;
//}
//int main()
//{
//	int i, j=0;
//	int a[100];
//	for (i = 0; i <= 99; i++)
//		a[i] = i+1;
//	a[0] = 0;
//	for (i = 2; i <= 100; i++)
//	{
//		if(!ispn(i))
//		  for (j = 3; j <= 99; j++)
//			if(a[j] % i == 0)
//				a[j] = 0;
//	}
//	for (i = 0; i <= 99; i++)
//		if (a[i] != 0)
//			printf("%d ", a[i]);
//	printf("\n");
//	return 0;
//}
//int main()
//{
//	int i, a[10],j,b;
//	srand((unsigned)time(NULL));
//	for (i = 0; i < 10; i++)
//	{
//		a[i] = rand() % 100 + 1;
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	for(i=0;i<10;i++)
//		for(j=i+1;j<10;j++)
//			if (a[i] > a[j])
//			{
//				b = a[i];
//				a[i] = a[j];
//				a[j] = b;
//			}
//	for (i = 0; i < 10; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//	return 0;
//}
//int main()
//{
//	int a[3][3], i,j,sum=0;
//	srand((unsigned)time(NULL));
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			a[i][j] = rand() % 100 + 1;
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	for (i = 0; i < 3; i++)
//		sum = sum + a[i][i];
//	printf("%d\n", sum);
//	sum = 0;
//	for (i = 0, j = 2; i < 3 && j >= 0; i++, j--)
//		sum = sum + a[i][j];
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int i, a[11],j,b,mid,c;
//	srand((unsigned)time(NULL));
//	for (i = 0; i < 10; i++)
//	{
//		a[i] = rand() % 100 + 1;
//		//printf("%d ", a[i]);
//	}
//	printf("\n");
//	for(i=0;i<10;i++)
//		for(j=i+1;j<10;j++)
//			if (a[i] > a[j])
//			{
//				b = a[i];
//				a[i] = a[j];
//				a[j] = b;
//			}
//	scanf("%d", &a[10]);
//	for (i = 0; i < 11; i++)
//		printf("%d ", a[i]);
//	i = 0;
//	j = 10;
//	while (i <= j)
//	{
//		mid = (i + j) / 2;
//		if (a[10] == a[mid])
//		{
//			b= mid;
//			break;
//		}
//		else if (a[10] > a[mid])
//		{
//			i = mid+1;
//		}
//		else
//		{
//			j = mid-1;
//		}
//	}
//	if (j < i)
//		if (a[0] > a[10])
//			b = 0;
//		else if (a[9] < a[10])
//			b = 10;
//		else
//			b = mid;
//	c = a[10];
//	if (b != 10)
//	{
//		for (i = 0; i < (10 - b); i++)
//		{
//			a[10 - i] = a[9 - i];
//		}
//	}
//	a[b] = c;
//	printf("\n");
//	for (i = 0; i < 11; i++)
//		printf("%d ", a[i]);
//	return 0;
//}
//int main()
//{
//	int a[] = { 8,6,5,4,1 };
//	int b = sizeof(a)/sizeof(a[0]);
//	int i=0, j=b-1;
//	int c;
//	for (i = 0; i < b; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	for (i = 0, j = (b - 1); i <= j; i++, j--)
//	{
//		c = a[i];
//		a[i] = a[j];
//		a[j] = c;
//	}
//	for (i = 0; i < b; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	return 0;
//}
//int main()
//{
//	int i, j;
//	int a[10][10];
//	for (i = 0; i < 10; i++)
//	{
//		a[i][0] = 1;
//		a[i][i] = 1;
//	}
//	for (i = 2; i < 10; i++)
//	{
//		for (j = 1; j <= i - 1; j++)
//		{
//			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%5d", a[i][j]);
//		}
//		printf("\n");
//	}		
//	return 0;
//}
//int main()
//{
//	int n,i,j,k=1;
//	int a[15][15];
//	scanf("%d", &n);
//	printf("%d的魔方阵:\n",n);
//	for (i = 1; i <= n; i++)
//		for (j = 1; j <= n; j++)
//			a[i][j] = 0;
//	i = n+1;
//	j = n / 2+1;
//	a[1][j] = k;
//	for (k = 2; k <= n*n; k++)
//	{
//		i--;
//		j++;
//		if (i<1 && j>n)
//		{
//			i = i + 2;
//			j = j - 1;
//		}
//		else
//		{
//			if (i < 1)
//				i = n;
//			if (j > n)
//				j = 1;
//		}
//		if (a[i][j] == 0)
//		{
//			a[i][j] = k;
//		}
//		else
//		{
//			i = i + 2;
//			j = j - 1;
//			a[i][j] = k;
//		}
//	}
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n; j++)
//		{
//			printf("%3d", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a[3][3], i, j,i1=0,j1=0, k = 0;
//	int ad,flag=0;
//	//srand((unsigned)time(NULL));
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 3; j++)
//			scanf("%d", &a[i][j]);
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%3d", a[i][j]);
//		}
//		printf("\n");
//	}
//	for (k = 0; k < 3; k++)
//	{
//		i = k;
//		ad = a[i][0];
//		for (j = 1; j < 3; j++)
//		{
//			if (ad<a[i][j] )
//			{
//				ad = a[i][j];
//				i1 = i;
//				j1 = j;
//			}
//		}
//		for (j = j1, i =0; i < 3; i++)
//		{
//			if (ad > a[i][j])
//				break;
//		}
//		if (i == 3)
//		{
//			printf("an dian is %d\n", ad);
//			flag = 1;
//		}
//	}
//	if (flag == 0)
//		printf("no an dian");
//	return 0;
//}
//int main()
//{
//	int a[15],i,j,mid,flag;
//	srand((unsigned)time(NULL));
//	for (i = 0; i < 15; i++)
//		a[i] = rand() % 100 + 1;
//	for (i = 0; i < 15; i++)
//		printf("%3d", a[i]);
//	printf("\n");
//	for(i=0;i<14;i++)
//		for(j=i+1;j<15;j++)
//			if (a[i] < a[j])
//			{
//				mid = a[j];
//				a[j] = a[i];
//				a[i] = mid;
//			}
//	for (i = 0; i < 15; i++)
//		printf("%3d", a[i]);
//	printf("\n");
//	scanf("%d", &flag);
//	i = 0;
//	j = 14;
//	while (i <= j)
//	{
//		mid = (i+j) / 2;
//		if (flag == a[mid])
//		{
//			printf("find:xia biao shi %d",mid);
//			break;
//		}
//		else if (flag > a[mid])
//		{
//			j = mid-1;
//		}
//		else
//		{
//			i = mid + 1;
//		}
//	}
//	if (i > j)
//		printf("找不到");
//	return 0;
//}
//int main()
//{
//	int i,j;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j <= i; j++)
//			printf(" ");
//		for (j = 0; j <= 4; j++)
//			printf("* ");
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	char s[] = { "R droo erhrg Xsrmz mvcg dvvp" };
//	char* s1 = &s[0];
//	char str[100] = {"\0"};
//	int i = 0;
//	while (*s1!= '\0')
//	{
//		if (*s1 >= 'A' && *s1 <= 'Z')
//			str[i] = 155 - *s1;
//		else if (*s1 >= 'a' && *s1 <= 'z')
//			str[i] = 219 - *s1;
//		else
//			str[i] = *s1;
//		i++;
//		s1++;
//	}
//	puts(s);
//	puts(str);
//	return 0;
//}
//int main()
//{
//	char s1[10] = { "ab\0" };
//	char s2[10] = { "b" };
//	char* p1 = &s1[0];
//	char* p2 = &s2[0];
//	while (*(p1) != '\0')
//	{
//		p1++;
//	}
//	while (*p2 != '\0')
//	{
//		*(p1++) = *(p2++);
//	}
//	*p1 = '\0';
//	puts(s1);
//	return 0;
//}
//int main()
//{
//	char s1[] = { "abc\0" };
//	char s2[] = { "bccl\0" };
//	char* p1 = &s1[0];
//	char* p2 = &s2[0];
//	printf("%d\n", sizeof(s1));
//	printf("%d\n", sizeof(s2));
//	if (sizeof(s1) < sizeof(s2))
//	{
//		printf("s1太小");
//	}
//	else
//	{
//		do
//		{
//			*p1 = *p2;
//			p1++;
//			p2++;
//		} while (*p2 != '\0');
//		*p1 = *p2;
//		puts(s1);
//	}
//	return 0;
//}
//int yue(int a, int b)
//{
//	int c;
//	if (a > b)
//	{
//		c = a;
//		a = b;
//		b = c;
//	}
//	c = a;
//	while (1)
//	{
//		if (a % c == 0 && b % c == 0)
//			return c;
//		else
//		{
//			c--;
//		}
//	}
//}
//int bei(int a, int b)
//{
//	int c;
//	int i = 1;
//	if (a > b)
//	{
//		c = a;
//		a = b;
//		b = c;
//	}
//	c = a;
//	while (1)
//	{
//		if ( (i * c)%a == 0 && (i * c)%b== 0)
//			return i * c;
//		else
//		{
//			i++;
//		}
//	}
//}
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d\n",yue(a, b)); 
//	printf("%d\n", bei(a, b));
//	return 0;
//}
//void dayu(double d, double a, double b)
//{
//	d = sqrt(d);
//	printf("%lf %lf\n", (-b + d) / (2 * a), (-b - d) / (2 * a));
//}
//void dengyu(double d, double a, double b)
//{
//	d = sqrt(d);
//	printf("%lf %lf\n", (-b + d) / (2 * a), (-b - d) / (2 * a));
//}
//void xiaoyu(double d, double a, double b)
//{
//	d = sqrt(-d);
//	printf("%lf+%lfi %lf-%lfi\n", -b / (2 * a),d/(2*a), (-b) / (2 * a),d/(2*a));
//}
//int main()
//{
//	double a, b, c;
//	double d;
//	scanf("%lf %lf %lf", &a, &b, &c);
//	if (a == 0)
//		printf("a=0!?");
//	else
//	{
//		d = b * b - 4 * a * c;
//		if (d > 0)
//			dayu(d,a,b);
//		else if (d == 0)
//			dengyu(d,a,b);
//		else
//			xiaoyu(d,a,b);
//	}
//	return 0;
//}
//int su(int a)
//{
//	int i;
//		for (i = 2; i <= sqrt(a); i++)
//			if (a % i == 0)
//				return 0;
//		return 1;
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a == 1)
//		printf("1?");
//	else if (su(a))
//		printf("shi su shu");
//	else
//		printf("bu shi su shu");
//	return 0;
//}
//void v(int a[][3],int i,int j)
//{
//	int b,i1,j1;
//	for (i1 = 0; i1 < i; i1++)
//	{
//		for (j1 = 0; j1 <= i1; j1++)
//		{
//			b = a[i1][j1];
//			a[i1][j1] = a[j1][i1];
//			a[j1][i1] = b;
//		}
//	}
//	for (i1 = 0; i1 < 3; i1++)
//	{
//		for (j1 = 0; j1 < 3; j1++)
//		{
//			printf("%2d", a[i1][j1]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%2d", a[i][j]);
//		}
//		printf("\n");
//	}
//	v(a,3,3);
//	return 0;
//}
//void v(char* s,char* a,char* b)
//{
//	char c;
//	while(a<b)
//	{ 
//		c = *a;
//		*a = *b;
//		*b = c;
//		a++;
//		b--;
//	}
//}
//int main()
//{
//	char s[10] = {""};
//	char* a=&s[0];
//	char* b=a;
//	gets(s);
//	puts(s);
//	b = strlen(s) - 1 + a;
//	v(s,a,b);
//	puts(s);
//	return 0;
//}
//void l(char* p, char* q)
//{
//	while (*q != '\0')
//	{
//		*p = *q;
//		p++;
//		q++;
//	}
//	*p = '\0';
//}
//int main()
//{
//	char s1[30] = { "i am" };
//	char s2[] = { "chinese" };
//	char* p = &s1[0];
//	char* q = &s2[0];
//	p = strlen(s1) + p;
//	//printf("%d", strlen(s1));
//	l(p, q);
//	puts(s1);
//	return 0;
//}
//void l(char* p, char* q)
//{
//	while (*q != '\0')
//	{
//		if (*q == 'A' || *q == 'E' || *q == 'I' || *q == 'O' || *q == 'U' || *q == 'a' || *q == 'e' || *q == 'i' || *q == 'o' || *q == 'u')
//		{
//			*p = *q;
//			p++;
//			q++;
//		}
//			
//		else
//		{
//			q++;
//		}
//	}
//	*p = '\0';
//}
//int main()
//{
//	char s1[30] = { "i am" };
//	char s2[] = { " chinese" };
//	char* p = &s1[0];
//	char* q = &s2[0];
//	p = strlen(s1) + p;
//	//printf("%d", strlen(s1));
//	l(p, q);
//	puts(s1);
//	return 0;
//}
//
//void t(char* s,int* zm,int* sz,int* kg,int* qt)
//{
//	while (*s != '\0')
//	{
//		if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
//			*zm = *zm + 1;
//		else if (*s >= '0' && *s <= '9')
//			*sz = *sz + 1;
//		else if (*s == ' ')
//			*kg = *kg + 1;
//		else
//			*qt=*qt+1;
//		s++;
//	}
//}
//int main()
//{
//	int zm=0, sz=0, kg=0, qt=0;
//	char s[] = { "i 2 chinese!" };
//	t(&s[0],&zm,&sz,&kg,&qt);
//	printf("%d %d %d %d\n", zm, sz, kg, qt);
//	return 0;
//}
//void z(char* s, char* b)
//{
//	int i = 0, j = 0;
//	char* ss = s;
//	char* bb = b;
//	while ((*s) != '\0')
//	{
//		b = bb;
//		//s = ss;
//		i = 0;
//		while ((*ss) != ' ')
//		{
//			i++;
//			ss++;
//		}
//		if (i > j)
//		{
//			j = i;
//			ss++;
//			for (i = 0; i < j; i++)
//			{
//				*b = *s;
//				s++;
//				b++;
//			}
//		}
//		else
//		{
//			ss++;
//		}
//		s = ss;
//	}
//}
//int main()
//{
//	char s[] = { "i am a1111 chi " };
//	char b[10] = { " " };
//	z(s,b);
//	puts(b);
//	return 0;
//}
//void qp(char* s, int a)
//{
//	int i, j;
//	char k;
//	for (i = 1; i < a; i++)
//		for (j = 0; j < a - i; j++)
//			if (*(s+j) > *(s+j + 1))
//			{
//				k = *(s+j);
//				*(s+j) = *(s+j + 1);
//				*(s+j + 1) = k;
//			}	
//}
//int main()
//{
//	char s[11] = { "7856091234" };
//	printf("%s\n",s);
//	qp(s, 10);
//	printf("%s\n", s);
//	return 0;
//}
//double s(double a, double b, double c, double d)
//{
//	double x=1, x0, f, fd;
//	do
//	{
//		x0 = x;
//		f = a * x0 * x0 * x0 + b * x0 * x0 + c * x0 + d;
//		fd = 3 * a * x0*x0 + 2 * b * x0 + c;
//		x = x0 - f / fd;
//	} while ((fabs(x - x0) >= 1e-5));
//	return x;
//}
//int main()
//{
//	double a, b, c, d;
//	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
//	printf("%lf\n", s(a, b, c, d));
//	return 0;
//}
//double r(double x, int n)
//{
//	if (n == 0)
//		return 1.0;
//	else if (n == 1)
//		return x;
//	else
//		return (((double)(2 * n - 1) )* x - r(x,n-1)-((double)(n-1)*r(x,n-2) ))/ (double)n;
//}
//int main()
//{
//	double x;
//	int n;
//	scanf("%lf %d", &x,&n);
//	printf("%lf\n", r(x, n));
//	return 0;
//}
//void xsp(int a[][2], int i, int j)
//{
//	int ii, jj;
//	double sum=0;
//	for (ii = 0; ii < i; ii++)
//	{
//		sum = 0;
//		for (jj = 0; jj < j; jj++)
//		{
//			sum = sum + a[ii][jj];
//		}
//		printf("%.1lf ", sum / 2);
//	}
//	printf("\n");
//}
//void kp(int a[][2], int i, int j)
//{
//	int ii, jj;
//	double sum = 0;
//	for (jj = 0; jj < j; jj++)
//	{
//		sum = 0;
//		for (ii = 0; ii < i; ii++)
//		{
//			sum = sum + a[ii][jj];
//		}
//		printf("%0.1lf ", sum / 5);
//	}
//	printf("\n");
//}
//void zg(int a[][2], int i, int j)
//{
//	int ii, jj, z=0, g=0;
//	int zg=0;
//	for(ii=0;ii<i;ii++)
//		for (jj = 0; jj < j; jj++)
//		{
//			if (a[ii][jj] > zg)
//			{
//				zg = a[ii][jj];
//				z = ii+1;
//				g = jj+1;
//			}
//		}
//	printf("%d %d\n", z, g);
//}
//void fc(int a[][2], int i, int j)
//{
//	int ii, jj;
//	double sum = 0,s1=0,s2=0;
//	for (ii = 0; ii < i; ii++)
//	{
//		sum = 0;
//		for (jj = 0; jj < j; jj++)
//		{
//			sum = sum + a[ii][jj];
//		}
//		sum = sum / 2;
//		s1 =s1+ sum * sum;
//		s2 = s2 + sum;
//	}
//	printf("%lf\n", (s1 / 5) - ((s2 / 5) * (s2 / 5)));
//}
//int main()
//{
//	int a[5][2];
//	int i, j;
//	srand((unsigned)time(NULL));
//	for (i = 0; i < 5; i++)
//		for (j = 0; j < 2; j++)
//			a[i][j] = rand() % 100 + 1;
//	printf("st subject:\n");
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 2; j++)
//			printf("%3d ", a[i][j]);
//		printf("\n");
//	}
//	printf("stp:\n");
//	xsp(a, 5, 2);
//	printf("kp:\n");
//	kp(a, 5, 2);
//	printf("zg:\n");
//	zg(a, 5, 2);
//	printf("fc:\n");
//	fc(a, 5, 2);
//	return 0;
//}
int main()
{
	char arr[] = {'a','b','c','d','e','f'};
	printf("%d\n", strlen(&arr));
	printf("%d\n", strlen(&arr+1));
	printf("%d\n", strlen(&arr[0]+1));
	return 0;
}