#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double *p;

	p = malloc(sizeof(double));

	if(!p){
		puts("メモリ確保エラー");
		exit(1);
	}

	*p = 99.01;

	printf("%lf\n", *p);

	free(p);
}
