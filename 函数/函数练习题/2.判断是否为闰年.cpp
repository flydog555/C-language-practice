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
	printf("��������Ҫ��ѯ����ݣ�");
	scanf("%d", &year);
	if (leapyear(year) == 0)
	{
		printf("%d��������",year);
	}
	else
	{
		printf("%d������",year);
	}
	return 0;
}