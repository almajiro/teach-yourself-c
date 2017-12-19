#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	int array[20], i;

	if((fp = fopen("TEMP", "rb")) == NULL){
		puts("ファイルがオープンできません。");
		exit(1);
	}

	fread(array, sizeof(int), 20, fp);

	for(i=0; i<20; i++) printf("%d\n", array[i]);

	fclose(fp);
}
