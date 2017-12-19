#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	int array[20], i;

	if((fp = fopen("TEMP", "wb")) == NULL){
		puts("ファイルがオープンできませんでした。");
		exit(1);
	}

	for(i=0; i<20; i++){
		array[i] = i + 1;
	}

	fwrite(array, sizeof(int), 30, fp);
	
	fclose(fp);
}
