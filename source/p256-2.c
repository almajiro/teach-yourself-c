#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;

	if((fp = fopen("TESTFILE", "w")) == NULL){
		puts("ファイルがオープンできません。");
		exit(1);
	}

	fprintf(fp, "%s %.2f %X %c", "This is a string", 1230.23, 0x1FFF, 'A');

	fclose(fp);
}
