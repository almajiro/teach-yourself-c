#include <stdio.h>
#include <string.h>

int main(void)
{
	char string[80];

	do {
		gets(string);
	} while (strcmp(string, "quit") != 0);
}

