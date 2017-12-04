#include <stdio.h>

int rstrlen(char *string);

int main(void)
{
	char *string = "almajiro";

	printf("rstrlen: %d", rstrlen(string));
}

int rstrlen(char *string)
{
	if(*string){
		string++;
		return 1 + rstrlen(string);
	}
	else{
		return 0;
	}
}
