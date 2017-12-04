#include <stdio.h>
#include <string.h>

int main(void)
{
	char string[255];
	int space = 0, comma = 0, period = 0;
	int i;

	printf("文字列を入力してください ==> ");
	gets(string);

	for(i=0;i<strlen(string);i++){
		switch(string[i]){
			case ' ':
				space++;
				break;
			case ',':
				comma++;
				break;
			case '.':
				period++;
				break;
		}
	}

	printf("space: %d\n", space);
	printf("comma: %d\n", comma);
	printf("period: %d\n", period);

	return 0;
}

