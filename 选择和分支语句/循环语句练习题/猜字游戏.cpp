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
		printf("��ѡ��");
		scanf("%d", &input);
		if (input == 0)
		{
			printf("�˳���Ϸ");
		}
		else if (input == 1)
		{
			srand(time(NULL));
			int result = rand() % 101;
			int a = 0;
			char choose = 'a';
			int b = 0;
			printf("���һ������");
			while (1)
			{
				scanf("%d", &a);
				getchar();
				if (a == result)
				{
					printf("�ش���ȷ");
					printf("�Ƿ������Y/N:");
					scanf("%c", &choose);
					getchar();
					if (choose == 'Y' || choose == 'y')
					{
						printf("���һ������");
						continue;
					}
					else
					{
						printf("�˳���Ϸ");
						back = 1;
						break;

					}

				}
				else if (a > result && a <= 100 && a >= 0)
				{
					printf("�´��ˣ������²�\n");
					printf("�����룺");
				}
				else if (a < result && a <= 100 && a >= 0)
				{
					printf("��С�ˣ������²�\n");
					printf("�����룺");
				}
				else
				{
					printf("�������������һ��0-100������\n");
					printf("�����룺");
				}
			}
			if (back == 1)
			{
				break;
			}
		}
		else
		{
			printf("�������ݴ���������0��1\n");
		}
    } while (input);
	return 0;
}