#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int leapyear(int x)
{
	if (x % 100 == 0)
	{
		if (x % 400 == 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if (x % 4 == 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}
int main()
{
	int year = 0;
	printf("请输入想要查询的年份：");
	scanf("%d", &year);
	if (leapyear(year) == 0)
	{
		printf("%d不是闰年",year);
	}
	else
	{
		printf("%d是闰年",year);
	}
	return 0;
}