#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	int i, temp;

	if((fp = fopen("RAND", "wb")) == NULL){
		puts("ファイルが開ませんでした");
		exit(1);
	}

	for(i=0; i<100; i++){
		temp = rand();
		fwrite(&temp, sizeof(int), 1, fp);
	}
	
	fclose(fp);
}
