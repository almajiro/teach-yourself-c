#include <stdio.h>

int sum(int a, int b);
int substract(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int (*p[4])(int a, int b) = { sum, substract, mul, div };

int main(void)
{
	int result;
	int i, j, op;

	printf("Enter two numbers: ");
	scanf("%d %d", &i, &j);

	puts("0: Add, 1: Substract, 2: Multiply, 3: Divide");

	do{
		printf("Enter number of operation: ");
		scanf("%d", &op);
	}while(op < 0 || op > 3);

	result = (*p[op])(i, j);
	printf("%d", result);
}

int sum(int a, int b)
{
	return a+b;
}

int substract(int a, int b)
{
	return a-b;
}

int mul(int a, int b)
{
	return a*b;
}

int div(int a, int b)
{
	return b ? a/b : 0;
}
