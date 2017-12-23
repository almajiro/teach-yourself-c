#include <stdio.h>
#include <stdlib.h>

int comp(int *i, int *j);

int main(void)
{
	int sort[100], i;

	for(i=0; i<100; i++)
		sort[i] = rand();

	qsort(sort, 100, sizeof(int), comp);

	for(i=0; i<100; i++)
		printf("%d\n", sort[i]);
}

int comp(int *i, int *j)
{
	return *i - *j;
}
