#include <stdio.h>

void prompt(char *msg, char *string);

int main(void)
{
	char string[255];
	prompt("なんか入力してください", string);
	printf("string: %s\n", string);
	return 0;
}


void prompt(char *msg, char *string){
	printf("%s: ", msg);
	gets(string);
}
