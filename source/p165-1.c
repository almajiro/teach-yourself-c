#include <stdio.h>

void mystrcat(char *, char *);

int main(void)
{
	char string[255] = "my name is ";

	printf("before mystrcat: %s\n", string);
	mystrcat(string, "almajiro");
	printf("after mystrcat: %s\n", string);

	return 0;
}

void mystrcat(char *to, char *string)
{
	while(*to) to++;
	while(*string) *to++ = *string++;
	*to = '\0';
}
