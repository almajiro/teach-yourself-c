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

	if((fp = fopen("EMP", "wb+")) == NULL){
		puts("ファイルがオープンできませんでした。");
	}

	for(i=0; i<10; i++){
		printf("%d人目の名前: ", i+1);
		scanf("%s", worker[i].name);
		printf("%d人目の電話番号: ", i+1);
		scanf("%d", &worker[i].phone);
		printf("%d人目の勤務時間: ", i+1);
		scanf("%d", &worker[i].hour);
		printf("%d人目の時間給: ", i+1);
		scanf("%d", &worker[i].wage);
	}

	fwrite(worker, sizeof(worker), 1, fp);
	fclose(fp);
}
