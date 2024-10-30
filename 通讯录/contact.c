#define _CRT_SECURE_NO_WARNINGS
//ʵ�ֺ�������
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
		printf("���ݳɹ�\n");
	}
}
void AddContact(struct Contact* ps)
{
	CheckContact(ps);
	printf("����������:>\n");
	scanf("%s", ps->data[ps->size].name);
	printf("����������:>\n");
	scanf("%d", &(ps->data[ps->size].age));
	printf("�������Ա�:>\n");
	scanf("%s", ps->data[ps->size].sex);
	printf("������绰:>\n");
	scanf("%s", ps->data[ps->size].tele);
	printf("�������ַ:>\n");
	scanf("%s", ps->data[ps->size].addr);
	ps->size++;
	printf("��ӳɹ�\n");
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
	printf("������Ҫɾ����Ա������:>\n");
	scanf("%s", name);
	int pos = FindContact(ps, name);
	if (pos == -1)
	{
		printf("�Ҳ���Ҫɾ������Ա");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�");
	}
}
void SearchContact(const struct Contact* ps)
{
	printf("������Ҫ�ҵ���Ա����:>\n");
	char name[MAX_NAME];
	scanf("%s", name);
	int pos = FindContact(ps, name);
	if(pos == -1)
		printf("�Ҳ���Ҫ���ҵ���Ա\n");
	else
	{
		printf("%-5s\t%-5s\t%-5s\t%-5s\t%-5s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-5s\t%-5d\t%-5s\t%-5s\t%-5s\n", ps->data[pos].name,
			ps->data[pos].age, ps->data[pos].sex, ps->data[pos].tele,
			ps->data[pos].addr);
		printf("���ҳɹ�");
	}
}
void ModifyContact(struct Contact* ps)
{
	printf("������Ҫ�޸ĵ���Ա����:>\n");
	char name[MAX_NAME];
	scanf("%s", name);
	int pos = FindContact(ps, name);
	if (pos == -1)
		printf("�Ҳ���Ҫ�޸ĵ���Ա");
	else
	{
		printf("����������:>\n");
		scanf("%s", ps->data[pos].name);
		printf("����������:>\n");
		scanf("%d", &(ps->data[pos].age));
		printf("�������Ա�:>\n");
		scanf("%s", ps->data[pos].sex);
		printf("������绰:>\n");
		scanf("%s", ps->data[pos].tele);
		printf("�������ַ:>\n");
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
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-5s\t%-5s\t%-5s\t%-5s\t%-5s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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