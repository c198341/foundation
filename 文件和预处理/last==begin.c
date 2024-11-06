#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6013)
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <ctype.h>
//int main()
//{
//    char arr[10];
//    char* p = arr;
//    do
//    {
//        scanf("%c", p);
//    } while (*p++ != '!');
//    p = arr;
//    while (*p != '!')
//    {
//        if (*p >= 'a' && *p <= 'z')
//        {
//            *p = toupper(*p);
//        }
//        p++;
//    }
//    FILE* pf = fopen("test.txt", "w");
//    if (pf == NULL)
//    {
//        printf("%s\n", strerror(errno));
//        return 0;
//    }
//    fwrite(arr, sizeof(arr), 1, pf);
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}
//int main()
//{
//    char arra[10] = {0};
//    char arrb[10] = {0};
//    char tmp;
//    int i, j;
//    FILE* pa = fopen("a.txt", "w");
//    if (pa == NULL)
//    {
//        printf("%s\n", strerror(errno));
//        return 0;
//    }
//    scanf("%s", arra);
//    fputs(arra, stdout);
//    printf("\n");
//    fwrite(arra, sizeof(arra), 1, pa);
//    FILE* pb = fopen("b.txt", "w");
//    if (pb == NULL)
//    {
//        printf("%s\n", strerror(errno));
//        return 0;
//    }
//    scanf("%s", arrb);
//    fwrite(arrb, sizeof(arrb), 1, pb);
//    fputs(arrb, stdout);
//    printf("\n");
//    strcat(arra, arrb);
//    for(i=0;i<strlen(arra)-1;i++)
//        for (j = i + 1; j < strlen(arra); j++)
//        {
//            if (arra[i] > arra[j])
//            {
//                tmp = arra[i];
//                arra[i] = arra[j];
//                arra[j] = tmp;
//            }
//        }
//    FILE* pc = fopen("c.txt", "w");
//    pc = fopen("c.txt", "w");
//    fwrite(arra, sizeof(arra), 1, pc);
//    fputs(arra, stdout);
//    printf("\n");
//    fclose(pa);
//    pa = NULL;
//    fclose(pb);
//    pb = NULL;
//    fclose(pc);
//    pc = NULL;
//    return 0;
//}
typedef struct score
{
	char num[10];
	char name[10];
	double chinese;
	double math;
}score;
typedef struct stu
{
	int n;
	score* sco;
}stu;
int main()
{
	stu con;
	stu* pstu= &con;
	score* ptr = (score*)malloc(5*sizeof(score));
	if (ptr == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	pstu->sco = ptr;
	for(pstu->n=0;pstu->n<5;pstu->n++)
	{
		scanf("%s %s %lf %lf", pstu->sco[pstu->n].num,
			                     pstu->sco[pstu->n].name,
			                     &(pstu->sco[pstu->n].chinese),
			                    &( pstu->sco[pstu->n].math ));
	}
	double chinese_ave;
	double chinese_sum=0;
	int i = 0;
	for (i = 0; i < pstu->n; i++)
		chinese_sum += pstu->sco[i].chinese;
	chinese_ave = chinese_sum / pstu->n;
	double stu_ave[5];
	for (i = 0; i < pstu->n; i++)
	{
		stu_ave[i] = ((pstu->sco[i].chinese) + (pstu->sco[i].math)) / 2;
	}
	FILE* pf = fopen("stud.txt", "w");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	for (i = 0; i < pstu->n; i++)
	{
		fwrite(&(pstu->sco[i]), sizeof(score), 1, pf);
		fputs(pf,stdout);
	}
	return 0;
}