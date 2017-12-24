#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char comp(char *i, char *j);

int main(void)
{
	char str[] = "this is a test of qsort";

	puts(str);
	qsort(str, strlen(str), sizeof(char), comp);
	puts(str);
}

char comp(char *i, char *j)
{
	return *i - *j;
}
