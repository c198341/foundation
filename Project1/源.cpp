#define _CRT_SECURE_NO_WARNINGS
//#define MAX 100
#define MAX(x,y)(x>y?x:y)
#include <stdio.h>
#include <string.h>
//extern int add(int, int);
////int cp(int n1, int n2)
////{
////
////	if (n1 > n2)
////
////		return n1;
////
////	else
////
////		return n2;
////
////
////}
int main()
{
	///*int a=0;
	////scanf("%d", &a);
	//if (a % 2 == 0)
	//{
	//	printf("is not a odd number ");
	//}
	//else
	//{
	//	printf("is a odd number");
	//}*/
	///*enum sex
	//{
	//	MALE,
	//	FEMALE,
	//	SECRET
	//};
	//enum sex me = MALE;
	//printf("%d\n", MALE);
	//printf("%d\n", FEMALE);
	//printf("%d\n", SECRET);
	//printf("%d\n", me);
	//enum sex me1 = FEMALE;
	//printf("%d\n", me1);
	//printf("%d\n", strlen("c:\test\628\test.c"));
	//printf("%c\n",'\63\63');*/
	///*int line = 0;
	//printf("加入比特\n");
	//while (line <= 10)
	//{
	//	printf("继续敲代码:%d\n",line);
	//		line++;
	//}
	//printf("good offer");*/
	//int i = 0;
	//float arr[2] = { 1.000001,2};
	//for (i = 0; i < 2; i++)
	//{
	//	printf("%f ", arr[i]);
	//}
	////arr[2] =2.1;
 ////   /*i = 0;
	////printf("\n");
	////for (i = 0;i < 10; i++)
	////{
	////	printf("%p ", arr[i]);
	////}*/
	///*int a = 3;
	//int b = 5;
	//int c = a ^ b;
	//printf("%d\n", c);*/
	
	///*int a;
	//int b;
	//int c;
	//scanf("%d %d", &a, &b);
	//c = cp(a,b);
	//printf("最大值是：%d", c);
	///*register int i = 0;
	//int arr[10] = { 0 };
	//for (i = 0; i <= 9; i++)
	//
	//	printf("%d\n", arr[i]);*/
	///*extern int g;*/
	//int a = 100;
	//int b = 220;
	//int sum = MAX(a, b);
	//printf("%d\n", sum);
	////printf("%d\n", MAX * 0.555555);
	///*int day = 3;
	//switch (day)
	//{
	//     case 1:
	//		 printf("1\n");
	//	     break;
	//	 case 2:
	//		 printf("2\n");
	//		 break;
	//	 case 3:
	//		 printf("3\n");
	//		 break;
	//	 case 4:
	//		 printf("4\n");
	//		 break;
	//	 case 5:
	//		 printf("5\n");
	//		 break;
	//	 case 6:
	//		 printf("6\n");
	//		 break;
	//	 case 7:
	//		 printf("7\n");
	//		 break;
	//}*/
	///*int n = 1;
	//int m = 2;
	//switch (n)
	//{
	//case 1:
	//	m++;
	//case 2:
	//	n++;
	//case 3:
	//	switch (n)
	//	{
	//	case 1:
	//		n++;
	//	case 2:
	//		m++;
	//		n++;
	//		break;
	//	}
	//case 4:
	//	m++;
	//	break;
	//default:
	//	break;
	//}
	//printf("m=%d,n=%d\n", m, n);*/
//int i = 1;
//while (i <= 10)
//{
//	if (i == 5)
//		continue;
//	printf("%d ", i);
//	i=i+1;
//}
//int i = 1;
//while (i <= 10)
//{
//	i = i + 1;
//	if (i == 5)
//		continue;
//	printf("%d ", i);
//}
//int ch = 0;
//while ((ch = getchar()) != EOF)
//putchar(ch);
char ch = '\0';
while ((ch = getchar()) != EOF)
{
	if (ch < '0' || ch>'9')
		continue;
	putchar(ch);
	putchar('\n');
}
	return 0;
}
