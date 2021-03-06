#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp1, *fp2;
	char ch;
	
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

	while(!feof(fp1)){
		ch = fgetc(fp1);

		if(ferror(fp1)){
			puts("ファイルの読み込みに失敗しました。");
			exit(1);
		}

		if(feof(fp1)) break;

		fputc(ch, fp2);
		if(ferror(fp2)){
			puts("ファイルの書き込みに失敗しました。");
			exit(1);
		}
	}

	fclose(fp1);
	fclose(fp2);
}
