#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i;
	int j;
	for (i = 1000; i <= 2000; i++)
	{
		if (i % 4 == 0 && i % 100 != 0)
		{
			printf("%d ", i);
		}
		else if (i % 100 == 0 && i % 400 == 0)
		{
			printf("%d ", i);
		}
	}
	return 0;
}