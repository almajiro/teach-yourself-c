#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	if(argc != 3){
		printf("引数は2つ必要です。\n");
		return 1;
	}

	printf("%d\n", (atoi(argv[1]) + atoi(argv[2])));
	return 0;
}
