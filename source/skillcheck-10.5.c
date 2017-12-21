#include <stdio.h>
#include <stdlib.h>

struct _worker{
	char name[20];
	int phone;
	int hour;
	int wage;
};

int main(void)
{
	FILE *fp;
	struct _worker worker[10];
	int i;

	if((fp = fopen("EMP", "rb")) == NULL){
		puts("ファイルがオープンできませんでした。");
		exit(1);
	}

	fread(worker, sizeof(worker), 1, fp);
	fclose(fp);

	for(i=0; i<10; i++){
		printf("----%2d人目のデータ----\n", i+1);
		printf("名前: %s\n", worker[i].name);
		printf("電話番号: %d\n", worker[i].phone);
		printf("勤務時間: %d\n", worker[i].hour);
		printf("時間給: %d\n", worker[i].wage);
		printf("----------------------\n");
	}
}
