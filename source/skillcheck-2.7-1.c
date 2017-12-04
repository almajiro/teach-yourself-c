#include "stdio.h"

int main()
{
	int value = 5;
	int i, input;

	printf("数当てゲーム\n");
	printf("チャンスは10回\n");

	for(i=0;i<10;i++){
		printf("数値を入力: ");
		scanf("%d", &input);

		if(input > value){
			printf("謎の数より大きいです！\n");
		} else if(input == value){
			printf("%d回で当たりました！\n", i+1);
			break;
		} else {
			printf("謎の数より小さいです！\n");
		}
	}

	return 0;
}