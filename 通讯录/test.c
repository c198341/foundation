//���Թ���
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996) 
#include "contact.h"
void menu()
{
	printf("******************************\n");
	printf("**** 1.add       2.del    ****\n");
	printf("**** 3.search    4.modify ****\n");
	printf("**** 5.show      6.sort   ****\n");
	printf("**** 0.exit               ****\n");
	printf("******************************\n");
}
int main()
{
	int input = 0;

	do
	{
		menu();
		printf("��ѡ�񣺡�");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 0:
				printf("�˳�����\n");
				break;
			default :
				printf("ѡ�����\n");
				break;
		}
	} while (input);
	return 0;
}