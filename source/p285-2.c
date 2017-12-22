#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp1, *fp2;

	union {
		int val;
		char ch;
	} my_data;

	if(argc != 3){
		puts("引数は2つ必要です。");
		exit(1);
	}

	if((fp1 = fopen(argv[1], "r")) == NULL){
		puts("ファイルがオープンできませんでした。");
		exit(1);
	}

	if((fp2 = fopen(argv[2], "w")) == NULL){
		puts("ファイルがオープンできませんでした。");
		exit(1);
	}

	while(1){
		my_data.val = fgetc(fp1);
		if(my_data.val == EOF) break;

		fputc(my_data.ch, fp2);
	}

	fclose(fp1);
	fclose(fp2);
}
