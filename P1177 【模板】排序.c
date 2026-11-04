#define _CRT_SECURE_NO_WARNINGS   /* 必须写在 #include 之前 */
#include<stdio.h>
#include<stdlib.h>
int cmp(const void* a, const void* b)
{
	int x = *(const int*)a;
	int y = *(const int*)b;
	if (x < y) return -1;
	if (x > y) return 1;
	return 0;
}
int a[100005];
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0;i < n;i++)
	{
		scanf("%d", &a[i]);
	}
	qsort(a, n, sizeof(int), cmp);
	for (int i = 0;i < n;i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}