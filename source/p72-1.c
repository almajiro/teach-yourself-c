#include "stdio.h"
#include "curses.h"

int main()
{
	char ch = 0x00;
	double value;

	do{
		printf("ガロンを入力: ");
		scanf("%lf", &value);

		value = (double)value * 3.7854;

		printf("%.2fリットル\n", value);

		printf("まだ続けますか？(Y/N): ");
		ch = getch();
	}while(ch != 'n');

	return 0;
}