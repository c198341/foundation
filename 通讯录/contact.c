#define _CRT_SECURE_NO_WARNINGS
//实现函数功能
#include "contact.h"
#pragma warning(disable:6031) 
void InitContact(struct Contact* ps)
{
	ps->data=(PeoInfo*)malloc(ContactSize*sizeof(PeoInfo));
	if (ps->data == NULL)
	{
		return;
	}
	ps->size = 0;
	ps->capability = ContactSize;
}
void CheckContact(Contact* ps)
{
	PeoInfo* ptr;
	if (ps->size == ps->capability)
	{
		ptr = (PeoInfo*)realloc(ps->data, (ps->capability + 2) * sizeof(PeoInfo));
		if (ptr == NULL)
		{
			return;
		}
		ps->data = ptr;
		ps->capability += 2;
		printf("增容成功\n");
	}
}
void AddContact(struct Contact* ps)
{
	CheckContact(ps);
	printf("请输入名字:>\n");
	scanf("%s", ps->data[ps->size].name);
	printf("请输入年龄:>\n");
	scanf("%d", &(ps->data[ps->size].age));
	printf("请输入性别:>\n");
	scanf("%s", ps->data[ps->size].sex);
	printf("请输入电话:>\n");
	scanf("%s", ps->data[ps->size].tele);
	printf("请输入地址:>\n");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;
	printf("添加成功\n");
}
static int FindContact(const struct Contact* ps, char* name)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (strcmp(ps->data[i].name, name) == 0)
			return i;
	}
	return -1;
}
void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要删除人员的名字:>\n");
	scanf("%s", name);
	int pos = FindContact(ps, name);
	if (pos == -1)
	{
		printf("找不到要删除的人员");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功");
	}
}
void SearchContact(const struct Contact* ps)
{
	printf("请输入要找的人员名字:>\n");
	char name[MAX_NAME];
	scanf("%s", name);
	int pos = FindContact(ps, name);
	if(pos == -1)
		printf("找不到要查找的人员\n");
	else
	{
		printf("%-5s\t%-5s\t%-5s\t%-5s\t%-5s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-5s\t%-5d\t%-5s\t%-5s\t%-5s\n", ps->data[pos].name,
			ps->data[pos].age, ps->data[pos].sex, ps->data[pos].tele,
			ps->data[pos].addr);
		printf("查找成功");
	}
}
void ModifyContact(struct Contact* ps)
{
	printf("请输入要修改的人员名字:>\n");
	char name[MAX_NAME];
	scanf("%s", name);
	int pos = FindContact(ps, name);
	if (pos == -1)
		printf("找不到要修改的人员");
	else
	{
		printf("请输入名字:>\n");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄:>\n");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入性别:>\n");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话:>\n");
		scanf("%s", ps->data[pos].tele);
		printf("请输入地址:>\n");
		scanf("%s", ps->data[pos].addr);
	}
}
int sort_by_name(const void* ps1, const void* ps2)
{
	return strcmp(((struct PeoInfo*)ps1)->name, ((struct PeoInfo*)ps2)->name);
}
void SortContact(struct Contact* ps)
{
	qsort(ps->data,ps->size, sizeof(struct PeoInfo),sort_by_name);
}
void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-5s\t%-5s\t%-5s\t%-5s\t%-5s\n", "名字", "年龄", "性别", "电话", "地址");
		for (i = 0; i < ps->size; i++)
		{
			printf("%-5s\t%-5d\t%-5s\t%-5s\t%-5s\n", ps->data[i].name,
				ps->data[i].age, ps->data[i].sex, ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}
void DestoryContact(Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}