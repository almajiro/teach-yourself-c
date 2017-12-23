#include <stdio.h>

int sum(int a, int b);

int main(void)
{
	int (*p)(int a, int b);
	int result;

	p = sum;
	result = (*p)(2,3);
	printf("%d\n", result);
}

int sum(int a, int b)
{
	return a+b;
}
