#include <stdio.h>

int main(void)
{
	int i, j, k;

	for(i=0, j=-50, k=0; i<=100; i++, j++, k+=i+j){
		printf("%d\n", k);
	}
}
