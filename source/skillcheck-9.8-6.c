#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	int i;

	if((fp = fopen("RAND","rb")) == NULL){
		puts("ファイルがオープンできませんでした。");
		exit(1);
	}

	printf("検索: (1-100): ");
	scanf("%d", &i);

	if(i > 0 && i < 101){
		i--;
		fseek(fp, i, SEEK_SET);
		fread(&i, sizeof(i), 1, fp);
		printf("%d\n", i);
	}
	else{
		printf("検索範囲外です。");
	}
}

