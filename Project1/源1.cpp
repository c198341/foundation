//static int g = 2024;
//static 
//int add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
int jc(int n)
{
	int i = 1;
	int a = 1;
	for (i = 1; i <= n; i++)
	{
		if (i == n)
		{
			a = a * i;
			return a;
		}
		a = a * i;
	}
}