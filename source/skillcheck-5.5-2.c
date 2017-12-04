#include <stdio.h>
#include <string.h>

int main(void)
{
	char string[255];
	char toString[255];
	
	int i, j;

	printf("暗号化する文字列を入力してください (MAX:254) ==> ");
	gets(string);

	i = 0;
	j = strlen(string) - 1; // インデックスは文字数 -1 だから

	while(i <= j){
		if(i < j) printf("%c%c", string[i], string[j]);
		else printf("%c", string[i]);
		i++; j--;
	}

	return 0;
}
