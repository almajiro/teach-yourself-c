#include <stdio.h>

int main(void)
{
	int i;

	printf("数値を入力: ");
	scanf("%d", &i);

	printf("乗算: %d\n", i<<1);
	printf("除算: %d\n", i>>1);
}
