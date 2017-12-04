#include "stdio.h"

int main()
{
	int i, j;

	printf("第1の数 i を入力してください: ");
	scanf("%d",&i);
	printf("第2の数 j を入力してください: ");
	scanf("%d",&j);

	/* 関係演算 */
	printf("i < j %d\n", i < j);
	printf("i <= j %d\n", i <= j);
	printf("i == j %d\n", i == j);
	printf("i > j %d\n", i > j);
	printf("i >= j %d\n", i >= j);

	/* 論理演算 */
	printf("i && j %d\n", i && j);
	printf("i || j %d\n", i || j);
	printf("!i && !j %d %d\n", !i, !j);

	return 0;
}