#include <stdio.h>

int main(void)
{
	int numbers[10];
	int i, even = 0, odd = 0;

	for(i=0;i<10;i++){
		printf("%d個目のデータを入力 ==> ", i+1);
		scanf("%d", &numbers[i]);
		if(numbers[i] % 2) odd++;
		else even++;
	}

	printf("偶数: %d\n", even);
	printf("奇数: %d\n", odd);

	return 0;
}
