#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	char ch;
	long loc;

	if(argc != 2){
		printf("usage: %s <filename>\n", argv[0]);
		exit(1);
	}

	if((fp = fopen(argv[1], "rb")) == NULL){
		printf("ファイルが開ません。");
		exit(1);
	}

	fseek(fp, 0L, SEEK_END);
	loc = ftell(fp) - 1; // -1 0x0A

	printf("location: %ld\n", loc);

	fseek(fp, 0L, SEEK_SET);
	for( ; loc>=0L; loc = loc - 2L){
		ch = fgetc(fp);
		putchar(ch);
		fseek(fp, 1L, SEEK_CUR);
	}

	fclose(fp);
	puts("");

	return 0;
}
