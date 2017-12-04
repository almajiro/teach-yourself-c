#include "stdio.h"
#include "./includes/almajiro.h"

int main()
{
	char ch;

	do{
		ch = getch();
		switch(ch){
			case '\t':
				printf("Tab\n");
				break;

			case '\n':
				printf("Carriage Return\n");
				break;

			case 0x7f:
				printf("Backspace\n");
				break;
		}
	}while(ch != 'q');

	return 0;
}