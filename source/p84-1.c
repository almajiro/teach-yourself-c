#include "stdio.h"
#include "./includes/almajiro.h"

int main()
{
	int character = 0, digit = 0, other = 0;
	char ch;

	do{
		ch = getche();
		switch(ch){
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
				digit++;
				break;

			case '.':
			case '!':
			case '&':
			case ',':
			case '-':
				other++;
				break;

			default:
				character++;
				break;
		}
	}while(ch != '\n');

	printf("Character: %d\n", character);
	printf("Digit: %d\n", digit);
	printf("Other: %d\n", other);

	return 0;
}