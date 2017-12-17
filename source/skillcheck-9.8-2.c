#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	FILE *fp1, *fp2;
	char ch;

	if(argc != 3){
		puts("引数は2つ必要です。");
		exit(1);
	}

	if((fp1 = fopen(argv[1], "r")) == NULL){
		puts("コピー元のファイルが開ません。");
		exit(1);
	}

	if((fp2 = fopen(argv[2], "w")) == NULL){
		puts("コピー先のファイルを作成できません。");
		exit(1);
	}

	while(!feof(fp1)){
		ch = fgetc(fp1);
		if(!feof(fp1)) fputc(toupper(ch), fp2);
	}

	fclose(fp1);
	fclose(fp2);
}
