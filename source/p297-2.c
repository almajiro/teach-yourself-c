#include <stdio.h>

void sum_it(int value);

int main(void)
{
	sum_it(3);
	sum_it(6);
	sum_it(4);
}

void sum_it(int value)
{
	static int sum = 0;

	sum += value;
	printf("%d\n", sum);
}
