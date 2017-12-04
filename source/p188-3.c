#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(argc != 4){
		printf("引数は3つ必要です。\n");
		exit(1);
	}

	if(!strcmp("add", argv[1])){
		printf("%d", atoi(argv[2]) + atoi(argv[3]));
	}
	else if(!strcmp("substract", argv[1])){
		printf("%d", atoi(argv[2]) - atoi(argv[3]));
	}
	else if(!strcmp("multiply", argv[1])){
		printf("%d", atoi(argv[2]) * atoi(argv[3]));
	}
	else if(!strcmp("divide", argv[1])){
		printf("%d", atoi(argv[2]) / atoi(argv[3]));
	}

	return 0;
}
