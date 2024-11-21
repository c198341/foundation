#define MAX 10
#include <stdio.h>
int main()
{
	//—∞’“µ•…Ìπ∑
	int dogs[MAX] = { 1,2,3,4,5,1,2,3,4,6 };
	int dog_0[MAX], dog_1[MAX];
	int i = 0;
	int j = 0, k = 0;
	for (i = 0; i < MAX; i++)
	{
		if ((dogs[i] ^ 1) == 0)
			dog_1[j++] = dogs[i];
		else
			dog_0[k++] = dogs[i];
	}
	for (i = 0; i < j; i++)
	{
		printf("%d ",dog_1[i]);
	}
	printf("\n");
	for (i = 0; i < k; i++)
	{
		printf("%d ", dog_0[i]);
	}
	printf("\n");
	int a=dog_1[0];
	for (i = 1; i < j; i++)
	{
		a= a^ dog_1[i];
	}
	printf("%d\n", a);
	a= dog_0[0];
	for (i = 1; i < k; i++)
	{
		a = a ^ dog_0[i];
	}
	printf("%d\n", a);
	return 0;
}