#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

char prime(int x) 
{
	int i = 0;
	int t = 0;
	for (i = 2;i < x;i++)
	{
		if (x % i==0)
		{
			return 0;
			t = 1;
			break;
		}
		
		
	}
	if (t == 0)
	{
		return 1;
	}
}
int main()
{
	int a = 0;
	printf("请输入一个整数：");
	scanf("%d", &a);
	if (prime(a) == 0)
	{
		printf("%d不是素数\n", a);
	}
	else
	{
		printf("%d是素数\n", a);
	}
	return 0;
}

//还未解决字符乱码问题
//char prime(int x)
//{
//	int i = 0;
//	int t = 0;
//	for (i = 2;i < x;i++)
//	{
//		if (x % i == 0)
//		{
//			return ' ';
//			t = 1;
//			break;
//		}
//
//
//	}
//	if (t == 0)
//	{
//		return '不';
//	}
//}
//int main()
//{
//	int a = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &a);
//	printf("%c", prime(a));
//	printf("是");
//	return 0;
//}