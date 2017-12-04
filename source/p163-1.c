#include <stdio.h>

int main(void)
{
	int *p, **p2, value;

	p = &value;
	p2 = &p;

	**p2 = 100;

	printf("value = %p\n", &value);
	printf("p = %p\n", p);
	printf("p2 = %p\n", p2);

	return 0;
}

