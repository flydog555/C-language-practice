#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("####################game#####################\n");
	printf("###################1.play####################\n");
	printf("###################0.exit####################\n");
	printf("#############################################\n");
}


int main()
{
	int input = 0;
	int back = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		if (input == 0)
		{
			printf("退出游戏");
		}
		else if (input == 1)
		{
			srand(time(NULL));
			int result = rand() % 101;
			int a = 0;
			char choose = 'a';
			int b = 0;
			printf("请猜一个数：");
			while (1)
			{
				scanf("%d", &a);
				getchar();
				if (a == result)
				{
					printf("回答正确");
					printf("是否继续？Y/N:");
					scanf("%c", &choose);
					getchar();
					if (choose == 'Y' || choose == 'y')
					{
						printf("请猜一个数：");
						srand(time(NULL));
						result = rand() % 101;
						continue;
					}
					else
					{
						printf("退出游戏");
						back = 1;
						break;

					}

				}
				else if (a > result && a <= 100 && a >= 0)
				{
					printf("猜大了，请重新猜\n");
					printf("请输入：");
				}
				else if (a < result && a <= 100 && a >= 0)
				{
					printf("猜小了，请重新猜\n");
					printf("请输入：");
				}
				else
				{
					printf("输入错误，请输入一个0-100的整数\n");
					printf("请输入：");
				}
			}
			if (back == 1)
			{
				break;
			}
		}
		else
		{
			printf("输入数据错误，请输入0或1\n");
		}
    } while (input);
	return 0;
}
