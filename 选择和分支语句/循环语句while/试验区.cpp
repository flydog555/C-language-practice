#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//打印1-10
//int main()
//{
//	int a = 1;
//	while (a <= 10)
//	{
//		printf("%d\n", a);
//		a++;
//	}
//	return 0;
//}

//密码的设定（多个scanf/getchar与清除缓冲区）
int main()
{
	char password[20] = { 0 };
	printf("请设定密码：");
	scanf("%s", password);
	printf("请确认密码（Y/N）：");
	//getchar();//清除缓冲区（清除"\n"） 低级，仅能处理一段字符
	
	//清理缓冲区的多个字符
	int tmp = 0;//初始化
	while ((tmp = getchar()) != '\n')//判断
	{
		;//调整
	}


	int ch = getchar();
	if (ch == 'Y')
	{
		printf("确认成功");
	}
	else
	{
		printf("确认失败");
	}

	return 0;
}