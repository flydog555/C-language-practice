#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//字符串拷贝strcpy函数
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abc";
//	strcpy(arr1, arr2);//括号内第一个变量为目的地，第二个为输出函数
//	printf("%s\n", arr1);
//	return 0;
//}

//设计函数找到两个数里面的最大值
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

//设计函数使两个值调换

void Swap(int*pa,int*pb)  //函数返回类型的地方为void时，表示函数不返回任何值
{                       //调用函数时，x/y与a/b的地址空间不同
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