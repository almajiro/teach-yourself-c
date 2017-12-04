#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char *string;

	if(argc != 2){
		printf("引数は2つ必要です。\n");
		exit(1);
	}

	string = argv[1];

	while(*string){
		printf("%c", (*string + 1));
		string++;
	}

	printf("\n");
}
