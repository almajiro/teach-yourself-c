#include <stdio.h>

int main(void)
{
	int i, j;

	printf("2つの整数を入力: ");
	scanf("%d%d", &i, &j);

	i = j ? i/j : 0;
	printf("結果: %d", i);
}
