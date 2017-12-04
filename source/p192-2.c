#include <stdio.h>
#include <ctype.h>

int string_up(int character);

int main(void)
{
	char *string = "almajiro";

	while(*string){
		printf("%c", string_up(*string));
		string++;
	}

	printf("\n");
}

int string_up(int character)
{
	return toupper(character);
}
