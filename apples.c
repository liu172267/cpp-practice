#define _CRT_SECURE_NO_WARNINGS   /* 必须写在 #include 之前 */
#include <stdio.h>
#include <math.h> 
int main()
{
    int a;
    scanf("%d", &a);
    if (a <= 1)
        printf("Today, I ate %d apple.", a);
    else
        printf("Today, I ate %d apples.", a);
    return 0;
}