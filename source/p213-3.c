#include <stdio.h>

int main(void)
{
	char str[80];

	printf("アルファベットとスペースを入力しなさい\n");
	scanf("%[a-zA-Z ]", str);

	printf(str);
}
