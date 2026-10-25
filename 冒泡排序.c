#define _CRT_SECURE_NO_WARNINGS   /* 必须写在 #include 之前 */
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int a[1005];
	for (int i = 0;i < n;i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0;i < n - 1;i++)
	{
		for (int j = 0;j < n - 1 - i;j++)
		{
			if (a[j] > a[j + 1])
			{
				int t;
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	for (int i = 0;i < n;i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}