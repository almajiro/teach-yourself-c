#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <almajiro.h>

int main(int argc, char *argv[])
{
	char buffer[255];
	FILE *fp;

	if(argc != 2){
		puts("引数は2つ必要です。");
		exit(1);
	}

	if((fp = fopen(argv[1], "r")) == NULL){
		puts("ファイルがオープンできませんでした。");
		exit(1);
	}

	while(!feof(fp)){
		fgets(buffer, 135, fp);
		if(!feof(fp)) puts(buffer);
		printf("続けますか？(Y/N): ");
		if(toupper(getche()) == 'N') break;
		puts("");
	}
}
