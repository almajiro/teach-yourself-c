#include "stdio.h"

int main()
{
	int i;

	for(i=0;i<10;i++)
		printf("%d\n", i+1);

	i = 0;
	while(i < 10){
		printf("%d\n", i+1);
		i++;
	}

	i = 0;
	do{
		printf("%d\n", i+1);
		i++;
	}while(i < 10);

	return 0;
}