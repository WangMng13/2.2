#include <stdio.h>
int count;
int power(int x, int n)
{
	int y;
	if (n == 0)
	{
		y = 1;
	}
	else
	{
		y = power(x, n / 2);
		y = y * y;
		if (n % 2 == 1)
		{
			y = y * x;
		}
	}
	count++;
	printf("第%d次递归：", count);
	printf("%d的%d次幂：%d\n", x, n, y);
	return y;
}
int main()
{
	int x, n,z;
	printf("请输入底数X：");
	scanf("%d", &x);
	printf("请输入指数n：");
	scanf("%d", &n);
	z = power(x, n);
	printf("结果为：%d\n", z);
	return 0;
}