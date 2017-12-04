#include <stdio.h>

int main(void)
{
	int counter, *pointer;

	pointer = &counter;

	for(*pointer = 1; *pointer < 11; (*pointer)++)
		printf("%d\n", *pointer);

	return 0;
}

