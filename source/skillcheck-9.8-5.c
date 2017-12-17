#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	int value;

	if((fp = fopen("RAND", "rb")) == NULL){
		puts("ファイルがオープンできませんでした。");
		exit(1);
	}

	while(!feof(fp)){
		fread(&value, sizeof(value), 1, fp);
		printf("%d\n", value);
	}

}
