#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void plus1(int*p)
{
	(*p)++;
}
int main()
{
	int num = 0;
	plus1(&num);
	printf("%d\n", num);
	return 0;
}