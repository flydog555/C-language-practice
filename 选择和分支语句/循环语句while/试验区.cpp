#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��ӡ1-10
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

//������趨�����scanf/getchar�������������
int main()
{
	char password[20] = { 0 };
	printf("���趨���룺");
	scanf("%s", password);
	printf("��ȷ�����루Y/N����");
	//getchar();//��������������"\n"�� �ͼ������ܴ���һ���ַ�
	
	//���������Ķ���ַ�
	int tmp = 0;//��ʼ��
	while ((tmp = getchar()) != '\n')//�ж�
	{
		;//����
	}


	int ch = getchar();
	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�");
	}
	else
	{
		printf("ȷ��ʧ��");
	}

	return 0;
}