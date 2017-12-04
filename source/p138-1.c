#include <stdio.h>

int main(void)
{
	char numbers[][10] =
	{
		"zero",
		"one",
		"two",
		"three",
		"four",
		"five",
		"six",
		"seven",
		"nine",
		"ten"
	};

	char num;

	printf("番号を入力してください ==> ");
	scanf("%d", &num);

	printf("%s\n", numbers[num]);

	return 0;
}
