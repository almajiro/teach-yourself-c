#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *from, *to;
	char str[255];

	if(argc != 3){
		printf("usage: %s <from> <to>", argv[0]);
		exit(1);
	}

	if((from = fopen(argv[1], "r")) == NULL){
		printf("%sが開ません。\n", argv[1]);
		exit(1);
	}

	if((to = fopen(argv[2], "w")) == NULL){
		printf("%sが開ません。\n", argv[2]);
		exit(1);
	}

	while(!feof(from)){
		fgets(str, 254, from);
		if(ferror(from)){
			puts("ファイルの読み込みに失敗しました。");
			exit(1);
		}

		if(!feof(from)) fputs(str, to); // ここのif大事
						// これがないと最後のループで
						// 同じ物がファイルへ出力される。

		if(ferror(to)){
			puts("ファイルの書き込みに失敗しました。");
			exit(1);
		}
	}

	return 0;
}
