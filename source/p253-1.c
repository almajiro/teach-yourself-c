#include <stdio.h>

int main(void)
{
	char ch;

	while(!feof(stdin)){
		scanf("%c", &ch);
		printf("%c", ch);
	}
}
