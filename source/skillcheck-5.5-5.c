#include <stdio.h>
#include <string.h>
#include "almajiro.h"

int main(void)
{
	char keyword[] = "concatenation";
	char table[] = "_____________";
	char ch;

	int i, count;

	do{
		printf("マジックワード: %s\n", table);
		printf("当てはまる文字を１字入力 ==> ");
		ch = getche();

		for(i=0;i<strlen(keyword);i++){
			if(keyword[i] == ch) table[i] = ch;
		}

		count++;

		printf("\n");
	}while(strcmp(keyword, table) != 0);

	printf("正解: %s\n", table);
	printf("全て正解するのに%d回掛かりました。\n", count);

	return 0;
}

