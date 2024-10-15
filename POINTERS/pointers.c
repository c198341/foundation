#define _CRT_SECURE_NO_WARNINGS
#pragma warning(once:4996)
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <assert.h>
//int cmp_by_int(const void* p1, const void* p2)
//{
//	return ((*(int*)p1>*(int*)p2)?1:0);
//}
//int cmp_by_char(const void* p1, const void* p2)
//{
//	return (strcmp((char*)p1, (char*)p2));
//}
//int main()
//{
//	int i=0;
//	//int arr[3];
//	char arr[3][10];
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%s", &arr[i]);
//	}
//	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmp_by_char);
//	//qsort(arr,sizeof(arr)/sizeof(arr[0]),sizeof(arr[0]),cmp_by_int);
//	for (i = 0; i < 3; i++)
//		printf("%s\n",&arr[i]);
//	printf("\n");
//	return 0;
//}
//void my_input(int* arr)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//}
//void convert(int* arr)
//{
//	int i = 0;
//	int mix=0;
//	int max =0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[mix] > arr[i])
//			mix = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > arr[max])
//			max = i;
//	}
//	int tmp;
//	tmp = arr[0];
//	arr[0] = arr[mix];
//	arr[mix] = tmp;
//	tmp = arr[9];
//	arr[9] = arr[max];
//	arr[max] = tmp;
//}
//void my_output(int* arr)
//{
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[10];
//	my_input(arr);
//	convert(arr);
//	my_output(arr);
//	return 0;
//}
//void move(int* arr, int n, int m)
//{
//	int tmp[10];
//	int i = 0;
//	for (i = 0; i < m; i++)
//	{
//		tmp[i] = arr[n - m + i];
//	}
//	for (i = 0; i < (n - m); i++)
//	{
//		arr[n - 1 - i] = arr[n - m -1- i];
//	}
//	for (i = 0; i < m; i++)
//	{
//		arr[i] = tmp[i];
//	}
//}
//int main()
//{
//	int arr[10];
//	int n = 0;
//	int m = 0;
//	printf("input n:");
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &(arr[i]));
//	}
//	printf("input m:");
//	scanf("%d", &m);
//	move(arr, n, m);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int findlast(int* peoplenum, int n)
//{
//	int totalnum = n;//总人数
//	int restnum = n;//剩余人数
//	int count=0;//报数
//	int* ppeoplenum = peoplenum;
//	while(restnum!=1)
//	{
//		ppeoplenum = peoplenum;
//		while (ppeoplenum < peoplenum + totalnum)
//		{
//			if (*ppeoplenum != 0)
//			{
//				count++;
//				if (count == 3)
//				{
//					restnum--;
//					*ppeoplenum = 0;
//					count = 0;
//				}
//				ppeoplenum++;
//			}
//			else
//				ppeoplenum++;
//		}
//	}
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		if(peoplenum[i]!=0)
//			return peoplenum[i];
//	}
//}
//int main()
//{
//	int peoplenum[100];
//	int i;
//	int n;
//	printf("input n:");
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		peoplenum[i] = i + 1;
//	}
//	int position=findlast(peoplenum, n);
//	printf("is %d", position);
//	return 0;
////}
//int my_strlen(char* arr)
//{
//	return strlen(arr);
//}
//int main()
//{
//	char arr[] = "ab56654654vc";
//	int length=my_strlen(arr);
//	printf("%d\n", length);
//	return 0;
//}
//
//void my_count(char* arr, int length, int* up, int* low, int* bs, int* num, int* qita)
//{
//	int i = 0;
//	for (i = 0; i < length; i++)
//	{
//		if (isupper(*(arr + i)))
//			(*up)++;
//		else if (islower(*(arr + i)))
//			(*low)++;
//		else if (isspace(*(arr + i)))
//			(*bs)++;
//		else if (isdigit(*(arr + i)))
//			(*num)++;
//		else
//			(*qita)++;
//
//	}
//}
//int main()
//{
//	char arr[10] = {0};
//	gets_s(arr);
//	int up = 0;
//	int low = 0;
//	int bs = 0;
//	int num = 0;
//	int qita = 0;
//	my_count(arr, strlen(arr),&up, &low, &bs, &num, &qita);
//	printf("%d %d %d %d %d", up, low, bs, num, qita);
//	return 0;
//}
//void convert(int arr[][3])
//{
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			int tmp = arr[i][j];
//			arr[i][j] = arr[j][i];
//			arr[j][i] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[3][3];
//	int i,j,n;
//	n = 5;
//	for (i = 0; i < 3; i++)
//		for (j = 0; j < 3; j++)
//			arr[i][j] = n++;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	convert(arr);
//	printf("after convert:\n");
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//void my_sort(int arr[][5])
//{
//	int i, j;
//	int max=arr[0][0];
//	int min = arr[0][0];
//	int tmp;
//	int line=0, col=0;
//	for (i = 0; i < 5; i++)
//		for (j = 0; j < 5; j++)
//		{
//			if (max < arr[i][j])
//			{
//				max = arr[i][j];
//				line = i;
//				col = j;
//			}
//		}
//	tmp = arr[2][2];
//	arr[2][2] = max;
//	arr[line][col] = tmp;
//	min = arr[0][0];
//	line = 0;
//	col = 0;
//	for(i=0;i<5;i++)
//		for (j = 0; j < 5; j++)
//		{
//			if (min > arr[i][j])
//			{
//				min = arr[i][j];
//				line = i;
//				col = j;
//			}
//		}
//	tmp = arr[0][0];
//	arr[0][0] = min;
//	arr[line][col] = tmp;
//	min = arr[0][4];
//	//line = 0;
//	//col = 4;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			if ((i == 0) && (j == 0))
//			{
//				;
//			}
//			else if (min > arr[i][j])
//			{
//				min = arr[i][j];
//				line = i;
//				col = j;
//			}
//		}
//	}	
//	tmp = arr[0][4];
//	arr[0][4] = min;
//	arr[line][col] = tmp;
//	min = arr[4][0];
//	//line = 4;
//	//col = 0;
//	for (i = 0; i < 5; i++)
//		for (j = 0; j < 5; j++)
//		{
//			if ((i == 0 && j == 0)||(i == 0 && j == 4))
//			{
//				;
//			}
//			else if (min > arr[i][j])
//			{
//				min = arr[i][j];
//				line = i;
//				col = j;
//			}
//		}
//	tmp = arr[4][0];
//	arr[4][0] = min;
//	arr[line][col] = tmp;
//	min = arr[4][4];
//	//line = 4;
//	//col = 4;
//	for (i = 0; i < 5; i++)
//		for (j = 0; j < 5; j++)
//		{
//			if ((i == 0 && j == 0) || (i == 0 && j == 4)||(i==4&&j==0))
//			{
//				;
//			}
//			else if (min > arr[i][j])
//			{
//				min = arr[i][j];
//				line = i;
//				col = j;
//			}
//		}
//	tmp = arr[4][4];
//	arr[4][4] = min;
//	arr[line][col] = tmp;
//	//for (i = 0; i < 5; i++)
//	//	for (j = 0; j < 5; j++)
//	//	{
//	//		if (max < arr[i][j])
//	//		{
//	//			max = arr[i][j];
//	//			line = i;
//	//			col = j;
//	//		}
//	//	}
//	//tmp = arr[2][2];
//	//arr[2][2] = max;
//	//arr[line][col] = tmp;
//}
//int main()
//{
//	int arr[5][5];
//	int i, j;
//	int n = 1;
//	//srand((unsigned)time(NULL));
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			//arr[i][j] = rand() % 50 + 1;
//			//arr[i][j] = n++;
//			//scanf("%d", &arr[i][j]);
//			arr[i][j] = n++;
//		}
//		printf("\n");
//	}
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			//arr[i][j] = rand() % 50 + 1;
//			//arr[i][j] = n++;
//			printf("%2d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	printf("after sort:\n");
//	my_sort(arr);
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%2d  ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//void my_sort(const char* arr[3],int n)
//{
//	const char* tmp;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n-1; i++)
//		for(j=i+1;j<n;j++)
//		{
//		    if (strcmp(arr[i],arr[j])==1)
//		       {
//			      tmp = arr[i];
//				  arr[i] = arr[j];
//				  arr[j] = tmp;
//		       }
//	    }
//}
//int main()
//{
//	const char* arr[3] = {"acaa","ac","ab"};
//	int i = 0;
//	my_sort(arr,3);
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//double cal(double (*handler)(double))
//{
//	double dx = (1 - 0) / 1000.0;
//	double sum = 0;
//	double i = 0;
//	for (i = 0; i <=1; i=i+dx)
//	{
//		sum = sum + handler(i) * dx;
//	}
//	return sum;
//}
//int main()
//{
//	//https://blog.csdn.net/lwj8819/article/details/119243289?ops_request_misc=%257B%2522request%255Fid%2522%253A%25224470A19D-2C74-4D09-90F3-D8281A74EA6D%2522%252C%2522scm%2522%253A%252220140713.130102334..%2522%257D&request_id=4470A19D-2C74-4D09-90F3-D8281A74EA6D&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~sobaiduend~default-2-119243289-null-null.142^v100^pc_search_result_base7&utm_term=%E5%86%99%E4%B8%80%E4%B8%AA%E7%94%A8%E7%9F%A9%E5%BD%A2%E6%B3%95%E6%B1%82%E5%AE%9A%E7%A7%AF%E5%88%86%E7%9A%84%E9%80%9A%E7%94%A8%E5%87%BD%E6%95%B0%2C%E5%88%86%E5%88%AB%E6%B1%82&spm=1018.2226.3001.4187
//	printf("input your choose:\n[1]sinx\n[2]cosx\n[3]ex\n");
//	int n;
//	scanf("%d", &n);
//	double ret=0;
//	switch (n)
//	{
//	case 1:
//		ret = cal(sin);
//		break;
//	case 2:
//		ret = cal(cos);
//		break;
//	case 3:
//		ret = cal(exp);
//		break;
//	default:
//		printf("wrong choose\n");
//	}
//	printf("ret=%lf\n", ret);
//	return 0;
//}
//void reverse(int* arr,int n)
//{
//	int* arr1 = arr;
//	int* arr2 = arr + n-1;
//	int tmp;
//	while (arr1 <= arr2)
//	{
//		tmp = *arr1;
//		*arr1 = *arr2;
//		*arr2 = tmp;
//		arr1++;
//		arr2--;
//	}
//}
//int main()
//{
//	int arr[5];
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	reverse(arr,5);
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
//struct stu
//{
//	char num[4];
//	double chinese;
//	double math;
//};
//double avg(struct stu* s,int n)
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum = sum + (s+i)->chinese;
//	}
//	return (sum / n);
//}
//void toolow(struct stu* s,int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (((s + i)->chinese < 60.0) && ((s + i)->math < 60.0))
//			printf("num is %s,chinese is %lf,math is %lf,ave sco is %lf", (s + i)->num, (s + i)->chinese, (s + i)->math, ((s + i)->chinese + (s + i)->math) / 2.0);
//	}
//	printf("\n");
//}
//void highsco(struct stu* s, int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (((s + i)->chinese + (s + i)->math) / 2 >= 90.0 || ((s + i)->chinese >= 85.0 && (s + i)->math >= 85.0))
//		{
//			printf("num is %s", (s + i)->num);
//		}
//	}
//}
//int main()
//{
//	struct stu s[3] = { {"001",85.1,90,},{"002",50.0,40.0},{"003",90.0,98.0}};
//	double avg_chinese=avg(s,3);
//	printf("ave of chinese is %lf", avg_chinese);
//	printf("\n");
//	toolow(s,sizeof(s)/sizeof(s[0]));
//	highsco(s, sizeof(s) / sizeof(s[0]));
//	return 0;
//}
//int statistics(char* arr, int* num)
//{
//	char* head = arr;
//	char* tail = arr;
//	char* tmp = arr;
//	int n=0;
//	int i = 0;
//	while (*tmp != '\0')
//	{
//		if (*tmp >= '0' && *tmp <= '9')
//		{
//			head = tmp++;
//			while (*tmp >= '0' && *tmp <= '9')
//			{
//				tmp++;
//			}
//			tail = tmp - 1;
//			while (head<=tail)
//			{
//				n = n * 10+*head-48;
//				head++;
//			}
//			num[i++] = n;
//			n = 0;
//			tmp++;
//		}
//		else
//			tmp++;
//	}
//	return i;
//}
//int main()
//{
//	char arr[] = { "a123x40x/56/n  17960?" };
//	int num[10];
//	int n=statistics(arr, num);
//	printf("n=%d\n", n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", num[i]);
//	}
//	return 0;
//}
//int my_strcmp(char* p1, char* p2)
//{
//	assert(*p1 != NULL && *p2 != NULL);
//	while (*p1 != '\0' && *p2 != '\0')
//	{
//		if (*p1 > *p2)
//			return *p1 - *p2;
//		else if (*p1 < *p2)
//			return *p1 - *p2;
//		p1++;
//		p2++;
//	}
//	return 0;
//}
//int main()
//{
//	char s1[] = { "bay" };
//	char s2[] = { "bay" };
//	int n = my_strcmp(s1,s2);
//	printf("%d\n", n);
//	return 0;
//}
//int main()
//{
//	const char* month[12] = { "jan","feb","mar","apr","may","jun","july","agu","sep","oct","nov","dec" };
//	int i = 1;
//	scanf("%d", &i);
//	printf("%s", month[i - 1]);
//	return 0;
//}
//#define newsize 1000
//char newbuf[newsize];
//char* newp = newbuf;
//char* my_alloc(char* pk, int n)
//{
//	if (n >1000 )//sizeof(p) / sizeof(p[0])
//		return NULL;
//	else
//	{
//		newp = pk + n;
//		*(newp-n) = 'a';
//		*(newp+1-n) = 'b';
//		*(newp) = 'z';
//		return newp- n;
//	}
//}
//void my_free(char* p)//free(n)
//{
//	if (p >= newbuf && p < newbuf + 1000)
//		newp = p;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	char* pk = my_alloc(newbuf, n-1);
//	if (pk == NULL)
//		printf("order too much space\n");
//	else
//	{
//		printf("%c\n%c\n%c\n", pk[0], pk[1], pk[n-1]); //alloc(n);
//	}
//	my_free(pk);
//	return 0;
//}
//int cmp(const void* p1,const void* p2)
//{
//	return strcmp(*(char**)p1, *(char**)p2);
//}
//int main()
//{
//	const char* arr[5] = { "follow","basic","great","fortran","computer" };
//	const char** p = arr;
//	qsort(p,5,sizeof(arr[4]),cmp);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%s\n", *(p+i));
//	}
//	return 0;
//}
//
//struct when
//{
//	int year;
//	int month;
//	int day;
//};
//int leapyear(int w)
//{
//	if ((w % 4 == 0 && w % 100 != 0) || (w % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int days(struct when w)
//{
//	int i = 1;
//	int ret = 0;
//	int ms[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	for (i = 1; i < w.month; i++)
//	{
//		ret = ret + ms[i-1];
//	}
//	if (leapyear(w.year))
//	{
//		if (w.month<=2)
//			return ret+w.day;
//		else
//			return ret +1+ w.day;
//	}
//	else
//		return ret + w.day;
//}
//int main()
//{
//	struct when w;
//	scanf("%d %d %d", &w.year, &w.month, &w.day);
//	int ret=days(w);
//	printf("%d\n", ret);
//	return 0;
//}
//struct stu
//{
//	int num;
//	char name[3];
//	double score;
//};
//void my_print(struct stu* s,int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d %s %lf\n", s[i].num, s[i].name, s[i].score);
//	}
//}
//void my_input(struct stu* s, int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d %s %lf", &s[i].num, &s[i].name, &s[i].score);
//	}
//}
//int main()
//{
//	struct stu s[3];// = { {10,"zh",90.0},{11,"qi",45.0},{12,"su",89.5} };
//	my_input(s, 3);
//	my_print(s,sizeof(s)/sizeof(s[0]));
//	return 0;
//}
//struct stu
//{
//	int num;
//	char name[3];
//	double chinese;
//	double math;
//	double english;
//};
//void my_print(struct stu* s, int n)
//{
//	int i = 0;
//	double ret=0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret + s[i].chinese;
//	}
//	printf("avg of chinese=%lf\n", ret / 5);
//	ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret + s[i].math;
//	}
//	printf("avg of math=%lf\n", ret / 5);
//	ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret + s[i].english;
//	}
//	printf("avg of english=%lf\n", ret / 5);
//	struct stu* p = &s[0];
//	for (i = 0; i < 5; i++)
//	{
//		if (p[0].chinese + p[0].math + p[0].english < s[i].chinese + s[i].math + s[i].english)
//			p = &s[i];
//	}
//	printf("num=%d name=%s chinese=%lf math=%lf english=%lf ave=%lf\n",p->num,p->name,p->chinese,p->math,p->english, (p->chinese+ p->math+ p->english)/3);
//}
//void my_input(struct stu* s, int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d %s %lf %lf %lf", &s[i].num, &s[i].name, &s[i].chinese,&s[i].math,&s[i].english);
//	}
//}
//int main()
//{
//	struct stu s[5];// = { {10,"zh",90.0},{11,"qi",45.0},{12,"su",89.5} };
//	my_input(s, 5);
//	my_print(s, sizeof(s) / sizeof(s[0]));
//	return 0;
//}
int main()
{

}