#include <stdio.h>

int fact(int number);

int main()
{
	printf("fact: %d", fact(4));
	return 0;
}

int fact(int number)
{
	if(number == 1) return 1;
	else return number * fact(number - 1);
}

