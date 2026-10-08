#define _CRT_SECURE_NO_WARNINGS   /* 必须写在 #include 之前 */
#include <stdio.h>
int main()
{
    int m, t, s;
    int x;
    scanf("%d%d%d", &m, &t, &s);
    if (t == 0)
    {
        x = 0;
    }
    else
    {
        x = m - s / t;
        if (s % t != 0)
            x = x - 1;
    }
    if (x < 0)
        x = 0;
    printf("%d\n", x);
    return 0;
}