//计算1!+2!+...+n!
//int main()
//{
//	printf("请输入一个正整数：");
//	int n = 0;//
//	scanf("%d", &n);
//	int b = 0;
//	int t = 0;
//	int result = 0;
//	int arr[11] = { 0 };
//	for (t = 1;t <= n;t++)
//	{
//		int sum = 1;
//		for (b = 1;b <= t;b++)
//		{
//			sum = sum * b;
//		}
//		arr[t] = sum;
//		//printf("%d\n", sum);
//		sum = 0;
//		
//	}
//	int c = 0;
//	for (c = 0;c <= n;c++)
//	{
//		result = arr[c] + result;
//		//printf("arr[%d]=%d\n",c, arr[c]);
//
//	}
//	printf("%d\n", result);
//	return 0;
//}
//更简洁的方式
int main()
{
	printf("请输入一个正整数：");
	int n = 0;//
	scanf("%d", &n);
	int b = 0;
	int t = 0;
	int result = 0;
	for (t = 1;t <= n;t++)
	{
		int sum = 1;
		for (b = 1;b <= t;b++)
		{
			sum = sum * b;
		}
		result += sum;

	}
	printf("%d\n", result);
	return 0;
}