#include "stdio.h"

int main()
{
	int i, j, k;

	for(k=0;k<10;k++){
		printf("第1の数を入力してください: ");
		scanf("%d", &i);

		printf("第2の数を入力してください: ");
		scanf("%d", &j);

		if(j) printf("%d\n", i/j);
		else printf("0は除算できません。\n");
	}

	return 0;
}