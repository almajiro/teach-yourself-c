#include "stdio.h"
#include "math.h"

int main(void)
{
	int i;

	for(i=1;i<=10;i++){
		printf("%lf\n", sqrt((double) i));
	}

	return 0;
}
