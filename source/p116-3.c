#include "stdio.h"

int main(void)
{
	long i;
	short j;
	double k;

	printf("long i=> ");
	scanf("%ld", &i);
	printf("short j=> ");
	scanf("%hd", &j);
	printf("double k=> ");
	scanf("%lf", &k);

	printf("%ld\n", i);
	printf("%hd\n", j);
	printf("%f\n", k);

	return 0;
}
