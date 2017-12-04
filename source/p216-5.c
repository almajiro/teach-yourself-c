#include <stdio.h>

int main(void)
{
	int num;

	printf("enter hex number: ");
	scanf("%x", &num);

	printf("decimal: %d\n", num);
	printf("octal: %o\n", num);
}
