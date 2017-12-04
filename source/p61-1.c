#include "stdio.h"

int main()
{
	int i;
	char ch, smallest = 127;

	printf("10文字入力: ");
	for(i=0;i<10;i++)
	{
		ch = getchar();
		if(ch < smallest) smallest = ch;
	}

	printf("最も小さい文字: %c\n", smallest);

	return 0;
}