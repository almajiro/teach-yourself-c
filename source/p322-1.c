#include <stdio.h>

int main(void)
{
	int val;

	printf("数値を入力: ");
	scanf("%d", &val);

	printf("2倍: %d\n", val<<1);
	printf("2/1倍: %d\n", val>>1);
}
