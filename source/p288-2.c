#include <stdio.h>

int main(void)
{
	union {
		short int i;
		char ch[2];
	} my_data;

	printf("数値を入力してください: ");
	scanf("%hd", &my_data.i);

	printf("%c %c\n", my_data.ch[0], my_data.ch[1]);
}
