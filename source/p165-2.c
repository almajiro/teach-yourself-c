#include <stdio.h>

void myfunc(int *);

int main(void)
{
	int number;

	myfunc(&number);
	printf("%d\n", number);

	return 0;
}

void myfunc(int *num)
{
	*num = 1;
}

