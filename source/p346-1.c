#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *p;

	p = malloc(80);

	if(!p){
		puts("allocation failed");
		exit(1);
	}

	printf("Enter a string: ");
	gets(p);
	printf(p);
	free(p);
}
