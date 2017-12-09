#include <stdio.h>
#include <stdlib.h>
#include <almajiro.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	char str[255];
	char choice;
	int count = 0;

	if(argc != 2){
		printf("usage: %s <filename>", argv[0]);
		exit(1);
	}

	if((fp = fopen(argv[1], "r")) == NULL){
		puts("ファイルが開ませんでした。");
		exit(1);
	}

	while(!feof(fp)){
		fgets(str, 135, fp);
		if(!feof(fp)) puts(str);
		if(count == 29 && !feof(fp)){
			printf("More? (y/n): ");
			choice = getche();
			if(choice == 'y') count = 0;
			else break;
		}
		count++;
	}


	return 0;
}

