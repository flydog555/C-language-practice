#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//�ַ�������strcpy����
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abc";
//	strcpy(arr1, arr2);//�����ڵ�һ������ΪĿ�ĵأ��ڶ���Ϊ�������
//	printf("%s\n", arr1);
//	return 0;
//}

//��ƺ����ҵ���������������ֵ
//int get_max(int x, int y) 
//{
//	int z = 0;
//	if (x <= y)
//	{
//		z = y;
//	}
//	else
//	{
//		z = x;
//	}
//	return z;
//}
//
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int max = get_max(a, b);
//
//	printf("%d", max);
//	return 0;
//}

//��ƺ���ʹ����ֵ����

void Swap(int*pa,int*pb)  //�����������͵ĵط�Ϊvoidʱ����ʾ�����������κ�ֵ
{                       //���ú���ʱ��x/y��a/b�ĵ�ַ�ռ䲻ͬ
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;

}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int* pa = &a;
	int* pb = &b;
	printf("a=%d;b=%d\n", a, b);
	Swap(&a, &b);
	printf("a=%d;b=%d", a, b);
	return 0;
}