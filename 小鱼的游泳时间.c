#define _CRT_SECURE_NO_WARNINGS   /* 必须写在 #include 之前 */
#include <stdio.h>
#include <math.h> 
int main()
{
	int a, b;
	int c, d;
	int x;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	x = c * 60 + d - a * 60 - b;
	printf("%d %d\n", x / 60, x % 60);
	return 0;
}