����n�Ľ׳�
int main()
{
	printf("������һ����������");
	int a = 0;
	scanf("%d", &a);
	int t = 0;
	int sum = 1;
	for (t = 1;t <= a;t++)
	{
		sum = sum * t;
	}
	printf("%d", sum);
	return 0;
}