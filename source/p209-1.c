#include <stdio.h>

int main(void)
{
	int i;

	for(i=1;i<101;i++){
		printf("%-3d ", i);
		printf("%-5d ", i*i);
		printf("%-7d\n", i*i*i);
	}
}
