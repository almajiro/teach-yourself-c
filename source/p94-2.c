#include "stdio.h"

int main()
{
	signed int i;			// signed int
	unsigned int u; 		// unsigned int

	u = 65535;
	i = u;

	printf("%d %u", i, u);

	return 0;
}