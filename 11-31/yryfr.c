#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
#if 0
int search_arrary(int* arrary, int num)
{
	int i;
	int j;
	int flag = 0;
	printf("只出现一次的两个数字：");
	for (i = 0; i < num; i++)
	{
		flag = 0;
		for (j = 0; j <num; j++)
		{
			if (arrary[j] == arrary[i] && i != j)
			{
				flag = 1;
			}
		}
		if (0 == flag)
		{
			printf("%d ", arrary[i]);
		}
	}
	printf("\n");
}
int main()
{
	int arrary[] = { 12,23,34,56,67,12,34,67 };
	int  num = sizeof(arrary) / sizeof(arrary[0]);
	search_arrary(arrary, num);
	system("pause");
	return 0;
}
int change_bottle(int m)
{
	int n = 1, s; 
	int sum = m; 
	while (n != 0)
	{
		n = m / 2;
		s = m % 2;
		m = n + s;
		sum = sum + n;
	}
	return sum;
}
int main()
{
	int i = change_bottle(20);
	printf("%d", i);
	system("pause");
	return 0;
}
#endif // 0
int main()
{
	char str1[20] = "i am a ", str2[14] = "student";
	strcpy(str1, str2);
	puts(str1);
}

