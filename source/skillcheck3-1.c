#include "stdio.h"
#include "./includes/almajiro.h"

int main()
{
	char ch;

	do{
		ch = getche();
		if(ch != '\n') printf("\n%c\n", (ch - 32));
	}while(ch != '\n');

	return 0;
}