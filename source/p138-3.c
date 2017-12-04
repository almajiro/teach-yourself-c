#include "stdio.h"

int main(void)
{
	int numbers[20];
	int i, j, k, z = 0, x;

	for(i=0;i<20;i++){
		printf("%d個目の数値を入力 ==> ", i+1);
		scanf("%d", &numbers[i]);
	}

	for(i=0;i<20;i++){
		k = 0;
		for(j=0;j<20;j++){
			if(i == j) continue;
			if(numbers[i] == numbers[j]) k++;
		}
		if(k > z) x = i;
	}

	printf("最頻値は%dです。\n", numbers[x]);

	return 0;
}
