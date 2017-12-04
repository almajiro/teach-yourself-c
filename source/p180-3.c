#include <stdio.h>

void display(char *string);

int main()
{
	display("almajiro\n");
	return 0;
}

void display(char *string)
{
	if(*string){
		printf("%c", *(string++));
		display(string);
	}
}
