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
//typedef struct score
//{
//	char num[10];
//	char name[10];
//	double chinese;
//	double math;
//	double ave;
//}score;
//typedef struct stu
//{
//	int n;
//	score* sco;
//}stu;
//void my_print()
//{
//	FILE* pf = fopen("stud.txt", "r");
//	int i = 0;
//	score s[3];
//	for (i = 0; i < 3; i++)
//	{
//		fread(&(s[i]), sizeof(struct score), 1, pf);
//		printf("%s %s %lf %lf %lf\n", s[i].num,s[i].name, s[i].chinese, s[i].math,
//		                          s[i].ave);
//	}
//	fclose(pf);
//	pf = NULL;
//}
//int com_by_ave(const void* p1, const void* p2)
//{
//	if ((const double*)p1< (const double*)p2)
//		return 1;
//	return 0;
//}
//void my_sort()
//{
//	FILE* pf = fopen("stud.txt", "r");
//	score s[3];
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		fread(&(s[i]), sizeof(struct score), 1, pf);
//	}
//	qsort(&s[0], 3, sizeof(s[0]), com_by_ave);
//	fclose(pf);
//	pf = NULL;
//	FILE* pf1 = fopen("stud_sort.txt", "w");
//	if (pf1 == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return;
//	}
//	for (i = 0; i < 3; i++)
//	{
//		fwrite(&(s[i]), sizeof(struct score), 1, pf1);
//	}
//	fclose(pf1);
//	pf1 = NULL;
//	FILE* pf2= fopen("stud_sort.txt", "r");
//	for (i = 0; i < 3; i++)
//	{
//		fread(&(s[i]), sizeof(struct score), 1, pf2);
//		printf("%s %s %lf %lf %lf\n", s[i].num, s[i].name, s[i].chinese, s[i].math,
//			s[i].ave);
//	}
//	fclose(pf2);
//	pf2 = NULL;
//}
//int main()
//{
//	///*stu con;
//	//stu* pstu= &con;
//	//score* ptr = (score*)malloc(5*sizeof(score));
//	//if (ptr == NULL)
//	//{
//	//	printf("%s\n", strerror(errno));
//	//	return 0;
//	//}
//	//pstu->sco = ptr;
//	//for(pstu->n=0;pstu->n<3;pstu->n++)
//	//{
//	//	scanf("%s %s %lf %lf", pstu->sco[pstu->n].num,
//	//		                     pstu->sco[pstu->n].name,
//	//		                     &(pstu->sco[pstu->n].chinese),
//	//		                    &(pstu->sco[pstu->n].math));
//	//}
//	//int i;
//	//double stu_ave[3];
//	//for (i = 0; i < pstu->n; i++)
//	//{
//	//	stu_ave[i] = ((pstu->sco[i].chinese) + (pstu->sco[i].math)) / 2;
//	//	pstu->sco[i].ave = stu_ave[i];
//	//}
//	//FILE* pf = fopen("stud.txt", "w");
//	//if (pf == NULL)
//	//{
//	//	printf("%s\n", strerror(errno));
//	//	return 0;
//	//}
//	//for (i = 0; i < pstu->n; i++)
//	//{
//	//	fwrite(&(pstu->sco[i]), sizeof(score), 1, pf);
//	//}
//	//fclose(pf);
//	//pf = NULL;
//	//free(pstu->sco);
//	//pstu->sco = NULL;
//	//my_print();
//	//my_sort();
//	//return 0;*/
//	score s[4];
//	FILE* pf = fopen("D:\\驱动精灵搬家目录\\foundation\\文件和预处理\\stud_sort.txt", "r");
//	if (pf == NULL)
//	{
//		printf("pf=%s\n", strerror(errno));
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		fread(&(s[i]), sizeof(struct score), 1, pf);
//	}
//	scanf("%s %s %lf %lf",s[3].num,s[3].name,&(s[3].chinese),&(s[3].math));
//	s[3].ave=( (s[3].chinese)+(s[3].math))/2;
//	score ss;
//	for (i = 3; i >= 1; i--)
//	{
//		if (s[i-1].ave < s[i].ave)
//		{
//			ss = s[i];
//			s[i]=s[i-1];
//			s[i-1]=ss;
//		}
//	}
//	fclose(pf);
//	pf = NULL;
//	FILE* pf1 = fopen("stud_sort.txt", "w");
//	if (pf1 == NULL)
//	{
//		printf("pf1=%s\n", strerror(errno));
//		return 0;
//	}
//	for (i = 0; i < 4; i++)
//	{
//		fwrite(&s[i], sizeof(score), 1, pf1);
//	}
//	fclose(pf1);
//	pf1 = NULL;
//	FILE* pf2 = fopen("stud_sort.txt", "r");
//	if (pf2 == NULL)
//	{
//		printf("pf2=%s\n", strerror(errno));
//		return 0;
//	}
//	for (i = 0; i < 4; i++)
//	{
//		fread(&s[i], sizeof(score), 1, pf2);
//		printf("%s %s %lf %lf %lf\n", s[i].num, s[i].name, s[i].chinese, s[i].math,
//			s[i].ave);
//	}
//	fclose(pf2);
//	pf2 = NULL;
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("t.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fseek(pf, -3, SEEK_END);
//	char ch = fgetc(pf);
//	printf("%c\n", ch);
//	int i = ftell(pf);
//	printf("%d\n", i);
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	char ch;
//	FILE* pf = fopen("stud.txt", "r");
//	if (pf == NULL)
//	{
//		perror("error:");
//		return 0;
//	}
//	while ((ch = fgetc(pf))!=EOF)
//	{
//		putchar(ch);
//	}
//	if (ferror(pf))
//		printf("非正常结束\n");
//	else if (feof(pf))
//		printf("正常结束\n");
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
#define CAPABILITY 2
typedef struct employ
{
	char name[10];
	int age;
	double salary;
}emp;
typedef struct employ_sim
{
	char name[10];
	double salary;
}emp_sim;
typedef struct emp_info
{
	emp* e;
	int emp_pre;
	int emp_capability;
}emp_info;
typedef struct emp_sim_info
{
	emp_sim* ee;
	int emp_sim_pre;
	int emp_sim_capability;
}emp_sim_info;
enum option
{
	EXIT,
	ADD,
	DELETE,
	SAVE,
	SHOW,
	ADD_SIM,
	DELETE_SIM
};
void checkemp(emp_info* emps)
{
	emp* ptr;
	if (emps->emp_pre == emps->emp_capability)
	{
		ptr = (emp*)realloc(emps->e, (emps->emp_capability + 2) * sizeof(emp));
		if (ptr == NULL)
		{
			return;
		}
		emps->e = ptr;
		emps->emp_capability += 2;
		printf("增容成功\n");
	}
}
void loademp(emp_info* emps)
{
	emp tmp;
	FILE* pf = fopen("employee.txt", "r");
	if (pf == NULL)
	{
		perror("load error:");
		return;
	}
	while (fread(&tmp, sizeof(emp), 1, pf))
	{
		checkemp(emps);
		emps->e[emps->emp_pre] = tmp;
		emps->emp_pre++;
	}
	fclose(pf);
	pf = NULL;
}
void init(emp_info* emps)
{
	emps->e = (emp*)malloc(sizeof(emp) * 2);
	if (emps->e == NULL)
	{
		return;
	}
	emps->emp_pre = 0;
	emps->emp_capability = CAPABILITY;
	loademp(emps);
}
void add(emp_info* emps)
{
	checkemp(emps);
	printf("请输入名字:>\n");
	scanf("%s", emps->e[emps->emp_pre].name);
	printf("请输入年龄:>\n");
	scanf("%d", &(emps->e[emps->emp_pre].age));
	printf("请输入工资:>\n");
	scanf("%lf", &(emps->e[emps->emp_pre].salary));
	emps->emp_pre++;
	printf("添加成功\n");
}
void add_sim(emp_info* emps, emp_sim_info* emps_sim)
{
	emp tmp;
	emp_sim tmp_sim;
	FILE* pf = fopen("employee.txt", "r");
	if (pf == NULL)
	{
		perror("load employee error:");
		return;
	}
	FILE* pf_sim = fopen("emp_sim.txt", "w");
	if (pf_sim == NULL)
	{
		perror("load emp_sim error:");
		return;
	}
	while (fread(&tmp, sizeof(emp), 1, pf))
	{
		strcpy(tmp_sim.name, tmp.name);
		tmp_sim.salary = tmp.salary; 
		fwrite(&tmp_sim, sizeof(emp_sim), 1, pf_sim);
	}
	fclose(pf);
	pf = NULL;
	fclose(pf_sim);
	pf_sim = NULL;
	printf("已建立简明职工工资文件\n");
	FILE* pfsim = fopen("emp_sim.txt", "r");
	int i = 0;
	printf("%-5s\t%-5s\n", "名字", "工资");
	for (i = 0; i < emps->emp_pre; i++)
	{
		fread(&tmp_sim, sizeof(emp_sim), 1, pfsim);
		printf("%-5s\t%-5lf\n", tmp_sim.name, tmp_sim.salary);
	}
	fclose(pfsim);
	pfsim = NULL;
	emps_sim->emp_sim_pre = emps->emp_pre;
	emps_sim->emp_sim_capability = emps->emp_capability;
}
int findemp(emp_info* emps,char* name)
{
	int i = 0;
	for (i = 0; i < emps->emp_pre; i++)
	{
		if (strcmp(emps->e[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}
void delete(emp_info* emps)
{
	char name[10];
	printf("请输入要删除人员的名字：");
	scanf("%s", name);
	int pos = findemp(emps, name);
	if (pos == -1)
	{
		printf("找不到要删除有人员\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < emps->emp_pre - 1; j++)
		{
			emps->e[j] = emps->e[j + 1];
		}
		emps->emp_pre--;
		printf("删除成功\n");
	}
}
void delete_sim(emp_sim_info* emps_sim)
{
	char name[10];
	printf("请输入要删除人员(emp_sim)的名字：");
	scanf("%s", name);
	emp_sim tmp;
	FILE* pf1 = fopen("emp_sim.txt", "r");
	if (pf1 == NULL)
	{
		perror("load error:");
		return;
	}
	emps_sim->ee = (emp_sim*)malloc(sizeof(emp_sim) * 20);
	int i = 0;
	while (fread(&tmp, sizeof(emp_sim), 1, pf1))
	{
		emps_sim->ee[i++] = tmp;
	}
	fclose(pf1);
	pf1 = NULL;
	i = 0;
	int pos = -1;
	for (i = 0; i < emps_sim->emp_sim_pre; i++)
	{
		if (strcmp(emps_sim->ee[i].name, name) == 0)
			pos=i;
	}
	if (pos == -1)
	{
		printf("找不到要删除有人员\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < emps_sim->emp_sim_pre - 1; j++)
		{
			emps_sim->ee[j] = emps_sim->ee[j + 1];
		}
		emps_sim->emp_sim_pre--;
		emps_sim->emp_sim_capability--;
		FILE* pf = fopen("emp_sim.txt", "w");
		if (pf == NULL)
		{
			perror("save error:");
			return;
		}
		int i = 0;
		for (i = 0; i < emps_sim->emp_sim_pre; i++)
		{
			fwrite(&(emps_sim->ee[i]), sizeof(emp_sim), 1, pf);
		}
		fclose(pf);
		pf = NULL;
		printf("删除成功\n");
		FILE* pfsim = fopen("emp_sim.txt", "r");
		i = 0;
		printf("%-5s\t%-5s\n", "名字", "工资");
		emp_sim tmp_sim;
		for (i = 0; i < emps_sim->emp_sim_pre; i++)
		{
			fread(&tmp_sim, sizeof(emp_sim), 1, pfsim);
			printf("%-5s\t%-5lf\n", tmp_sim.name, tmp_sim.salary);
		}
		free(emps_sim->ee);
		emps_sim->ee = NULL;
		fclose(pfsim);
		pfsim = NULL;
	}
}
void save(emp_info* emps)
{
	FILE* pf = fopen("employee.txt", "w");
	if (pf == NULL)
	{
		perror("save error:");
		return;
	}
	int i = 0;
	for (i = 0; i < emps->emp_pre; i++)
	{
		fwrite(&(emps->e[i]), sizeof(emp), 1, pf);
	}
	fclose(pf);
	pf = NULL;
}
void show(emp_info* emps)
{
	if (emps->emp_pre == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-5s\t%-5s\t%-5s\n", "名字", "年龄", "工资");
		for (i = 0; i < emps->emp_pre; i++)
		{
			printf("%s\t%d\t%lf\n", emps->e[i].name, emps->e[i].age, emps->e[i].salary);
		}
	}
}
void destory(emp_info* emps)
{
	free(emps->e);
	emps->e = NULL;
}
int main()
{
	printf("**************************\n");
	printf("*** 1.add     2.delete ***\n");
	printf("*** 3.save    4.show   ***\n");
	printf("*** 5.add_sim 6.delete_sim\n");
	printf("*** 0.exit             ***\n");
	printf("**************************\n");
	emp_info emps;
	emp_sim_info emps_sim;
	init(&emps);
	int input = 0;
	init(&emps);
	do
	{
		printf("input your choice:");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			add(&emps);
			break;
		case DELETE:
			delete(&emps);
			break;
		case SAVE:
			save(&emps);
			break;
		case SHOW:
			show(&emps);
			break;
		case ADD_SIM:
			add_sim(&emps, &emps_sim);
			break;
		case DELETE_SIM:
		    delete_sim(&emps_sim);
		    break;
		case EXIT:
			printf("退出\n");
			save(&emps);
			destory(&emps);
			break;
		default:
			printf("input error\n");
		}
	} while (input);
	return 0;
}