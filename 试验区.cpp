#define ADD(X,Y) ((X)+(Y))
#include <stdio.h>

int main()
{
	printf("%d\n", 4*ADD(9, 5)); //��#define ADD(X,Y) X+Y�������4*X+Y���ȳ˳�����Ӽ���
	return 0;
}