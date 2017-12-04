#include "stdio.h"
#include "curses.h"

//int getche(void);

int main()
{
	char ch;

	printf("countinue? y/n (yes or no): ");
	ch = getche();

	return 0;
}