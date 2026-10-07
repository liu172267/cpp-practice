#define _CRT_SECURE_NO_WARNINGS   /* 必须写在 #include 之前 */
#include <stdio.h>
#include <math.h> 
int main()
{
	int a, b;
	int x;
	scanf("%d%d", &a, &b);
	x = (a * 10 + b) / 19;
	printf("%d\n", x );
	return 0;
}