#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
//��������

//int a = 189;
//int main()
//{
//	a = a + 5;
//	printf("%d\n" , a);
//	return 0;
//}


//���������a��b�ĺ�
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	printf("%d\n", sum);
//	return 0;
//}

//ö�ٳ���
int main()
{
	enum sex
	{
		male=3, //����ֵ
		female=7,
		secret,
	};
	enum sex s = male;
	printf("%d\n", male);
	printf("%d\n", female);
	printf("%d\n", secret);


	return 0;
}