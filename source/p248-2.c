#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	char query, temp;

	if(argc != 3){
		printf("usage: %s <filename> <query>\n", argv[0]);
		exit(1);
	}

	query = atoi(argv[2]);

	if((fp = fopen(argv[1], "rb")) == NULL){
		puts("ファイルを開くことができません。");
		exit(1);
	}

	while(!feof(fp)){
		temp = fgetc(fp);
		if(temp == query) printf("%ldで見つかりました。\n", ftell(fp));
	}

	return 0;
}
