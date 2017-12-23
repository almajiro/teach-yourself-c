#include <stdio.h>

char str[80];

void getname(void);

int main(void)
{
	getname();
	printf("Hello %s\n", str);
}
