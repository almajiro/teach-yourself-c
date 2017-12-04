#include <stdio.h>
#include <string.h>

int main(void)
{
	char data[][2][30] = 
	{
		"tanaka", "123-456-789",
		"masao", "421-532-5555",
		"satou", "0931-241-232"
	};

	char name[30];
	int i;

	printf("名前を入力: ");
	gets(name);

	for(i=0;data[i][0][0];i++){
		if(!strcmp(data[i][0], name)){
			printf("電話番号: %s", data[i][1]);
			break;
		}
	}

	return 0;
}
