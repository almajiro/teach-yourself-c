#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	char ch;

	if(argc != 2){
		puts("引数は1つ必要です。");
		exit(1);
	}

	if((fp = fopen(argv[1], "r")) == NULL){
		puts("ファイルが開ません。");
		exit(1);
	}

	while((ch = fgetc(fp)) != EOF) putchar(ch);

	fclose(fp);
	return 0;
}
