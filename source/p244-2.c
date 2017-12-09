#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;

	int count ,i;
	double temp, avg = 0;

	if((fp = fopen("COUNT", "rb")) == NULL){
		puts("ファイルが開ません。");
		exit(1);
	}

	// 一応のエラー処理
	if(fread(&count, sizeof(count), 1, fp) != 1){
		puts("ファイルの読み込みに失敗しました。");
		exit(1);
	}

	fclose(fp);

	if((fp = fopen("VALUES", "rb")) == NULL){
		puts("ファイルが開ません。");
		exit(1);
	}

	for(i=0; i<count; i++){
		if(fread(&temp, sizeof(temp), 1, fp) != 1){
			puts("ファイルの読み込みに失敗しました。");
			exit(1);
		}
		avg += temp;
	}

	fclose(fp);

	printf("average: %lf\n", avg / (count - 1));

	return 0;
}

