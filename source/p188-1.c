#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int flag;

	if(argc != 3){
		printf("引数は2つ必要です。\n");
		return 1;
	}

	flag = strcmp(argv[1], argv[2]);

	if(flag > 0){
		printf("%s > %s\n", argv[1], argv[2]);
	}
	else if(flag < 0){
		printf("%s > %s\n", argv[2], argv[1]);
	}
	else{
		printf("二つは同じです。\n");
	}

	return 0;
}
