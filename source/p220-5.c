#include <stdio.h>

int main(void)
{
	char string[80];

	scanf("%*[0-9]%s", string);
	printf(string);
}
