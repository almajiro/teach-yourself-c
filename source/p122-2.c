#include "stdio.h"

int main(void)
{
	int i, j, data[10];

	for(i=0;i<10;i++){
		printf("%d個目のデータを入力 ==> ", i+1);
		scanf("%d", &data[i]);
	}

	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(j==i) continue;
			else if(data[i] == data[j]){
				printf("%dが同じです。\n", data[i]);
				break;
			}
		}
	}

	return 0;
}
