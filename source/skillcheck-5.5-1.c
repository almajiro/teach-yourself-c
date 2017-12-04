#include <stdio.h>
#include <string.h>

int main(void)
{
	char string[255];
	int i;

	gets(string);

	if(strlen(string) < 80)
		for(i=strlen(string);i<254;i++)
			strcat(string, ".");

	printf("%s", string);

	return 0;
}
