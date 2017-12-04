#include "stdio.h"

float soundspeed(int);

int main()
{
	int val;

	scanf("%d", &val);
	printf("%f\n", soundspeed(val));
	return 0;
}

float soundspeed(int val)
{
	return val / 331.45;
}
