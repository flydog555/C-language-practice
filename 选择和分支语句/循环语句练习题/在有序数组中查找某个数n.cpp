#include <stdio.h>

//�۰�(����)���ҷ�
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;//Ҫ���ҵ�����
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	while (left<=right)//ע��ȡ�ȵ����
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ���%d\n", mid + 1);
			break;
		}
	}
	if (left > right)
	{
		printf("�޷��ҵ�����");
	}
	return 0;
}