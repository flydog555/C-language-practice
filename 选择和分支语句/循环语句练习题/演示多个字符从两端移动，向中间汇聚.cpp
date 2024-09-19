#include <stdio.h>
#include <string.h>
#include <windows.h>

int main()
{
	char arr1[] = "Hello World!";
	char arr2[] = "############";
	int left = 0;
	int right = strlen(arr1) - 1;
	printf("%s\n", arr2);
	Sleep(1000);//Ë¯ÃßÒ»Ãë
	system("cls");//Çå¿ÕÆÁÄ»
	while (left < right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		left++;
		right--;
		Sleep(1000);
		system("cls");
	}
	return 0;
}