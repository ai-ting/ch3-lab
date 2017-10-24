#include<stdio.h>
#include<stdlib.h>

long int factorial(int p);

void main(void)
{
	int m, n;
	long int ans;
	long int a, b, c;

	printf("�D�ƦC�զXc(m,n)\n");
	printf("m=");
	scanf("%d", &m);
	printf("n=");
	scanf("%d", &n);

	a = factorial(m);
	b = factorial(n);
	c = factorial(m - n);

	ans = a / (b*c);
	printf("c(%d,%d)=%d\n", m, n, ans);
	
	system("pause");
}

long int factorial(int p)
{0
	int count;
	long int result = 1;

	for (count = 1; count <=p; count++)
	{
		result = result*count;
	}
	return result;
}
