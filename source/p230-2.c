#include <stdio.h>
#include <stdlib.h>	// exit()
#include <ctype.h>	// toupper()

int main(int argc, char *argv[])
{
	FILE *fp;
	int count[26], i;
	char ch;

	for(i=0; i<26; i++) count[i] = 0; // ゼロクリア

	if(argc != 2){
		puts("引数は2つ必要です。");
		exit(1);
	}

	if((fp = fopen(argv[1], "r")) == NULL){
		puts("ファイルが開ません。");
		exit(1);
	}

	while((ch = fgetc(fp)) != EOF){
		ch = toupper(ch);
		if(ch >= 'A' || ch <= 'Z') count[ ch - 'A' ]++;
	}
	fclose(fp);

	for(i=0; i<26; i++) printf("「%c」 合計: %d\n", i+'A', count[i]);

	return 0;
}
