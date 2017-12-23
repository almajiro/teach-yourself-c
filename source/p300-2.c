#include <stdio.h>

char *mystrcpy(char *to, const char *from);

int main(void)
{
	char *p, str[80];

	p = mystrcpy(str, "steins;gate");

	printf("%s %s\n", p, str);
	
}

char *mystrcpy(char *to, const char *from)
{
	char *temp = to;
	
	while(*from) *to++ = *from++;
	*to = '\0';

	return temp;
}
