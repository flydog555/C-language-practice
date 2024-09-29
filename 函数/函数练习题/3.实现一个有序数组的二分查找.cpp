#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int binary_search(int a[], int x, int y)//找到了 返回下标，找不到 返回-1
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
	//printf("请输入一组数(从大到小)：");
	//scanf("%s", arr);                             //未解决scanf函数输入数组时空格问题
	//getchar();
	printf("请输入要寻找的一个数：");
	scanf("%d", &a);
	int sz = sizeof(arr) / sizeof(arr[0]);          //在函数外求元素个数的原因：数组arr传参，实际传递的不是数组本身，而是数组首个元素的地址
	int e = binary_search(arr, a, sz);
	if (e == -1)
	{
		printf("该数列中没有该数\n");
	}
	else
	{
		printf("%d的下标为第%d位\n", a, e);
	}
	
	return 0;
}