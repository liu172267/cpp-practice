#define _CRT_SECURE_NO_WARNINGS   /* 必须写在 #include 之前 */
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int a[1005];
	for (int i = 0;i < n;i++)
		scanf("%d", &a[i]);
	int sum = 0;
	int max = a[0];
	int min = a[0];
	for (int i = 0;i < n;i++)
	{
		sum += a[i];
		if (a[i] > max) max = a[i];
		if (a[i] < min) min = a[i];
	}
	printf("%d %d %d", sum, max, min);
	return 0;
}