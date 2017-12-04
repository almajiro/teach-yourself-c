#include "stdio.h"

void series();

int i = 21;

int main(void)
{
	
	int j;
	for(j=0;j<10;j++){
		series();
		printf("%d\n", i);
	}

	return 0;
}

void series()
{
	i = (i * 1468) % 467;
}
