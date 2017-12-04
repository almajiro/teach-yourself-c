#include "stdio.h"

int main()
{
	double i;

	for(i=1 ; (int)i<10 ; i+=0.1){
		printf("%.1f\n", i);
	}
	return 0;
}
