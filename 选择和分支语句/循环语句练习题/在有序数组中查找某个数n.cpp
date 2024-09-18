#include <stdio.h>

//折半(二分)查找法
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;//要查找的数字
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	while (left<=right)//注意取等的情况
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
			printf("找到了%d\n", mid + 1);
			break;
		}
	}
	if (left > right)
	{
		printf("无法找到该数");
	}
	return 0;
}