#include<stdio.h>
#include<stdlib.h>

int Odd(int u);
int Even(int u);
int TotalSum(int u);

int main(void)
{
	int n, sum;
	char addchoice;
	printf("1+2+...+n=?�п�Jn=");
	scanf("%d", &n);
	fflush(stdin);
	printf("�аݭn���_�ƩM(O)�A���ƩM(E)�A�٬O��ƩM(I)?�п��:");
	scanf("%s",&addchoice);

	switch (addchoice)
	{
		case'O':
			sum = Odd(n);
			break;
		case'E':
			sum = Even(n);
			break;
		case'I':
			sum = TotalSum(n);
			break;
		default:
			printf("��ܿ��~\n");
			return -1;
	}
	printf("�`�M��%d\n", sum);
	system("pause");
	return 0;
}

int Odd(int u)
{
	int i, total = 0;
	for (i = 1; i <= u; i++)
		if (i % 2 == 1)
			total = total + i;
	return total;

}

int Even(int u)
{
	int i, total = 0;
	for (i = 1; i <= u; i++)
		if (i % 2 == 0)
			total = total + i;
	return total;

}

int TotalSum(int u)
{
	return Odd(u) + Even(u);
}