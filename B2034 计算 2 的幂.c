#define _CRT_SECURE_NO_WARNINGS   /* 必须写在 #include 之前 */
#include<stdio.h>
int main()
{
	int x;
	int n, i;
	n = 1;
	i = 1;
	scanf("%d", &x);
	if (x == 0)
		printf("%d", n);
	else
	{
		while (i <= x)
		{
			n = n * 2;
			i++;
		}
		printf("%d", n);
	}
	return 0;
}