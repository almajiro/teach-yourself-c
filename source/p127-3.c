#include "stdio.h"
#include "string.h"

int main(void)
{
	char bigstr[255] = "", str[80];

	while(1){
		gets(str);
		if(!strcmp(str, "quit")) break;
		strcat(bigstr, "\n");
		if(strlen(bigstr) + strlen(str) >= 254) break;
		strcat(bigstr, str);
	}

	printf("%s\n", bigstr);
	return 0;
}
