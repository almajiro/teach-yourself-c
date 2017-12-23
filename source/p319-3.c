#include <stdio.h>

int main(void)
{
	register int i;
	register int j = 0;

	for(i=1; i<=100; i++){
		j += i;
	}

	printf("%d\n", j);
}
