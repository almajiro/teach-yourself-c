#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	FILE *from_fp, *to_fp;
	char ch;
	int i, flag = 0;

	if(argc < 4){
		puts("引数は最低でも2つ必要です。");
		exit(1);
	}
	else if(argc == 4)
		if(!strcmp(argv[3], "watch")) flag = 1;

	if((from_fp = fopen(argv[1], "r")) == NULL){
		puts("元のファイルが開ません。");
		exit(1);
	}

	if((to_fp = fopen(argv[2], "w")) == NULL){
		puts("新規ファイルを作成できません。");
		exit(1);
	}

	while((ch = fgetc(from_fp)) != EOF){
		if(flag) putchar(ch);
		if(fputc(ch, to_fp) == EOF){
			puts("書き込みにエラーが発生しました。");
			break;
		}
	}

	fclose(from_fp);
	fclose(to_fp);

	return 0;
}
