#include <stdio.h>

int main(void)
{
	char string[255];
	char *pointer;

	printf("文字列を入力 (MAX:254) ==> ");
	gets(string);

	pointer = string;

	while(*pointer && *pointer == ' ') pointer++;

	printf("%s", pointer);

	return 0;
}
