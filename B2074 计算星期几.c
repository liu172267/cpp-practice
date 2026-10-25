#define _CRT_SECURE_NO_WARNINGS   /* 必须写在 #include 之前 */
#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int r = 1;
    for (int i = 0; i < b; i++)   // b 次乘法，每次都 % 7
        r = r * a % 7;

    switch (r)
    {
    case 0: printf("Sunday");    break;
    case 1: printf("Monday");    break;
    case 2: printf("Tuesday");   break;
    case 3: printf("Wednesday"); break;
    case 4: printf("Thursday");  break;
    case 5: printf("Friday");    break;
    case 6: printf("Saturday");  break;
    }

    return 0;
}