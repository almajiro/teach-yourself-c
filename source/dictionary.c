#include <stdio.h>
#include <string.h>

int main(void)
{
	char data[][2][255] =
	{
		"drink", "飲む、飲み干す、飲んでしまう",
		"walk", "歩く、散歩する、歩いていく",
		"say", "(…と)言う、言う、話す、述べる"
	};

	char words[30];
	int i;

	printf("単語を入力してください ==> ");
	gets(words);

	for(i=0;i<3;i++){
		if(strcmp(words, data[i][0]) == 0){
			printf("意味: %s\n", data[i][1]);
			break;
		}
		else if(i == 2){
			printf("データがありません。\n");
		}
	}

	return 0;
}
