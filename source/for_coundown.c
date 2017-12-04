#include "stdio.h"

int main()
{
	int i;

	printf("Enter the Number: ");
	scanf("%d", &i);

	for(;i>=0;i--){
		printf("%d ", i);
	}

	printf("\n\a");

	return 0;
}