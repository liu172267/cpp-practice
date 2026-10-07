#define _CRT_SECURE_NO_WARNINGS   /* 必须写在 #include 之前 */
#include <stdio.h>
#include <math.h> 
int main()
{
	int h, r;
	int v, x;
	scanf("%d %d", &h, &r);
	v = 314 * r * r * h;
	if (2000000 % v != 0)
		x = 2000000 / v + 1;
	else
		x = 2000000 / v;
	printf("%d\n", x);
	return 0;
}