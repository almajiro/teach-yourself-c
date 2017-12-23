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

	if((fp = fopen(argv[1], "rb")) == NULL){
		puts("ファイルがオープンできませんでした。");
		exit(1);
	}

	while(!feof(fp)){
		ch = fgetc(fp);
		if(!feof(fp)) putchar(~ch);
	}
	
	fclose(fp);
}
