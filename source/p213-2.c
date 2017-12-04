#include <stdio.h>

int main(void)
{
	char str[80];

	printf("アルファベットを入力しなさい.\n");
	printf("中止するためにはそれ以外のものを入力しなさい.\n");
	scanf("%[a-zA-Z]", str);

	printf(str);
}
