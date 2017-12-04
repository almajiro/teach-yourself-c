#include "stdio.h"

int main(void)
{
	int array[][3] =
	{
		1, 1, 1,
		2, 4, 8,
		3, 9, 27,
		4, 16, 64,
		5, 25, 125,
		6, 36, 216,
		7, 49, 343,
		8, 64, 512,
		9, 81, 729,
		10, 100, 1000
	};

	int num, i, j, flag = 0;

	printf("3乘した数を入力 ==> ");
	scanf("%d", &num);

	for(i=0;i<10;i++){
		for(j=0;j<3;j++){
			if(num == array[i][j]){
				flag = 1;
				break;
			}
		}
		if(flag) break;
	}

	if(flag) printf("1乗: %d, 2乗: %d, 3乗: %d\n", array[i][0], array[i][1], array[i][2]);
	else printf("該当するものが見つかりませんでした。\n");

	return 0;
}
