#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct stu
{
	char name[20];
	int age;
	char id[10];
};
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
	int c = 1;
	int b = c + --c;
	printf("%d", b);
	return 0;
}