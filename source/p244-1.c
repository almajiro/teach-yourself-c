#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	int i;
	double d = 1.0;

	if((fp = fopen("VALUES", "wb")) == NULL){ // open with binary+write mode
		puts("ファイルが開ませんでした。");
		exit(1);
	}

	for(i=0; d != 0 && i<32768; i++){
		printf("数値を入力 (0で終了): ");
		scanf("%lf", &d);
		fwrite(&d, sizeof(d), 1, fp);
	}

	fclose(fp);

	if((fp = fopen("COUNT", "wb")) == NULL){ // open with binary+write mode
		puts("ファイルが開ませんでした。");
		exit(1);
	}
	
	fwrite(&i, sizeof(i), 1, fp);

	fclose(fp);
	return 0;
}
