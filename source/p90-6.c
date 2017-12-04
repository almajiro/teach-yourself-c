#include "stdio.h"

int main()
{
	int num;
	float val;

	do{
		printf("変換\n");
		printf("1. フィートからメートルへ\n");
		printf("2. メートルからフィートへ\n");
		printf("3. ポンドからキログラムへ\n");
		printf("4. キログラムからポンドへ\n");
		printf("5. 終了\n");
		do{
			printf("番号を選んで入力してください: ");
			scanf("%d", &num);
		}while(num < 0 || num > 5);

		if(num > 0 && num < 5){
			printf("数値を入力: ");
			scanf("%f", &val);
		}

		switch(num){
			case 1:
				printf("%.1fメートル\n", val / 3.28);
				break;
			case 2:
				printf("%.1fフィート\n", val * 3.28);
				break;
			case 3:
				printf("%.1fキログラム\n", val / 0.4536);
				break;
			case 4:
				printf("%.1fポンド\n", val * 0.4360);
				break;
		}

	}while(num != 5);

	return 0;
}