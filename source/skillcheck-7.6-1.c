#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(argc != 2){
		printf("引数は2つ必要です。\n");
		exit(1);
	}

	if(!strcmp(argv[1], "passw0rd")){
		printf("Access permitted.\n");
	}
	else{
		printf("Access denied.\n");
	}
}
