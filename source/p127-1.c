#include "stdio.h"
#include "string.h"

int main(void)
{
	int i;
	char string[255];

	gets(string);
	for(i=strlen(string);i>=0;i--){
		printf("%c", string[i]);
	}

	return 0;
}
