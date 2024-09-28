#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
//void rarr(char* arr, int sz)
//{
//	assert(arr);
//	char* a = arr + sz - 1;
//	char tmp;
//	while (arr <= a)
//	{
//		tmp = *a;
//		*a = *arr;
//		*arr = tmp;
//		arr++;
//		a--;
//	}
//}
//int main()
//{
//	char arr[10] = { 0 };
//	scanf("%s", arr);
//	int sz = strlen(arr);
//	rarr(arr, sz);
//	printf("%s\n", arr);
//	return 0;
//}
//int a(int i,int n)
//{
//	int j = 0;
//	int sum = 0;
//	int ret = 0;
//	for(j=0;j<n;j++)
//	{
//		ret=ret*10+i;
//		//printf("%d\n", a[j]);
//		sum = sum + ret;
//	}
//	return (sum);
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d %d", &i,&n);
//	printf("%d\n", a(i,n));
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = i;
//	int n = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		j = i;
//		n = 1;
//		while ((j / 10) != 0)
//		{
//			j = j / 10;
//			n++;
//		}
//		int sum = 0;
//		j = i;
//		while ((j) != 0)
//		{	
//			sum=sum+ pow((j % 10), n);
//			j = j / 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i, j,k;
//	int line = 0;
//	scanf("%d", &line);
//	for (i = 1; i <= line; i++)
//	{
//		for (j = 1; j <=(line-i) ; j++)
//		{
//			printf(" ");
//		}
//		for (k = 1; k <= (2*i-1); k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 1; i <= line-1; i++)
//	{
//		for (j =1; j <=  i; j++)
//		{
//			printf(" ");
//		}
//		for (k = 1; k <= line*2-1-2*i; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
////}
//int main()
//{
//	int i;
//	int sum = 0;
//	scanf("%d", &i);
//	sum = 2 * i - 1;
//	printf("%d\n", sum);
//	return 0;
//}
//int xb(int a[], int sz,int i)
//{
//		while (i<sz)
//		{
//			sz--;
//			if (a[sz] % 2 != 0)
//			{
//				return sz;
//			}
//		}
//}
//int main()
//{
//	int i, k,right;
//	int a[] = {1,3,45,79,1};
//	int sz = sizeof(a)/sizeof(a[0]);
//	for (i = 0; i < sz-1; i++)
//	{
//		if (a[i] % 2 == 0)
//		{
//			right=xb(a, sz,i);
//			k = a[right];
//			a[right] = a[i];
//			a[i] = k;
//		}
//	}
//	for (i = 0; i < sz; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//	return 0;
//}
//int main()
//{
//	int i, j,k;
//	int a[50][50] = {1};
//	scanf("%d", &k);
//	for (i = 0; i < k; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0 || j == i)
//			{
//				a[i][j] = 1;
//				printf(" %5d ", a[i][j]);
//			}
//			else
//			{
//				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//				printf(" %5d ", a[i][j]);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int k = 0;
//	for (k = 'a'; k <= 'd'; k++)
//	{
//		if ((k != 'a') + (k == 'c') + (k == 'd') + (k != 'd') == 3)
//			printf("killer=%c\n", k);
//	}
//	return 0;
//}
//int main()
//{
//	int a, b, c, d, e;
//	for (a = 1; a < 6; a++)
//		for (b = 1; b < 6; b++)
//			for (c = 1; c < 6; c++)
//				for (d = 1; d < 6; d++)
//					for (e = 1; e < 6; e++)
//						if (((b == 2)+ (a == 3)==1) &&((b == 2)+( e == 4)==1) &&((c == 1)+( d == 2)==1)&& ((c == 5)+( d == 3) ==1)&& ((e == 4)+( a == 1) == 1)&&(a*b*c*d*e==120))
//							printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
//	return 0;
//}
//int main()
//{
//	char *arr[] = { "aaaa","dddd","cccc","bbbb" };
//
//	return 0;
//}
//int leftrev(char s1[],char s2[],int length)
//{
//	assert(s2);
//	char arr1[10] = {"\0"};
//	char arr2[10] = { "\0" };
//	int i = 0;
//	int length1 = 0;
//	for (length1 = 0; length1 < length; length1++)
//	{
//		while (i <= length1)
//		{
//			arr2[i] = s1[i];
//			i++;
//		}
//		i = 0;
//		while (*(s1 + length1 + i) != '\0')
//		{
//			*(arr1 + i) = *(s1 + length1 + i);
//			i++;
//		}
//		i = 0;
//		while (*(arr1 + length - length1 + i) != '\0')
//		{
//			*(arr1 + length - length1 + i) = arr2[i];
//			i++;
//		}
//		if (!strcmp(arr1, s2))
//			return 1;
//	}
//	return 0;
//}
//int rightrev(char s1[], char s2[], int length)
//{
//	char tmp;
//	char arr1[10] = {"\0"};
//	char arr2[10] = { "\0" };
//	int i=0;
//	int length1 = 0;
//	for (i = 0; i < length; i++)
//	{
//		{
//			tmp = s1[length - 1];
//			for (length1 = 0; length1 < i; i++)
//			{
//				arr1[length - 1 - i] = s1[length - 2 - i];
//			}
//			arr1[i] = tmp;
//		}
//		if (!strcmp(s2, arr1))
//			return 1;
//	} 
//	return 0;
//}
//int another(char* s1, char* s2)
//{
//	int i = strlen(s1);
//	int j = 0;
//	int ret = 1;
//	int z = 0;
//	for (j = 0; j < i; j++)
//	{
//		s1[j + i] = s1[j];
//	}
//	for (j = 0; j < i; j++)
//	{
//		ret = 1;
//		for (z = 0; z < i; z++)
//		{
//			if (s1[j + z] != s2[z])
//			{
//				ret = 0;
//				ret = ret * 1;
//			}
//		}
//		if (ret == 1)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char s1[20] = "abcdef";
//	char s2[20] = "efab";
//	assert(strlen(s1)==strlen(s2));
//	//int length = strlen(s1);
//	if (another(s1,s2)==1)//&&rightrev(s1,s2,length))
//		printf("is rev\n");
//	else
//		printf("is not rev\n");
//	return 0;
//}
//int find(int arr[3][3], int n, int row, int col)
//{
//	int i, left, right, mid;
//	for (i = 0; i < 3; i++)
//	{
//		left = 0;
//		right = 2;
//		while (left <= right)
//		{
//			mid = (left + right) / 2;
//			if (arr[i][mid] == n)
//			{
//				return 1;
//			}
//			else if (arr[i][mid] > n)
//			{
//				right = mid - 1;
//			}
//			else
//				left = mid + 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int n = 17;
//	int ret = find(arr, n, 3, 3);
//	if (ret == 1)
//		printf("find\n");
//	else
//		printf("not find\n");
//	return 0;
//}
//struct stu
//{
//	char name[20];
//	int age;
//};
//int sort_by_name(const void* p1, const void* p2)
//{
//	return strcmp(((struct stu*)p1)->name, ((struct stu*)p2)->name);
//}
//int sort_by_age(const void* p1, const void* p2)
//{
//	return (((struct stu*)p1)->age-((struct stu*)p2)->age);
//}
////void _swap(void* p1, void* p2, int size)
//{
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		char tmp = *((char*)p1 + i);
//		*((char*)p1 + i) = *((char*)p2 + i);
//		*((char*)p2 + i) = tmp;
//	}
//}
//void bubble(void* base, int count, int size, int(*sort_by_age)(const void*,const void*))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < count - 1; i++)
//	{
//		for (j = 0; j < count - i - 1; j++)
//		{
//			if (sort_by_name((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
//			{
//				_swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
//			}
//		}
//	}
//}
//int main()
//{
//	//int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	//char *arr[] = {"aaaa","dddd","cccc","bbbb"};
//	struct stu s[3] = { {"z",20},{"l",30},{"w",10} };
//	int i = 0;
//	qsort(s, sizeof(s) / sizeof(s[0]), sizeof(s[0]), sort_by_age);
//	///*for (i = 0; i < sizeof(s) / sizeof(arr[0]); i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}*/
//	printf("\n");
//	return 0;
//}
//void my_strncpy(char* dest, char* sou, int n)
//{
//	assert(dest && sou);
//	assert(strlen(dest) >= (unsigned int)n);
//	int count = 0;
//	while (count!=n)
//	{
//		if(*sou!='\0')
//			*dest++ = *sou++;
//		else
//			*dest++ = '\0';
//		count++;
//	}
//}
//int main()
//{
//	char arr1[10] = "abcdfgh";
//	char arr2[] = "bit";
//	//my_strncpy(arr1, arr2, 1);
//	strncpy(arr1, arr2, 4);
//	printf("%s\n", arr1);
//	return 0;
//}
//int main()
//{
//	char ch = 'a';
//	int ret = isgraph(ch);
//	printf("%d\n", ret);
//	return 0;
//}
//void* my_memmove(void* dest,const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest && src);
//	if (dest < src)
//	{
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			dest= (char*)dest+1;
//			src=(char*)src+1;
//		}
//	}
//	else
//	{
//		dest=(char*)dest+count-1;
//		src = (char*)src + count-1;
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			dest=(char*)dest-1;
//			src=(char*)src-1;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//memcpy(arr1 + 2, arr1, 20);
//	my_memmove(arr1, arr1+2, sizeof(arr1[0])*5);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	return 0;
//}
//#pragma pack(4)
//struct s
//{
//	char c;
//	int a;
//	double d;
//};
//#pragma pack()
//int main()
//{
//	struct s s1;
//	printf("%d\n", sizeof(s1));
//	return 0;
//}
//struct w
//{
//	char name[20];
//	char num[3];
//};
//void my_scanf(struct w* p)
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%s %s", (p+i)->name, (p+i)->num);
//	}
//}
//int sort_by_num(const void* p1,const void* p2)
//{
//	return strcmp(((*(struct w*)p1).num),((*(struct w*)p2).num));
//}
//void my_sort(struct w* p)
//{
//	qsort(p, 5, sizeof(p[0]), sort_by_num);
//}
//struct w* my_search(struct w ws[],int length, char* search)
//{
//	int left=0;
//	int right = length - 1;
//	int mid;
//	while(left<=right)
//	{
//		mid = (left+right)/2;
//		if (!strcmp((ws[mid].num), search))
//			return &ws[mid];
//		else if (strcmp((ws[mid].num), search) > 0)
//		{
//			right = mid-1;
//		}
//		else
//			left = mid+1;
//	}
//	return NULL;
//}
//int main()
//{
//	struct w ws[5] = {0};
//	my_scanf(&ws[0]);
//	int i = 0;
//	my_sort(&ws[0]);
//	printf("\nafter sort:\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%s %s\n", ws[i].name, ws[i].num);
//	}
//	printf("\n");
//	char search[3];
//	scanf("%s", search);
//	int length = sizeof(ws) / sizeof(ws[0]);
//	struct w* find=my_search(ws,length, search);
//	if (find!=NULL)
//		printf("find:name is:%s\n",find->name);
//	else
//		printf("not find\n");
//	return 0;
//}
int main()
{
	char hex[5];
	int ret = 0;
	int oct = 0;
	gets_s(hex);
	ret = strlen(hex);
	int i = 0;
	while (i != ret)
	{
		if (hex[i] >= '0' && hex[i] <= '9')
		{
			oct= oct+ ((hex[i]- '0')) * pow(16, ((double)4 - (double)i));
		}
		else if (hex[i] >= 'A' && hex[i] <= 'F')
		{
			oct = oct + (hex[i] -'A'+10) * pow(16, ((double)4 - (double)i));
		}
		else if(hex[i] >= 'a' && hex[i] <= 'f')
		{
			oct = oct + (hex[i] -'a'+10) * pow(16, ((double)4 - (double)i));
		}
		i++;
	}
	printf("%d\n", oct);
	return 0;
}