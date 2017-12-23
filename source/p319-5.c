#include <stdio.h>

int main(void)
{
	unsigned char ch1, ch2, mask = 1;
	int i;

	puts("文字を2つ入力してください");
	scanf("%c %c", &ch1, &ch2);

	for(i=0; i<8; i++){
		if(((mask & ch1) && (mask & ch2))) printf("%dビット目が一致しています。\n", i+1);
		mask <<= 1;
	}
}
