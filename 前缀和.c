#define _CRT_SECURE_NO_WARNINGS   /* 必须写在 #include 之前 */
#include<stdio.h>
long long a[15];
long long prr[15];
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 1;i <= n;i++)
	{
		scanf("%lld", &a[i]);
		prr[i] = prr[i - 1] + a[i];
	}
	int m;
	scanf("%d", &m);
	for (int i = 0;i < m;i++)
	{
		int l, p;
		scanf("%d%d", &l, &p);
		printf("%lld\n", prr[p] - prr[l - 1]);
	}
	return 0;
}
/*解题思路：
  先创建一个数组a[i];
  再创建一个累加数组prr[i];
  那么对于区间l~p的和，就有prr[p] - prr[l - 1]
  至于循环多少次，就设定一个计数m
  特别注意：for (int i = 1;i <= n;i++)
*/