#include <stdio.h>

void display(char toDisp);

int main(void)
{
	display('A');
}

void display(char toDisp)
{
	printf("%c ", toDisp);
	if(toDisp != 'Z') display(toDisp + 1);
}
