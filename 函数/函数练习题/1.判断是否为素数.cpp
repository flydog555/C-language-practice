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
	printf("������һ��������");
	scanf("%d", &a);
	if (prime(a) == 0)
	{
		printf("%d��������\n", a);
	}
	else
	{
		printf("%d������\n", a);
	}
	return 0;
}

//��δ����ַ���������
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
//		return '��';
//	}
//}
//int main()
//{
//	int a = 0;
//	printf("������һ��������");
//	scanf("%d", &a);
//	printf("%c", prime(a));
//	printf("��");
//	return 0;
//}