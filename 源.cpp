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
	printf("��%d�εݹ飺", count);
	printf("%d��%d���ݣ�%d\n", x, n, y);
	return y;
}
int main()
{
	int x, n,z;
	printf("���������X��");
	scanf("%d", &x);
	printf("������ָ��n��");
	scanf("%d", &n);
	z = power(x, n);
	printf("���Ϊ��%d\n", z);
	return 0;
}