#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//字符版
int main()
{
	char password[20] = { 0 };
	char password1[20] = { 0 };
	printf("请设定密码：");
	scanf("%s", password);
	getchar();
	printf("请再次确认密码：");
	scanf("%s", password1);
	getchar();
	while (strcmp(password, password1) != 0)
	{
		printf("两次密码不一致，请再次输入：");
		scanf("%s", password1);
		getchar();
	}
	printf("------||||||------\n\n\n");
	printf("欢迎登陆，请输入密码：");
	int i = 3;
	for (i = 3;i >= 0;i--)
	{
		char input[20] = { 0 };
		scanf("%s", input);
		if (strcmp(password, input) == 0)
		{
			printf("密码正确，欢迎\n");
			break;
		}
		else if (strcmp(password, input) != 0 && i > 0)
		{
			printf("密码输入错误，您还有%d次机会\n", i);
			printf("请再次输入密码：");
		}
		else
		{
			;
		}

	}
	if (i < 1)
	{
		printf("\n输入密码次数过多，请稍后再试");
	}
	return 0;
}

//纯数字版
//int main()
//{
//	int password = 0;
//	int password1 = 0;
//	printf("请设定密码：");
//	scanf("%d", &password);
//	getchar();
//	printf("请再次确认密码：");
//	scanf("%d", &password1);
//	getchar();
//	while (password != password1)
//	{
//		printf("两次密码不一致，请再次输入：");
//		scanf("%d", &password1);
//		getchar();
//	}
//	printf("------||||||------\n\n\n");
//	printf("欢迎登陆，请输入密码：");
//	int i = 3;
//	for(i = 3;i >= 0;i--)
//	{
//		int input = 0;
//		scanf("%d", &input);
//		if (input == password)
//		{
//			printf("密码正确，欢迎\n");
//			break;
//		}
//		else if(input!=password&&i>0)
//		{
//			printf("密码输入错误，您还有%d次机会\n",i);
//			printf("请再次输入密码：");
//		}
//		else
//		{
//			;
//		}
//
//	}
//	if (i < 1)
//	{
//		printf("\n输入密码次数过多，请稍后再试");
//	}
//	return 0;
//}