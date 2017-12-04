#include <stdio.h>
#include <string.h>

int main(void)
{
	char string[255];
	int i;

	for(i=0;i<3;i++){
		printf("Enter Password: ");
		gets(string);

		if(!strcmp(string, "Tristan")){
			printf("Log-on successful\n");
			break;
		}
		else{
			printf("Access denied\n");
		}
	}

	return 0;
}
