#include <stdio.h>
int odd(int x)
{
	if (x % 2 == 0)
		return 0;
	else
		printf("%d\n", x);
	return 0;
}
int main()
{
	int a = 1;
	for (a = 1; a <= 100; a++)
	{
		odd(a);
	}
	return 0;
}