#define ADD(X,Y) ((X)+(Y))
#include <stdio.h>

int main()
{
	printf("%d\n", 4*ADD(9, 5)); //若#define ADD(X,Y) X+Y计算过程4*X+Y（先乘除，后加减）
	return 0;
}