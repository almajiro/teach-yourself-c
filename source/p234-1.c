#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	unsigned long length = 0;

	if(argc != 2){
		printf("usage: %s <filename>\n", argv[0]);
		exit(1);
	}

	if((fp = fopen(argv[1], "r")) == NULL){
		puts("ファイルが開ません。\n");
		exit(1);
	}

	while(!feof(fp)){
		fgetc(fp);
		if(ferror(fp)){
			puts("ファイルエラーが発生しました。");
			exit(1);
		}
		length++;
	}

	printf("%ldbytes\n", length);

	return 0;
}
