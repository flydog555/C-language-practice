#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//�ַ���
int main()
{
	char password[20] = { 0 };
	char password1[20] = { 0 };
	printf("���趨���룺");
	scanf("%s", password);
	getchar();
	printf("���ٴ�ȷ�����룺");
	scanf("%s", password1);
	getchar();
	while (strcmp(password, password1) != 0)
	{
		printf("�������벻һ�£����ٴ����룺");
		scanf("%s", password1);
		getchar();
	}
	printf("------||||||------\n\n\n");
	printf("��ӭ��½�����������룺");
	int i = 3;
	for (i = 3;i >= 0;i--)
	{
		char input[20] = { 0 };
		scanf("%s", input);
		if (strcmp(password, input) == 0)
		{
			printf("������ȷ����ӭ\n");
			break;
		}
		else if (strcmp(password, input) != 0 && i > 0)
		{
			printf("�����������������%d�λ���\n", i);
			printf("���ٴ��������룺");
		}
		else
		{
			;
		}

	}
	if (i < 1)
	{
		printf("\n��������������࣬���Ժ�����");
	}
	return 0;
}

//�����ְ�
//int main()
//{
//	int password = 0;
//	int password1 = 0;
//	printf("���趨���룺");
//	scanf("%d", &password);
//	getchar();
//	printf("���ٴ�ȷ�����룺");
//	scanf("%d", &password1);
//	getchar();
//	while (password != password1)
//	{
//		printf("�������벻һ�£����ٴ����룺");
//		scanf("%d", &password1);
//		getchar();
//	}
//	printf("------||||||------\n\n\n");
//	printf("��ӭ��½�����������룺");
//	int i = 3;
//	for(i = 3;i >= 0;i--)
//	{
//		int input = 0;
//		scanf("%d", &input);
//		if (input == password)
//		{
//			printf("������ȷ����ӭ\n");
//			break;
//		}
//		else if(input!=password&&i>0)
//		{
//			printf("�����������������%d�λ���\n",i);
//			printf("���ٴ��������룺");
//		}
//		else
//		{
//			;
//		}
//
//	}
//	if (i < 1)
//	{
//		printf("\n��������������࣬���Ժ�����");
//	}
//	return 0;
//}