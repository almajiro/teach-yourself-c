#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, *p;

	p = malloc(10*sizeof(int));
	if(!p){
		puts("メモリの確保に失敗");
		exit(1);
	}

	for(i=0; i<10; i++)
		*(p+i) = i+1;

	for(i=0; i<10; i++)
		printf("%d\n", *(p+i));

	free(p);
}

