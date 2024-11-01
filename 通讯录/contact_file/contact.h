#define _CRT_SECURE_NO_WARNINGS
//ÉùÃ÷º¯Êý
#pragma warning(disable:6031)  
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
//#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#define ContactSize 3
enum Option
{
	EXIT,
	ADD,
	DELETE,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	SAVE
};
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;
typedef struct Contact
{
	struct PeoInfo* data;
	int size;
	int capability;
}Contact;
void InitContact(struct Contact* ps);
void AddContact(struct Contact* ps);
void ShowContact(const struct Contact* ps);
void DelContact(struct Contact* ps);
void SearchContact(const struct Contact* ps);
void ModifyContact(struct Contact* ps);
void SortContact(struct Contact* ps);
void DestoryContact(Contact* ps);
void SaveContact(Contact* ps);
void LoadContact(Contact* ps);