#include <stdio.h>
#include <stdlib.h>

void mycopy(char *from, char *to);

int main(int argc, char *argv[])
{
	if(argc != 3){
		printf("usage: %s <from> <to>\n", argv[0]);
		exit(1);
	}

	mycopy(argv[1], "temp");
	mycopy(argv[2], argv[1]);
	mycopy("temp", argv[2]);

	return 0;
}

void mycopy(char *from, char *to)
{
	FILE *from_fp, *to_fp;
	char data;

	if((from_fp = fopen(from, "rb")) == NULL){
		printf("%sが開ませんでした。\n", from);
		exit(1);
	}

	if((to_fp = fopen(to, "wb")) == NULL){
		printf("%sが開ませんでした。\n", to);
		exit(1);
	}

	while(!feof(from_fp)){
		data = fgetc(from_fp);
		fputc(data, to_fp);
	}

	fclose(from_fp);
	fclose(to_fp);
}
