#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int binary_search(int a[], int x, int y)//�ҵ��� �����±꣬�Ҳ��� ����-1
{
	int left = 0;
	int right = y - 1;
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (x < a[mid])
		{
			right = mid-1;
		}
		else if (x == a[mid])
		{
			return mid;
			break;
		}
		else //if (x > a[mid])
		{
			left = mid+1;
		}
	}
	if (left > right)
	{
		return -1;
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int a = 0;
	//printf("������һ����(�Ӵ�С)��");
	//scanf("%s", arr);                             //δ���scanf������������ʱ�ո�����
	//getchar();
	printf("������ҪѰ�ҵ�һ������");
	scanf("%d", &a);
	int sz = sizeof(arr) / sizeof(arr[0]);          //�ں�������Ԫ�ظ�����ԭ������arr���Σ�ʵ�ʴ��ݵĲ������鱾�����������׸�Ԫ�صĵ�ַ
	int e = binary_search(arr, a, sz);
	if (e == -1)
	{
		printf("��������û�и���\n");
	}
	else
	{
		printf("%d���±�Ϊ��%dλ\n", a, e);
	}
	
	return 0;
}