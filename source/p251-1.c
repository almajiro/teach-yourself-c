#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "almajiro.h"

int main(void)
{
	char file[255];
	
	printf("削除するファイルの名前を入力してください: ");
	gets(file);

	printf("本当に削除してよろしいですか？(Y/N): ");
	if(toupper(getche()) == 'Y'){
		if(remove(file)){
			puts("\nファイルが存在しません。");
			exit(1);
		}
	}

	return 0;
}
